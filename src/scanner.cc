#include <tree_sitter/parser.h>
#include <stdio.h>
#include <wctype.h>

enum TokenType {
  COMMENT_BLOCK
};

extern "C" void * tree_sitter_decisiongraph_external_scanner_create() {
  return NULL;
}

extern "C" void tree_sitter_decisiongraph_external_scanner_destroy(void *payload) {
  //noop
}

void tree_sitter_decisiongraph_external_scanner_reset(void *p) {
  //noop
}

extern "C" unsigned tree_sitter_decisiongraph_external_scanner_serialize(
  void *payload,
  char *buffer
) {
  return 0;
}

extern "C" void tree_sitter_decisiongraph_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
) {
  // noop
}

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

extern "C" bool tree_sitter_decisiongraph_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
    //printf("DEBUG PRINT\n");
    if (valid_symbols[COMMENT_BLOCK]) {
      lexer->result_symbol = COMMENT_BLOCK;
      while (iswspace(lexer->lookahead)) {
        advance(lexer);
      }
      if(lexer->lookahead != '<'){      
        return false;
      }
      advance(lexer);
      if(lexer->lookahead != '*'){
        return false;
      }
      advance(lexer);

      bool found_star = false;
      for(;;){
        if (lexer->lookahead == 0) return false;
        else if(lexer->lookahead == '*'){
          found_star = true;
        } else if(found_star && lexer->lookahead == '>') {
          advance(lexer);
          return true;
        }
        else {
          found_star = false;
        }
        advance(lexer);
      }
      return false;
    }
    return false;
}