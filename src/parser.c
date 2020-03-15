#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 233
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_LBRACK = 1,
  anon_sym_todo = 2,
  anon_sym_COLON = 3,
  anon_sym_RBRACK = 4,
  sym_free_text = 5,
  anon_sym_ask = 6,
  anon_sym_call = 7,
  anon_sym_GT = 8,
  anon_sym_consider = 9,
  anon_sym_when = 10,
  anon_sym_section = 11,
  anon_sym_continue = 12,
  anon_sym_LBRACK_DASH_DASH = 13,
  anon_sym_DASH_DASH_RBRACK = 14,
  anon_sym_end = 15,
  anon_sym_reject = 16,
  anon_sym_set = 17,
  anon_sym_SEMI = 18,
  anon_sym_EQ = 19,
  anon_sym_PLUS_EQ = 20,
  anon_sym_SLASH = 21,
  sym_slot_identifier = 22,
  anon_sym_POUNDimport = 23,
  aux_sym_decision_graph_name_token1 = 24,
  anon_sym_LBRACE = 25,
  anon_sym_text = 26,
  anon_sym_RBRACE = 27,
  anon_sym_title = 28,
  anon_sym_term = 29,
  anon_sym_answers = 30,
  anon_sym_slot = 31,
  anon_sym_options = 32,
  anon_sym_else = 33,
  anon_sym_LT = 34,
  anon_sym_LT_DASH_DASH = 35,
  aux_sym_comment_token1 = 36,
  sym__comment_block = 37,
  sym_file_path = 38,
  sym_source_file = 39,
  sym_decision_graph = 40,
  sym__top_level_node = 41,
  sym_todo_node = 42,
  sym_ask_node = 43,
  sym_call_node = 44,
  sym_consider_node = 45,
  sym_when_node = 46,
  sym_section_node = 47,
  sym_continue_node = 48,
  sym_part_node = 49,
  sym_reject_node = 50,
  sym_set_node = 51,
  sym_assignment_slot = 52,
  sym_atomic_assignment_slot = 53,
  sym_aggregate_assignment_slot = 54,
  sym_slot = 55,
  sym_import_node = 56,
  sym_decision_graph_name = 57,
  sym_text_sub_node = 58,
  sym_info_sub_node = 59,
  sym_terms_sub_node = 60,
  sym_term_sub_node = 61,
  sym_answers_sub_node = 62,
  sym_answer_sub_node = 63,
  sym_slot_sub_node = 64,
  sym_consider_options_sub_node = 65,
  sym_consider_option_sub_node = 66,
  sym_when_answer_sub_node = 67,
  sym_else_sub_node = 68,
  sym_node_id = 69,
  sym_node_id_value = 70,
  sym_comment = 71,
  aux_sym_decision_graph_repeat1 = 72,
  aux_sym_aggregate_assignment_slot_repeat1 = 73,
  aux_sym_slot_repeat1 = 74,
  aux_sym_terms_sub_node_repeat1 = 75,
  aux_sym_answers_sub_node_repeat1 = 76,
  aux_sym_consider_options_sub_node_repeat1 = 77,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_todo] = "todo",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACK] = "]",
  [sym_free_text] = "free_text",
  [anon_sym_ask] = "ask",
  [anon_sym_call] = "call",
  [anon_sym_GT] = ">",
  [anon_sym_consider] = "consider",
  [anon_sym_when] = "when",
  [anon_sym_section] = "section",
  [anon_sym_continue] = "continue",
  [anon_sym_LBRACK_DASH_DASH] = "[--",
  [anon_sym_DASH_DASH_RBRACK] = "--]",
  [anon_sym_end] = "end",
  [anon_sym_reject] = "reject",
  [anon_sym_set] = "set",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SLASH] = "/",
  [sym_slot_identifier] = "slot_identifier",
  [anon_sym_POUNDimport] = "#import",
  [aux_sym_decision_graph_name_token1] = "decision_graph_name_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_text] = "text",
  [anon_sym_RBRACE] = "}",
  [anon_sym_title] = "title",
  [anon_sym_term] = "term",
  [anon_sym_answers] = "answers",
  [anon_sym_slot] = "slot",
  [anon_sym_options] = "options",
  [anon_sym_else] = "else",
  [anon_sym_LT] = "<",
  [anon_sym_LT_DASH_DASH] = "<--",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__comment_block] = "_comment_block",
  [sym_file_path] = "file_path",
  [sym_source_file] = "source_file",
  [sym_decision_graph] = "decision_graph",
  [sym__top_level_node] = "_top_level_node",
  [sym_todo_node] = "todo_node",
  [sym_ask_node] = "ask_node",
  [sym_call_node] = "call_node",
  [sym_consider_node] = "consider_node",
  [sym_when_node] = "when_node",
  [sym_section_node] = "section_node",
  [sym_continue_node] = "continue_node",
  [sym_part_node] = "part_node",
  [sym_reject_node] = "reject_node",
  [sym_set_node] = "set_node",
  [sym_assignment_slot] = "assignment_slot",
  [sym_atomic_assignment_slot] = "atomic_assignment_slot",
  [sym_aggregate_assignment_slot] = "aggregate_assignment_slot",
  [sym_slot] = "slot",
  [sym_import_node] = "import_node",
  [sym_decision_graph_name] = "decision_graph_name",
  [sym_text_sub_node] = "text_sub_node",
  [sym_info_sub_node] = "info_sub_node",
  [sym_terms_sub_node] = "terms_sub_node",
  [sym_term_sub_node] = "term_sub_node",
  [sym_answers_sub_node] = "answers_sub_node",
  [sym_answer_sub_node] = "answer_sub_node",
  [sym_slot_sub_node] = "slot_sub_node",
  [sym_consider_options_sub_node] = "consider_options_sub_node",
  [sym_consider_option_sub_node] = "consider_option_sub_node",
  [sym_when_answer_sub_node] = "when_answer_sub_node",
  [sym_else_sub_node] = "else_sub_node",
  [sym_node_id] = "node_id",
  [sym_node_id_value] = "node_id_value",
  [sym_comment] = "comment",
  [aux_sym_decision_graph_repeat1] = "decision_graph_repeat1",
  [aux_sym_aggregate_assignment_slot_repeat1] = "aggregate_assignment_slot_repeat1",
  [aux_sym_slot_repeat1] = "slot_repeat1",
  [aux_sym_terms_sub_node_repeat1] = "terms_sub_node_repeat1",
  [aux_sym_answers_sub_node_repeat1] = "answers_sub_node_repeat1",
  [aux_sym_consider_options_sub_node_repeat1] = "consider_options_sub_node_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_todo] = anon_sym_todo,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_free_text] = sym_free_text,
  [anon_sym_ask] = anon_sym_ask,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_consider] = anon_sym_consider,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_LBRACK_DASH_DASH] = anon_sym_LBRACK_DASH_DASH,
  [anon_sym_DASH_DASH_RBRACK] = anon_sym_DASH_DASH_RBRACK,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_reject] = anon_sym_reject,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_slot_identifier] = sym_slot_identifier,
  [anon_sym_POUNDimport] = anon_sym_POUNDimport,
  [aux_sym_decision_graph_name_token1] = aux_sym_decision_graph_name_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_term] = anon_sym_term,
  [anon_sym_answers] = anon_sym_answers,
  [anon_sym_slot] = anon_sym_slot,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__comment_block] = sym__comment_block,
  [sym_file_path] = sym_file_path,
  [sym_source_file] = sym_source_file,
  [sym_decision_graph] = sym_decision_graph,
  [sym__top_level_node] = sym__top_level_node,
  [sym_todo_node] = sym_todo_node,
  [sym_ask_node] = sym_ask_node,
  [sym_call_node] = sym_call_node,
  [sym_consider_node] = sym_consider_node,
  [sym_when_node] = sym_when_node,
  [sym_section_node] = sym_section_node,
  [sym_continue_node] = sym_continue_node,
  [sym_part_node] = sym_part_node,
  [sym_reject_node] = sym_reject_node,
  [sym_set_node] = sym_set_node,
  [sym_assignment_slot] = sym_assignment_slot,
  [sym_atomic_assignment_slot] = sym_atomic_assignment_slot,
  [sym_aggregate_assignment_slot] = sym_aggregate_assignment_slot,
  [sym_slot] = sym_slot,
  [sym_import_node] = sym_import_node,
  [sym_decision_graph_name] = sym_decision_graph_name,
  [sym_text_sub_node] = sym_text_sub_node,
  [sym_info_sub_node] = sym_info_sub_node,
  [sym_terms_sub_node] = sym_terms_sub_node,
  [sym_term_sub_node] = sym_term_sub_node,
  [sym_answers_sub_node] = sym_answers_sub_node,
  [sym_answer_sub_node] = sym_answer_sub_node,
  [sym_slot_sub_node] = sym_slot_sub_node,
  [sym_consider_options_sub_node] = sym_consider_options_sub_node,
  [sym_consider_option_sub_node] = sym_consider_option_sub_node,
  [sym_when_answer_sub_node] = sym_when_answer_sub_node,
  [sym_else_sub_node] = sym_else_sub_node,
  [sym_node_id] = sym_node_id,
  [sym_node_id_value] = sym_node_id_value,
  [sym_comment] = sym_comment,
  [aux_sym_decision_graph_repeat1] = aux_sym_decision_graph_repeat1,
  [aux_sym_aggregate_assignment_slot_repeat1] = aux_sym_aggregate_assignment_slot_repeat1,
  [aux_sym_slot_repeat1] = aux_sym_slot_repeat1,
  [aux_sym_terms_sub_node_repeat1] = aux_sym_terms_sub_node_repeat1,
  [aux_sym_answers_sub_node_repeat1] = aux_sym_answers_sub_node_repeat1,
  [aux_sym_consider_options_sub_node_repeat1] = aux_sym_consider_options_sub_node_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_todo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_free_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_consider] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_section] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_slot_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDimport] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decision_graph_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_term] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_answers] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_slot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_options] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__comment_block] = {
    .visible = false,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_decision_graph] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_node] = {
    .visible = false,
    .named = true,
  },
  [sym_todo_node] = {
    .visible = true,
    .named = true,
  },
  [sym_ask_node] = {
    .visible = true,
    .named = true,
  },
  [sym_call_node] = {
    .visible = true,
    .named = true,
  },
  [sym_consider_node] = {
    .visible = true,
    .named = true,
  },
  [sym_when_node] = {
    .visible = true,
    .named = true,
  },
  [sym_section_node] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_node] = {
    .visible = true,
    .named = true,
  },
  [sym_part_node] = {
    .visible = true,
    .named = true,
  },
  [sym_reject_node] = {
    .visible = true,
    .named = true,
  },
  [sym_set_node] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_import_node] = {
    .visible = true,
    .named = true,
  },
  [sym_decision_graph_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_info_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_terms_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_term_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_answers_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_answer_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_slot_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_consider_options_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_consider_option_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_when_answer_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_else_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_id] = {
    .visible = true,
    .named = true,
  },
  [sym_node_id_value] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_decision_graph_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_aggregate_assignment_slot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_slot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_terms_sub_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_answers_sub_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_consider_options_sub_node_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(80);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+') ADVANCE(115);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(188);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(122);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(132);
      if (lookahead == '{') ADVANCE(172);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(189);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(113);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(109);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          lookahead != '=' &&
          lookahead != '>' &&
          lookahead != '[' &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(113);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 10:
      if (lookahead == ']') ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(68);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'j') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'k') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(66);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(184);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 71:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 72:
      if (lookahead == '{') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 73:
      if (lookahead == '}') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(88);
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == '[') ADVANCE(81);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(26);
      if (lookahead == '}') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(79)
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_todo);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(113);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ask);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_consider);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACK);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_POUNDimport);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'h') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'j') ADVANCE(126);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'k') ADVANCE(90);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(83);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(134);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'w') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_term);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_term);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_answers);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_answers);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_slot);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 79, .external_lex_state = 2},
  [3] = {.lex_state = 79, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 2},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 2},
  [11] = {.lex_state = 0, .external_lex_state = 2},
  [12] = {.lex_state = 0, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 79, .external_lex_state = 2},
  [15] = {.lex_state = 79, .external_lex_state = 2},
  [16] = {.lex_state = 79, .external_lex_state = 2},
  [17] = {.lex_state = 79, .external_lex_state = 2},
  [18] = {.lex_state = 79, .external_lex_state = 2},
  [19] = {.lex_state = 79, .external_lex_state = 2},
  [20] = {.lex_state = 79, .external_lex_state = 2},
  [21] = {.lex_state = 79, .external_lex_state = 2},
  [22] = {.lex_state = 79, .external_lex_state = 2},
  [23] = {.lex_state = 79, .external_lex_state = 2},
  [24] = {.lex_state = 79, .external_lex_state = 2},
  [25] = {.lex_state = 79, .external_lex_state = 2},
  [26] = {.lex_state = 79, .external_lex_state = 2},
  [27] = {.lex_state = 79, .external_lex_state = 2},
  [28] = {.lex_state = 79, .external_lex_state = 2},
  [29] = {.lex_state = 79, .external_lex_state = 2},
  [30] = {.lex_state = 79, .external_lex_state = 2},
  [31] = {.lex_state = 79, .external_lex_state = 2},
  [32] = {.lex_state = 79, .external_lex_state = 2},
  [33] = {.lex_state = 79, .external_lex_state = 2},
  [34] = {.lex_state = 79, .external_lex_state = 2},
  [35] = {.lex_state = 79, .external_lex_state = 2},
  [36] = {.lex_state = 79, .external_lex_state = 2},
  [37] = {.lex_state = 79, .external_lex_state = 2},
  [38] = {.lex_state = 79, .external_lex_state = 2},
  [39] = {.lex_state = 79, .external_lex_state = 2},
  [40] = {.lex_state = 79, .external_lex_state = 2},
  [41] = {.lex_state = 79, .external_lex_state = 2},
  [42] = {.lex_state = 79, .external_lex_state = 2},
  [43] = {.lex_state = 79, .external_lex_state = 2},
  [44] = {.lex_state = 79, .external_lex_state = 2},
  [45] = {.lex_state = 79, .external_lex_state = 2},
  [46] = {.lex_state = 79, .external_lex_state = 2},
  [47] = {.lex_state = 79, .external_lex_state = 2},
  [48] = {.lex_state = 7, .external_lex_state = 2},
  [49] = {.lex_state = 79, .external_lex_state = 2},
  [50] = {.lex_state = 7, .external_lex_state = 2},
  [51] = {.lex_state = 79, .external_lex_state = 2},
  [52] = {.lex_state = 7, .external_lex_state = 2},
  [53] = {.lex_state = 7, .external_lex_state = 2},
  [54] = {.lex_state = 7, .external_lex_state = 2},
  [55] = {.lex_state = 7, .external_lex_state = 2},
  [56] = {.lex_state = 6, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 79, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 7, .external_lex_state = 2},
  [63] = {.lex_state = 79, .external_lex_state = 2},
  [64] = {.lex_state = 7, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 6, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 6, .external_lex_state = 2},
  [72] = {.lex_state = 79, .external_lex_state = 2},
  [73] = {.lex_state = 8, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 7, .external_lex_state = 2},
  [78] = {.lex_state = 6, .external_lex_state = 2},
  [79] = {.lex_state = 8, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 79, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 5, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 5, .external_lex_state = 2},
  [94] = {.lex_state = 79, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 8, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 5, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 8, .external_lex_state = 2},
  [109] = {.lex_state = 5, .external_lex_state = 2},
  [110] = {.lex_state = 8, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 5, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 5, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 5, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 5, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 7, .external_lex_state = 2},
  [127] = {.lex_state = 5, .external_lex_state = 2},
  [128] = {.lex_state = 5, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 79, .external_lex_state = 2},
  [131] = {.lex_state = 8, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 5, .external_lex_state = 2},
  [134] = {.lex_state = 5, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 7, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 79, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 79, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 0, .external_lex_state = 2},
  [168] = {.lex_state = 0, .external_lex_state = 1},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 79, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 79, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 79, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 7, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 7, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 7, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 79, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 79, .external_lex_state = 2},
  [224] = {.lex_state = 79, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 7, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {-1},
  [231] = {-1},
  [232] = {.lex_state = 190},
};

enum {
  ts_external_token__comment_block = 0,
  ts_external_token_file_path = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__comment_block] = sym__comment_block,
  [ts_external_token_file_path] = sym_file_path,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__comment_block] = true,
    [ts_external_token_file_path] = true,
  },
  [2] = {
    [ts_external_token__comment_block] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_todo] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_ask] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_consider] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_LBRACK_DASH_DASH] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_reject] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_POUNDimport] = ACTIONS(1),
    [aux_sym_decision_graph_name_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_term] = ACTIONS(1),
    [anon_sym_answers] = ACTIONS(1),
    [anon_sym_slot] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
    [sym_file_path] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(228),
    [sym_decision_graph] = STATE(227),
    [sym__top_level_node] = STATE(26),
    [sym_todo_node] = STATE(34),
    [sym_ask_node] = STATE(34),
    [sym_call_node] = STATE(34),
    [sym_consider_node] = STATE(34),
    [sym_when_node] = STATE(34),
    [sym_section_node] = STATE(34),
    [sym_continue_node] = STATE(34),
    [sym_part_node] = STATE(34),
    [sym_reject_node] = STATE(34),
    [sym_set_node] = STATE(34),
    [sym_import_node] = STATE(34),
    [sym_comment] = STATE(1),
    [aux_sym_decision_graph_repeat1] = STATE(2),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACK_DASH_DASH] = ACTIONS(9),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(26), 1,
      sym__top_level_node,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [41] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(18), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(26), 1,
      sym__top_level_node,
    STATE(3), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [80] = 11,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(8), 1,
      sym_info_sub_node,
    STATE(26), 1,
      sym__top_level_node,
    STATE(142), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [124] = 11,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      sym_info_sub_node,
    STATE(26), 1,
      sym__top_level_node,
    STATE(212), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [168] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(26), 1,
      sym__top_level_node,
    STATE(150), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [206] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(26), 1,
      sym__top_level_node,
    STATE(162), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [244] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(26), 1,
      sym__top_level_node,
    STATE(212), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [282] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(26), 1,
      sym__top_level_node,
    STATE(222), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [320] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(26), 1,
      sym__top_level_node,
    STATE(221), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [358] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(26), 1,
      sym__top_level_node,
    STATE(147), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [396] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(26), 1,
      sym__top_level_node,
    STATE(189), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [434] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(26), 1,
      sym__top_level_node,
    STATE(214), 1,
      sym_decision_graph,
    STATE(34), 11,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [472] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_comment,
    ACTIONS(25), 13,
      anon_sym_todo,
      anon_sym_ask,
      anon_sym_call,
      anon_sym_consider,
      anon_sym_when,
      anon_sym_section,
      anon_sym_continue,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_reject,
      anon_sym_set,
      anon_sym_text,
      anon_sym_title,
      anon_sym_term,
  [500] = 15,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(27), 1,
      anon_sym_todo,
    ACTIONS(29), 1,
      anon_sym_ask,
    ACTIONS(31), 1,
      anon_sym_call,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(35), 1,
      anon_sym_consider,
    ACTIONS(37), 1,
      anon_sym_when,
    ACTIONS(39), 1,
      anon_sym_section,
    ACTIONS(41), 1,
      anon_sym_continue,
    ACTIONS(43), 1,
      anon_sym_reject,
    ACTIONS(45), 1,
      anon_sym_set,
    ACTIONS(47), 1,
      anon_sym_POUNDimport,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      sym_node_id,
  [546] = 12,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(49), 1,
      anon_sym_todo,
    ACTIONS(51), 1,
      anon_sym_ask,
    ACTIONS(53), 1,
      anon_sym_call,
    ACTIONS(55), 1,
      anon_sym_consider,
    ACTIONS(57), 1,
      anon_sym_when,
    ACTIONS(59), 1,
      anon_sym_section,
    ACTIONS(61), 1,
      anon_sym_continue,
    ACTIONS(63), 1,
      anon_sym_reject,
    ACTIONS(65), 1,
      anon_sym_set,
    STATE(16), 1,
      sym_comment,
  [583] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_comment,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [603] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_comment,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [623] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [643] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_comment,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [663] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [683] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [703] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [723] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [743] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [763] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [783] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [803] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [823] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [843] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [863] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [883] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [903] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [923] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [943] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [963] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [983] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1003] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_comment,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1023] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1043] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1063] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_comment,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1083] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1103] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1123] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1143] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_comment,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1163] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(185), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_comment,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1183] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      sym_comment,
    STATE(51), 1,
      aux_sym_slot_repeat1,
    ACTIONS(187), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RBRACE,
  [1204] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(191), 1,
      sym_slot_identifier,
    STATE(48), 1,
      sym_comment,
    STATE(130), 1,
      sym_slot,
    STATE(132), 1,
      sym_assignment_slot,
    STATE(81), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [1227] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(195), 1,
      anon_sym_SLASH,
    STATE(49), 2,
      sym_comment,
      aux_sym_slot_repeat1,
    ACTIONS(193), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RBRACE,
  [1246] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(191), 1,
      sym_slot_identifier,
    STATE(50), 1,
      sym_comment,
    STATE(116), 1,
      sym_assignment_slot,
    STATE(130), 1,
      sym_slot,
    STATE(81), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [1269] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    STATE(49), 1,
      aux_sym_slot_repeat1,
    STATE(51), 1,
      sym_comment,
    ACTIONS(198), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RBRACE,
  [1290] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(191), 1,
      sym_slot_identifier,
    STATE(52), 1,
      sym_comment,
    STATE(75), 1,
      sym_assignment_slot,
    STATE(130), 1,
      sym_slot,
    STATE(81), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [1313] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(191), 1,
      sym_slot_identifier,
    STATE(53), 1,
      sym_comment,
    STATE(94), 1,
      sym_slot,
    STATE(101), 1,
      sym_assignment_slot,
    STATE(81), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [1336] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(191), 1,
      sym_slot_identifier,
    STATE(54), 1,
      sym_comment,
    STATE(75), 1,
      sym_assignment_slot,
    STATE(94), 1,
      sym_slot,
    STATE(81), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [1359] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(202), 1,
      sym_slot_identifier,
    STATE(55), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_aggregate_assignment_slot_repeat1,
    ACTIONS(200), 2,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1379] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      sym_slot_identifier,
    STATE(56), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_aggregate_assignment_slot_repeat1,
  [1401] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(121), 1,
      sym_term_sub_node,
  [1423] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(58), 1,
      sym_comment,
    ACTIONS(193), 4,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [1439] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(115), 1,
      sym_consider_option_sub_node,
    STATE(59), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1459] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_answer_sub_node,
    STATE(60), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1479] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_term_sub_node,
    STATE(61), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1499] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(202), 1,
      sym_slot_identifier,
    STATE(55), 1,
      aux_sym_aggregate_assignment_slot_repeat1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(227), 2,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1519] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(229), 1,
      anon_sym_term,
    ACTIONS(231), 1,
      anon_sym_answers,
    STATE(63), 1,
      sym_comment,
    STATE(180), 1,
      sym_node_id,
  [1541] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(235), 1,
      sym_slot_identifier,
    ACTIONS(233), 2,
      anon_sym_RBRACK,
      anon_sym_SEMI,
    STATE(64), 2,
      sym_comment,
      aux_sym_aggregate_assignment_slot_repeat1,
  [1559] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(65), 1,
      sym_comment,
    STATE(115), 1,
      sym_consider_option_sub_node,
  [1581] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(121), 1,
      sym_term_sub_node,
  [1603] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(206), 1,
      sym_slot_identifier,
    ACTIONS(227), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      anon_sym_COLON,
    STATE(56), 1,
      aux_sym_aggregate_assignment_slot_repeat1,
    STATE(67), 1,
      sym_comment,
  [1625] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    ACTIONS(248), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(119), 1,
      sym_answer_sub_node,
  [1647] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(121), 1,
      sym_term_sub_node,
  [1669] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(121), 1,
      sym_term_sub_node,
  [1691] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(233), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_COLON,
    ACTIONS(254), 1,
      sym_slot_identifier,
    STATE(71), 2,
      sym_comment,
      aux_sym_aggregate_assignment_slot_repeat1,
  [1711] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(257), 1,
      anon_sym_text,
    STATE(72), 1,
      sym_comment,
    STATE(186), 1,
      sym_node_id,
  [1730] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(259), 1,
      aux_sym_decision_graph_name_token1,
    STATE(73), 1,
      sym_comment,
    STATE(188), 1,
      sym_node_id_value,
    STATE(190), 1,
      sym_decision_graph_name,
  [1749] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(261), 1,
      anon_sym_RBRACK,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_comment,
    STATE(166), 1,
      sym_else_sub_node,
  [1768] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(75), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1783] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(115), 1,
      sym_consider_option_sub_node,
  [1802] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(77), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      sym_slot_identifier,
  [1817] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    STATE(78), 1,
      sym_comment,
    ACTIONS(269), 2,
      anon_sym_COLON,
      sym_slot_identifier,
  [1834] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(259), 1,
      aux_sym_decision_graph_name_token1,
    STATE(79), 1,
      sym_comment,
    STATE(144), 1,
      sym_node_id_value,
    STATE(145), 1,
      sym_decision_graph_name,
  [1853] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(246), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(119), 1,
      sym_answer_sub_node,
  [1872] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(81), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1887] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym_comment,
    STATE(171), 1,
      sym_else_sub_node,
  [1906] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_comment,
    STATE(90), 1,
      sym_terms_sub_node,
    STATE(176), 1,
      sym_answers_sub_node,
  [1925] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(84), 1,
      sym_comment,
    ACTIONS(277), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1940] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_comment,
    STATE(96), 1,
      sym_terms_sub_node,
    STATE(229), 1,
      sym_answers_sub_node,
  [1959] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_comment,
    STATE(149), 1,
      sym_else_sub_node,
  [1978] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(281), 1,
      anon_sym_title,
    STATE(87), 1,
      sym_comment,
    STATE(213), 1,
      sym_node_id,
  [1997] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_comment,
    STATE(220), 1,
      sym_else_sub_node,
  [2016] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      sym_free_text,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_comment,
  [2032] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_comment,
    STATE(169), 1,
      sym_answers_sub_node,
  [2048] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_comment,
    STATE(114), 1,
      sym_slot_sub_node,
  [2064] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_when_answer_sub_node,
    STATE(92), 1,
      sym_comment,
  [2080] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    ACTIONS(297), 1,
      sym_free_text,
    STATE(93), 1,
      sym_comment,
  [2096] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(301), 1,
      anon_sym_PLUS_EQ,
    STATE(94), 1,
      sym_comment,
  [2112] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(11), 1,
      sym_node_id,
    STATE(95), 1,
      sym_comment,
  [2128] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_comment,
    STATE(176), 1,
      sym_answers_sub_node,
  [2144] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(97), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2158] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(305), 1,
      aux_sym_decision_graph_name_token1,
    STATE(98), 1,
      sym_comment,
    STATE(173), 1,
      sym_node_id_value,
  [2174] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(99), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2188] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(100), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2202] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(311), 1,
      anon_sym_COLON,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_comment,
  [2218] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(102), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2232] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(103), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2246] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(319), 1,
      sym_free_text,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_comment,
  [2262] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(105), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2276] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(106), 1,
      sym_comment,
  [2292] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(107), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2306] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(305), 1,
      aux_sym_decision_graph_name_token1,
    STATE(108), 1,
      sym_comment,
    STATE(179), 1,
      sym_node_id_value,
  [2322] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(331), 1,
      sym_free_text,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(109), 1,
      sym_comment,
  [2338] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(335), 1,
      aux_sym_decision_graph_name_token1,
    STATE(110), 1,
      sym_comment,
    STATE(163), 1,
      sym_decision_graph_name,
  [2354] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    ACTIONS(339), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(111), 1,
      sym_comment,
  [2370] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(112), 1,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2384] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    ACTIONS(345), 1,
      sym_free_text,
    STATE(113), 1,
      sym_comment,
  [2400] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_consider_options_sub_node,
    STATE(114), 1,
      sym_comment,
  [2416] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(115), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2430] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    STATE(116), 1,
      sym_comment,
  [2446] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_text_sub_node,
    STATE(117), 1,
      sym_comment,
  [2462] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(359), 1,
      anon_sym_LT,
    STATE(118), 1,
      sym_comment,
  [2478] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(119), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2492] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(363), 1,
      anon_sym_COLON,
    ACTIONS(365), 1,
      sym_free_text,
    STATE(120), 1,
      sym_comment,
  [2508] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(121), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2522] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(369), 1,
      anon_sym_COLON,
    ACTIONS(371), 1,
      sym_free_text,
    STATE(122), 1,
      sym_comment,
  [2538] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_comment,
    STATE(137), 1,
      sym_slot_sub_node,
  [2554] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    ACTIONS(375), 1,
      sym_free_text,
    STATE(124), 1,
      sym_comment,
  [2570] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_when_answer_sub_node,
    STATE(125), 1,
      sym_comment,
  [2586] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(191), 1,
      sym_slot_identifier,
    STATE(126), 1,
      sym_comment,
    STATE(160), 1,
      sym_slot,
  [2602] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(377), 1,
      anon_sym_RBRACK,
    ACTIONS(379), 1,
      sym_free_text,
    STATE(127), 1,
      sym_comment,
  [2618] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      sym_free_text,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      sym_comment,
  [2634] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(129), 1,
      sym_comment,
  [2650] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(299), 1,
      anon_sym_EQ,
    ACTIONS(389), 1,
      anon_sym_PLUS_EQ,
    STATE(130), 1,
      sym_comment,
  [2666] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(305), 1,
      aux_sym_decision_graph_name_token1,
    STATE(131), 1,
      sym_comment,
    STATE(170), 1,
      sym_node_id_value,
  [2682] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(353), 1,
      anon_sym_SEMI,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(132), 1,
      sym_comment,
  [2698] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(393), 1,
      sym_free_text,
    ACTIONS(395), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_comment,
  [2714] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(397), 1,
      sym_free_text,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_comment,
  [2730] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(357), 1,
      anon_sym_RBRACK,
    ACTIONS(401), 1,
      anon_sym_GT,
    STATE(135), 1,
      sym_comment,
  [2746] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_text_sub_node,
    STATE(136), 1,
      sym_comment,
  [2762] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_consider_options_sub_node,
    STATE(137), 1,
      sym_comment,
  [2778] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(403), 1,
      anon_sym_COLON,
    STATE(138), 1,
      sym_comment,
  [2791] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(405), 1,
      sym_slot_identifier,
    STATE(139), 1,
      sym_comment,
  [2804] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(407), 1,
      anon_sym_COLON,
    STATE(140), 1,
      sym_comment,
  [2817] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      sym_comment,
  [2830] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(409), 1,
      anon_sym_RBRACK,
    STATE(142), 1,
      sym_comment,
  [2843] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(411), 1,
      anon_sym_slot,
    STATE(143), 1,
      sym_comment,
  [2856] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      sym_comment,
  [2869] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(415), 1,
      anon_sym_GT,
    STATE(145), 1,
      sym_comment,
  [2882] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(373), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      sym_comment,
  [2895] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(417), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(147), 1,
      sym_comment,
  [2908] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(419), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_comment,
  [2921] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_comment,
  [2934] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_comment,
  [2947] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(425), 1,
      anon_sym_COLON,
    STATE(151), 1,
      sym_comment,
  [2960] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_comment,
  [2973] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(399), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_comment,
  [2986] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_comment,
  [2999] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(431), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_comment,
  [3012] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(433), 1,
      anon_sym_COLON,
    STATE(156), 1,
      sym_comment,
  [3025] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(435), 1,
      anon_sym_COLON,
    STATE(157), 1,
      sym_comment,
  [3038] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(437), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_comment,
  [3051] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(439), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_comment,
  [3064] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      sym_comment,
  [3077] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(443), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_comment,
  [3090] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_comment,
  [3103] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(447), 1,
      anon_sym_COLON,
    STATE(163), 1,
      sym_comment,
  [3116] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_comment,
  [3129] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(449), 1,
      anon_sym_COLON,
    STATE(165), 1,
      sym_comment,
  [3142] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      sym_comment,
  [3155] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(401), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_comment,
  [3168] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(451), 1,
      sym_file_path,
    STATE(168), 1,
      sym_comment,
  [3181] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_comment,
  [3194] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      sym_comment,
  [3207] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_comment,
  [3220] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(459), 1,
      anon_sym_COLON,
    STATE(172), 1,
      sym_comment,
  [3233] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      sym_comment,
  [3246] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_comment,
  [3259] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_comment,
  [3272] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_comment,
  [3285] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_comment,
  [3298] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_answers,
    STATE(178), 1,
      sym_comment,
  [3311] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(471), 1,
      anon_sym_LT,
    STATE(179), 1,
      sym_comment,
  [3324] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(473), 1,
      anon_sym_term,
    STATE(180), 1,
      sym_comment,
  [3337] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(475), 1,
      anon_sym_COLON,
    STATE(181), 1,
      sym_comment,
  [3350] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(477), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_comment,
  [3363] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(479), 1,
      anon_sym_COLON,
    STATE(183), 1,
      sym_comment,
  [3376] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym_comment,
  [3389] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(483), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
  [3402] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(485), 1,
      anon_sym_text,
    STATE(186), 1,
      sym_comment,
  [3415] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym_comment,
  [3428] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym_comment,
  [3441] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      sym_comment,
  [3454] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(493), 1,
      anon_sym_GT,
    STATE(190), 1,
      sym_comment,
  [3467] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym_comment,
  [3480] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      sym_comment,
  [3493] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(499), 1,
      anon_sym_COLON,
    STATE(193), 1,
      sym_comment,
  [3506] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(501), 1,
      anon_sym_COLON,
    STATE(194), 1,
      sym_comment,
  [3519] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      sym_comment,
  [3532] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_comment,
  [3545] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym_comment,
  [3558] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(509), 1,
      anon_sym_COLON,
    STATE(198), 1,
      sym_comment,
  [3571] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_comment,
  [3584] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(513), 1,
      anon_sym_COLON,
    STATE(200), 1,
      sym_comment,
  [3597] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(515), 1,
      anon_sym_COLON,
    STATE(201), 1,
      sym_comment,
  [3610] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(517), 1,
      anon_sym_COLON,
    STATE(202), 1,
      sym_comment,
  [3623] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_comment,
  [3636] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(521), 1,
      anon_sym_COLON,
    STATE(204), 1,
      sym_comment,
  [3649] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(523), 1,
      sym_slot_identifier,
    STATE(205), 1,
      sym_comment,
  [3662] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(525), 1,
      anon_sym_COLON,
    STATE(206), 1,
      sym_comment,
  [3675] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(527), 1,
      sym_slot_identifier,
    STATE(207), 1,
      sym_comment,
  [3688] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym_comment,
  [3701] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(209), 1,
      sym_comment,
  [3714] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(533), 1,
      sym_slot_identifier,
    STATE(210), 1,
      sym_comment,
  [3727] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_comment,
  [3740] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(212), 1,
      sym_comment,
  [3753] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(537), 1,
      anon_sym_title,
    STATE(213), 1,
      sym_comment,
  [3766] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(539), 1,
      anon_sym_RBRACE,
    STATE(214), 1,
      sym_comment,
  [3779] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_comment,
  [3792] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    STATE(216), 1,
      sym_comment,
  [3805] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(217), 1,
      sym_comment,
  [3818] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(547), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym_comment,
  [3831] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      sym_comment,
  [3844] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      sym_comment,
  [3857] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_comment,
  [3870] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_comment,
  [3883] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(555), 1,
      anon_sym_else,
    STATE(223), 1,
      sym_comment,
  [3896] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(557), 1,
      anon_sym_options,
    STATE(224), 1,
      sym_comment,
  [3909] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(559), 1,
      anon_sym_COLON,
    STATE(225), 1,
      sym_comment,
  [3922] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(561), 1,
      sym_slot_identifier,
    STATE(226), 1,
      sym_comment,
  [3935] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(563), 1,
      ts_builtin_sym_end,
    STATE(227), 1,
      sym_comment,
  [3948] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    STATE(228), 1,
      sym_comment,
  [3961] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym_comment,
  [3974] = 1,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
  [3978] = 1,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
  [3982] = 1,
    ACTIONS(573), 1,
      aux_sym_comment_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 124,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 206,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 282,
  [SMALL_STATE(10)] = 320,
  [SMALL_STATE(11)] = 358,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 434,
  [SMALL_STATE(14)] = 472,
  [SMALL_STATE(15)] = 500,
  [SMALL_STATE(16)] = 546,
  [SMALL_STATE(17)] = 583,
  [SMALL_STATE(18)] = 603,
  [SMALL_STATE(19)] = 623,
  [SMALL_STATE(20)] = 643,
  [SMALL_STATE(21)] = 663,
  [SMALL_STATE(22)] = 683,
  [SMALL_STATE(23)] = 703,
  [SMALL_STATE(24)] = 723,
  [SMALL_STATE(25)] = 743,
  [SMALL_STATE(26)] = 763,
  [SMALL_STATE(27)] = 783,
  [SMALL_STATE(28)] = 803,
  [SMALL_STATE(29)] = 823,
  [SMALL_STATE(30)] = 843,
  [SMALL_STATE(31)] = 863,
  [SMALL_STATE(32)] = 883,
  [SMALL_STATE(33)] = 903,
  [SMALL_STATE(34)] = 923,
  [SMALL_STATE(35)] = 943,
  [SMALL_STATE(36)] = 963,
  [SMALL_STATE(37)] = 983,
  [SMALL_STATE(38)] = 1003,
  [SMALL_STATE(39)] = 1023,
  [SMALL_STATE(40)] = 1043,
  [SMALL_STATE(41)] = 1063,
  [SMALL_STATE(42)] = 1083,
  [SMALL_STATE(43)] = 1103,
  [SMALL_STATE(44)] = 1123,
  [SMALL_STATE(45)] = 1143,
  [SMALL_STATE(46)] = 1163,
  [SMALL_STATE(47)] = 1183,
  [SMALL_STATE(48)] = 1204,
  [SMALL_STATE(49)] = 1227,
  [SMALL_STATE(50)] = 1246,
  [SMALL_STATE(51)] = 1269,
  [SMALL_STATE(52)] = 1290,
  [SMALL_STATE(53)] = 1313,
  [SMALL_STATE(54)] = 1336,
  [SMALL_STATE(55)] = 1359,
  [SMALL_STATE(56)] = 1379,
  [SMALL_STATE(57)] = 1401,
  [SMALL_STATE(58)] = 1423,
  [SMALL_STATE(59)] = 1439,
  [SMALL_STATE(60)] = 1459,
  [SMALL_STATE(61)] = 1479,
  [SMALL_STATE(62)] = 1499,
  [SMALL_STATE(63)] = 1519,
  [SMALL_STATE(64)] = 1541,
  [SMALL_STATE(65)] = 1559,
  [SMALL_STATE(66)] = 1581,
  [SMALL_STATE(67)] = 1603,
  [SMALL_STATE(68)] = 1625,
  [SMALL_STATE(69)] = 1647,
  [SMALL_STATE(70)] = 1669,
  [SMALL_STATE(71)] = 1691,
  [SMALL_STATE(72)] = 1711,
  [SMALL_STATE(73)] = 1730,
  [SMALL_STATE(74)] = 1749,
  [SMALL_STATE(75)] = 1768,
  [SMALL_STATE(76)] = 1783,
  [SMALL_STATE(77)] = 1802,
  [SMALL_STATE(78)] = 1817,
  [SMALL_STATE(79)] = 1834,
  [SMALL_STATE(80)] = 1853,
  [SMALL_STATE(81)] = 1872,
  [SMALL_STATE(82)] = 1887,
  [SMALL_STATE(83)] = 1906,
  [SMALL_STATE(84)] = 1925,
  [SMALL_STATE(85)] = 1940,
  [SMALL_STATE(86)] = 1959,
  [SMALL_STATE(87)] = 1978,
  [SMALL_STATE(88)] = 1997,
  [SMALL_STATE(89)] = 2016,
  [SMALL_STATE(90)] = 2032,
  [SMALL_STATE(91)] = 2048,
  [SMALL_STATE(92)] = 2064,
  [SMALL_STATE(93)] = 2080,
  [SMALL_STATE(94)] = 2096,
  [SMALL_STATE(95)] = 2112,
  [SMALL_STATE(96)] = 2128,
  [SMALL_STATE(97)] = 2144,
  [SMALL_STATE(98)] = 2158,
  [SMALL_STATE(99)] = 2174,
  [SMALL_STATE(100)] = 2188,
  [SMALL_STATE(101)] = 2202,
  [SMALL_STATE(102)] = 2218,
  [SMALL_STATE(103)] = 2232,
  [SMALL_STATE(104)] = 2246,
  [SMALL_STATE(105)] = 2262,
  [SMALL_STATE(106)] = 2276,
  [SMALL_STATE(107)] = 2292,
  [SMALL_STATE(108)] = 2306,
  [SMALL_STATE(109)] = 2322,
  [SMALL_STATE(110)] = 2338,
  [SMALL_STATE(111)] = 2354,
  [SMALL_STATE(112)] = 2370,
  [SMALL_STATE(113)] = 2384,
  [SMALL_STATE(114)] = 2400,
  [SMALL_STATE(115)] = 2416,
  [SMALL_STATE(116)] = 2430,
  [SMALL_STATE(117)] = 2446,
  [SMALL_STATE(118)] = 2462,
  [SMALL_STATE(119)] = 2478,
  [SMALL_STATE(120)] = 2492,
  [SMALL_STATE(121)] = 2508,
  [SMALL_STATE(122)] = 2522,
  [SMALL_STATE(123)] = 2538,
  [SMALL_STATE(124)] = 2554,
  [SMALL_STATE(125)] = 2570,
  [SMALL_STATE(126)] = 2586,
  [SMALL_STATE(127)] = 2602,
  [SMALL_STATE(128)] = 2618,
  [SMALL_STATE(129)] = 2634,
  [SMALL_STATE(130)] = 2650,
  [SMALL_STATE(131)] = 2666,
  [SMALL_STATE(132)] = 2682,
  [SMALL_STATE(133)] = 2698,
  [SMALL_STATE(134)] = 2714,
  [SMALL_STATE(135)] = 2730,
  [SMALL_STATE(136)] = 2746,
  [SMALL_STATE(137)] = 2762,
  [SMALL_STATE(138)] = 2778,
  [SMALL_STATE(139)] = 2791,
  [SMALL_STATE(140)] = 2804,
  [SMALL_STATE(141)] = 2817,
  [SMALL_STATE(142)] = 2830,
  [SMALL_STATE(143)] = 2843,
  [SMALL_STATE(144)] = 2856,
  [SMALL_STATE(145)] = 2869,
  [SMALL_STATE(146)] = 2882,
  [SMALL_STATE(147)] = 2895,
  [SMALL_STATE(148)] = 2908,
  [SMALL_STATE(149)] = 2921,
  [SMALL_STATE(150)] = 2934,
  [SMALL_STATE(151)] = 2947,
  [SMALL_STATE(152)] = 2960,
  [SMALL_STATE(153)] = 2973,
  [SMALL_STATE(154)] = 2986,
  [SMALL_STATE(155)] = 2999,
  [SMALL_STATE(156)] = 3012,
  [SMALL_STATE(157)] = 3025,
  [SMALL_STATE(158)] = 3038,
  [SMALL_STATE(159)] = 3051,
  [SMALL_STATE(160)] = 3064,
  [SMALL_STATE(161)] = 3077,
  [SMALL_STATE(162)] = 3090,
  [SMALL_STATE(163)] = 3103,
  [SMALL_STATE(164)] = 3116,
  [SMALL_STATE(165)] = 3129,
  [SMALL_STATE(166)] = 3142,
  [SMALL_STATE(167)] = 3155,
  [SMALL_STATE(168)] = 3168,
  [SMALL_STATE(169)] = 3181,
  [SMALL_STATE(170)] = 3194,
  [SMALL_STATE(171)] = 3207,
  [SMALL_STATE(172)] = 3220,
  [SMALL_STATE(173)] = 3233,
  [SMALL_STATE(174)] = 3246,
  [SMALL_STATE(175)] = 3259,
  [SMALL_STATE(176)] = 3272,
  [SMALL_STATE(177)] = 3285,
  [SMALL_STATE(178)] = 3298,
  [SMALL_STATE(179)] = 3311,
  [SMALL_STATE(180)] = 3324,
  [SMALL_STATE(181)] = 3337,
  [SMALL_STATE(182)] = 3350,
  [SMALL_STATE(183)] = 3363,
  [SMALL_STATE(184)] = 3376,
  [SMALL_STATE(185)] = 3389,
  [SMALL_STATE(186)] = 3402,
  [SMALL_STATE(187)] = 3415,
  [SMALL_STATE(188)] = 3428,
  [SMALL_STATE(189)] = 3441,
  [SMALL_STATE(190)] = 3454,
  [SMALL_STATE(191)] = 3467,
  [SMALL_STATE(192)] = 3480,
  [SMALL_STATE(193)] = 3493,
  [SMALL_STATE(194)] = 3506,
  [SMALL_STATE(195)] = 3519,
  [SMALL_STATE(196)] = 3532,
  [SMALL_STATE(197)] = 3545,
  [SMALL_STATE(198)] = 3558,
  [SMALL_STATE(199)] = 3571,
  [SMALL_STATE(200)] = 3584,
  [SMALL_STATE(201)] = 3597,
  [SMALL_STATE(202)] = 3610,
  [SMALL_STATE(203)] = 3623,
  [SMALL_STATE(204)] = 3636,
  [SMALL_STATE(205)] = 3649,
  [SMALL_STATE(206)] = 3662,
  [SMALL_STATE(207)] = 3675,
  [SMALL_STATE(208)] = 3688,
  [SMALL_STATE(209)] = 3701,
  [SMALL_STATE(210)] = 3714,
  [SMALL_STATE(211)] = 3727,
  [SMALL_STATE(212)] = 3740,
  [SMALL_STATE(213)] = 3753,
  [SMALL_STATE(214)] = 3766,
  [SMALL_STATE(215)] = 3779,
  [SMALL_STATE(216)] = 3792,
  [SMALL_STATE(217)] = 3805,
  [SMALL_STATE(218)] = 3818,
  [SMALL_STATE(219)] = 3831,
  [SMALL_STATE(220)] = 3844,
  [SMALL_STATE(221)] = 3857,
  [SMALL_STATE(222)] = 3870,
  [SMALL_STATE(223)] = 3883,
  [SMALL_STATE(224)] = 3896,
  [SMALL_STATE(225)] = 3909,
  [SMALL_STATE(226)] = 3922,
  [SMALL_STATE(227)] = 3935,
  [SMALL_STATE(228)] = 3948,
  [SMALL_STATE(229)] = 3961,
  [SMALL_STATE(230)] = 3974,
  [SMALL_STATE(231)] = 3978,
  [SMALL_STATE(232)] = 3982,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(232),
  [5] = {.count = 1, .reusable = true}, SHIFT(231),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(95),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(95),
  [21] = {.count = 1, .reusable = true}, SHIFT(87),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [27] = {.count = 1, .reusable = true}, SHIFT(217),
  [29] = {.count = 1, .reusable = true}, SHIFT(215),
  [31] = {.count = 1, .reusable = true}, SHIFT(208),
  [33] = {.count = 1, .reusable = true}, SHIFT(108),
  [35] = {.count = 1, .reusable = true}, SHIFT(204),
  [37] = {.count = 1, .reusable = true}, SHIFT(201),
  [39] = {.count = 1, .reusable = true}, SHIFT(200),
  [41] = {.count = 1, .reusable = true}, SHIFT(195),
  [43] = {.count = 1, .reusable = true}, SHIFT(194),
  [45] = {.count = 1, .reusable = true}, SHIFT(193),
  [47] = {.count = 1, .reusable = true}, SHIFT(110),
  [49] = {.count = 1, .reusable = true}, SHIFT(161),
  [51] = {.count = 1, .reusable = true}, SHIFT(138),
  [53] = {.count = 1, .reusable = true}, SHIFT(159),
  [55] = {.count = 1, .reusable = true}, SHIFT(158),
  [57] = {.count = 1, .reusable = true}, SHIFT(156),
  [59] = {.count = 1, .reusable = true}, SHIFT(155),
  [61] = {.count = 1, .reusable = true}, SHIFT(152),
  [63] = {.count = 1, .reusable = true}, SHIFT(151),
  [65] = {.count = 1, .reusable = true}, SHIFT(148),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 8),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 8),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [103] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [105] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 7),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 7),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 1),
  [189] = {.count = 1, .reusable = true}, SHIFT(210),
  [191] = {.count = 1, .reusable = true}, SHIFT(47),
  [193] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2),
  [195] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2), SHIFT_REPEAT(210),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 2),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 4),
  [202] = {.count = 1, .reusable = true}, SHIFT(77),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_aggregate_assignment_slot, 4),
  [206] = {.count = 1, .reusable = false}, SHIFT(78),
  [208] = {.count = 1, .reusable = true}, SHIFT(122),
  [210] = {.count = 1, .reusable = true}, SHIFT(216),
  [212] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(139),
  [215] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [217] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(120),
  [220] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [222] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(122),
  [225] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [229] = {.count = 1, .reusable = true}, SHIFT(182),
  [231] = {.count = 1, .reusable = true}, SHIFT(181),
  [233] = {.count = 1, .reusable = true}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2),
  [235] = {.count = 2, .reusable = true}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2), SHIFT_REPEAT(77),
  [238] = {.count = 1, .reusable = true}, SHIFT(139),
  [240] = {.count = 1, .reusable = true}, SHIFT(107),
  [242] = {.count = 1, .reusable = true}, SHIFT(199),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_aggregate_assignment_slot, 3),
  [246] = {.count = 1, .reusable = true}, SHIFT(120),
  [248] = {.count = 1, .reusable = true}, SHIFT(203),
  [250] = {.count = 1, .reusable = true}, SHIFT(177),
  [252] = {.count = 1, .reusable = false}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2), SHIFT_REPEAT(78),
  [257] = {.count = 1, .reusable = true}, SHIFT(165),
  [259] = {.count = 1, .reusable = true}, SHIFT(135),
  [261] = {.count = 1, .reusable = true}, SHIFT(42),
  [263] = {.count = 1, .reusable = true}, SHIFT(223),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [267] = {.count = 1, .reusable = true}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 1),
  [269] = {.count = 1, .reusable = false}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 1),
  [271] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [273] = {.count = 1, .reusable = true}, SHIFT(38),
  [275] = {.count = 1, .reusable = true}, SHIFT(63),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [279] = {.count = 1, .reusable = true}, SHIFT(17),
  [281] = {.count = 1, .reusable = true}, SHIFT(218),
  [283] = {.count = 1, .reusable = true}, SHIFT(30),
  [285] = {.count = 1, .reusable = true}, SHIFT(153),
  [287] = {.count = 1, .reusable = true}, SHIFT(154),
  [289] = {.count = 1, .reusable = true}, SHIFT(178),
  [291] = {.count = 1, .reusable = true}, SHIFT(143),
  [293] = {.count = 1, .reusable = true}, SHIFT(53),
  [295] = {.count = 1, .reusable = true}, SHIFT(18),
  [297] = {.count = 1, .reusable = true}, SHIFT(187),
  [299] = {.count = 1, .reusable = true}, SHIFT(207),
  [301] = {.count = 1, .reusable = true}, SHIFT(226),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [305] = {.count = 1, .reusable = true}, SHIFT(118),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [311] = {.count = 1, .reusable = true}, SHIFT(7),
  [313] = {.count = 1, .reusable = true}, SHIFT(54),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [319] = {.count = 1, .reusable = true}, SHIFT(219),
  [321] = {.count = 1, .reusable = true}, SHIFT(103),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [331] = {.count = 1, .reusable = true}, SHIFT(211),
  [333] = {.count = 1, .reusable = true}, SHIFT(105),
  [335] = {.count = 1, .reusable = true}, SHIFT(167),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [343] = {.count = 1, .reusable = true}, SHIFT(36),
  [345] = {.count = 1, .reusable = true}, SHIFT(146),
  [347] = {.count = 1, .reusable = true}, SHIFT(224),
  [349] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [351] = {.count = 1, .reusable = true}, SHIFT(44),
  [353] = {.count = 1, .reusable = true}, SHIFT(52),
  [355] = {.count = 1, .reusable = true}, SHIFT(72),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [361] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [363] = {.count = 1, .reusable = true}, SHIFT(13),
  [365] = {.count = 1, .reusable = true}, SHIFT(202),
  [367] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [369] = {.count = 1, .reusable = true}, SHIFT(109),
  [371] = {.count = 1, .reusable = true}, SHIFT(198),
  [373] = {.count = 1, .reusable = true}, SHIFT(27),
  [375] = {.count = 1, .reusable = true}, SHIFT(192),
  [377] = {.count = 1, .reusable = true}, SHIFT(46),
  [379] = {.count = 1, .reusable = true}, SHIFT(141),
  [381] = {.count = 1, .reusable = true}, SHIFT(191),
  [383] = {.count = 1, .reusable = true}, SHIFT(111),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [389] = {.count = 1, .reusable = true}, SHIFT(205),
  [391] = {.count = 1, .reusable = true}, SHIFT(22),
  [393] = {.count = 1, .reusable = true}, SHIFT(164),
  [395] = {.count = 1, .reusable = true}, SHIFT(129),
  [397] = {.count = 1, .reusable = true}, SHIFT(175),
  [399] = {.count = 1, .reusable = true}, SHIFT(174),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [403] = {.count = 1, .reusable = true}, SHIFT(136),
  [405] = {.count = 1, .reusable = true}, SHIFT(206),
  [407] = {.count = 1, .reusable = true}, SHIFT(128),
  [409] = {.count = 1, .reusable = true}, SHIFT(20),
  [411] = {.count = 1, .reusable = true}, SHIFT(225),
  [413] = {.count = 1, .reusable = true}, SHIFT(19),
  [415] = {.count = 1, .reusable = true}, SHIFT(98),
  [417] = {.count = 1, .reusable = true}, SHIFT(28),
  [419] = {.count = 1, .reusable = true}, SHIFT(50),
  [421] = {.count = 1, .reusable = true}, SHIFT(33),
  [423] = {.count = 1, .reusable = true}, SHIFT(32),
  [425] = {.count = 1, .reusable = true}, SHIFT(93),
  [427] = {.count = 1, .reusable = true}, SHIFT(31),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [431] = {.count = 1, .reusable = true}, SHIFT(5),
  [433] = {.count = 1, .reusable = true}, SHIFT(92),
  [435] = {.count = 1, .reusable = true}, SHIFT(66),
  [437] = {.count = 1, .reusable = true}, SHIFT(91),
  [439] = {.count = 1, .reusable = true}, SHIFT(73),
  [441] = {.count = 1, .reusable = true}, SHIFT(184),
  [443] = {.count = 1, .reusable = true}, SHIFT(124),
  [445] = {.count = 1, .reusable = true}, SHIFT(112),
  [447] = {.count = 1, .reusable = true}, SHIFT(168),
  [449] = {.count = 1, .reusable = true}, SHIFT(89),
  [451] = {.count = 1, .reusable = true}, SHIFT(197),
  [453] = {.count = 1, .reusable = true}, SHIFT(25),
  [455] = {.count = 1, .reusable = true}, SHIFT(24),
  [457] = {.count = 1, .reusable = true}, SHIFT(23),
  [459] = {.count = 1, .reusable = true}, SHIFT(76),
  [461] = {.count = 1, .reusable = true}, SHIFT(40),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [465] = {.count = 1, .reusable = true}, SHIFT(196),
  [467] = {.count = 1, .reusable = true}, SHIFT(41),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [471] = {.count = 1, .reusable = false}, SHIFT(14),
  [473] = {.count = 1, .reusable = true}, SHIFT(157),
  [475] = {.count = 1, .reusable = true}, SHIFT(80),
  [477] = {.count = 1, .reusable = true}, SHIFT(69),
  [479] = {.count = 1, .reusable = true}, SHIFT(134),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [483] = {.count = 1, .reusable = true}, SHIFT(12),
  [485] = {.count = 1, .reusable = true}, SHIFT(183),
  [487] = {.count = 1, .reusable = true}, SHIFT(45),
  [489] = {.count = 1, .reusable = true}, SHIFT(43),
  [491] = {.count = 1, .reusable = true}, SHIFT(209),
  [493] = {.count = 1, .reusable = true}, SHIFT(131),
  [495] = {.count = 1, .reusable = true}, SHIFT(106),
  [497] = {.count = 1, .reusable = true}, SHIFT(37),
  [499] = {.count = 1, .reusable = true}, SHIFT(48),
  [501] = {.count = 1, .reusable = true}, SHIFT(127),
  [503] = {.count = 1, .reusable = true}, SHIFT(35),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [507] = {.count = 1, .reusable = true}, SHIFT(29),
  [509] = {.count = 1, .reusable = true}, SHIFT(104),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [513] = {.count = 1, .reusable = true}, SHIFT(4),
  [515] = {.count = 1, .reusable = true}, SHIFT(125),
  [517] = {.count = 1, .reusable = true}, SHIFT(10),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [521] = {.count = 1, .reusable = true}, SHIFT(123),
  [523] = {.count = 1, .reusable = true}, SHIFT(62),
  [525] = {.count = 1, .reusable = true}, SHIFT(9),
  [527] = {.count = 1, .reusable = true}, SHIFT(84),
  [529] = {.count = 1, .reusable = true}, SHIFT(79),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [533] = {.count = 1, .reusable = true}, SHIFT(58),
  [535] = {.count = 1, .reusable = true}, SHIFT(21),
  [537] = {.count = 1, .reusable = true}, SHIFT(140),
  [539] = {.count = 1, .reusable = true}, SHIFT(102),
  [541] = {.count = 1, .reusable = true}, SHIFT(117),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [545] = {.count = 1, .reusable = true}, SHIFT(113),
  [547] = {.count = 1, .reusable = true}, SHIFT(133),
  [549] = {.count = 1, .reusable = true}, SHIFT(100),
  [551] = {.count = 1, .reusable = true}, SHIFT(99),
  [553] = {.count = 1, .reusable = true}, SHIFT(97),
  [555] = {.count = 1, .reusable = true}, SHIFT(185),
  [557] = {.count = 1, .reusable = true}, SHIFT(172),
  [559] = {.count = 1, .reusable = true}, SHIFT(126),
  [561] = {.count = 1, .reusable = true}, SHIFT(67),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [565] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [567] = {.count = 1, .reusable = true}, SHIFT(39),
  [569] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [573] = {.count = 1, .reusable = true}, SHIFT(230),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_decisiongraph_external_scanner_create(void);
void tree_sitter_decisiongraph_external_scanner_destroy(void *);
bool tree_sitter_decisiongraph_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_decisiongraph_external_scanner_serialize(void *, char *);
void tree_sitter_decisiongraph_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_decisiongraph(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_decisiongraph_external_scanner_create,
      tree_sitter_decisiongraph_external_scanner_destroy,
      tree_sitter_decisiongraph_external_scanner_scan,
      tree_sitter_decisiongraph_external_scanner_serialize,
      tree_sitter_decisiongraph_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
