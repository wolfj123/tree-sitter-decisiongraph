#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 212
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
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(177);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(191);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(111);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(115);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(70);
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
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(115);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= ':') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(105);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'h') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'j') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(93);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(24);
      END_STATE();
    case 73:
      if (lookahead == '{') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == '}') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= ':') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(90);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(28);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 't') ADVANCE(19);
      if (lookahead == 'w') ADVANCE(27);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(80)
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_todo);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\\') ADVANCE(70);
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
          lookahead != 65279) ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= ':') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= ':') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= ':') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ask);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_consider);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH_DASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(70);
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
          lookahead != 65279) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_POUNDimport);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 't') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'j') ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_term);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_term);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_answers);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_answers);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_slot);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(193);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 80, .external_lex_state = 2},
  [3] = {.lex_state = 80, .external_lex_state = 2},
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
  [14] = {.lex_state = 80, .external_lex_state = 2},
  [15] = {.lex_state = 80, .external_lex_state = 2},
  [16] = {.lex_state = 80, .external_lex_state = 2},
  [17] = {.lex_state = 80, .external_lex_state = 2},
  [18] = {.lex_state = 80, .external_lex_state = 2},
  [19] = {.lex_state = 80, .external_lex_state = 2},
  [20] = {.lex_state = 80, .external_lex_state = 2},
  [21] = {.lex_state = 80, .external_lex_state = 2},
  [22] = {.lex_state = 80, .external_lex_state = 2},
  [23] = {.lex_state = 80, .external_lex_state = 2},
  [24] = {.lex_state = 80, .external_lex_state = 2},
  [25] = {.lex_state = 80, .external_lex_state = 2},
  [26] = {.lex_state = 80, .external_lex_state = 2},
  [27] = {.lex_state = 80, .external_lex_state = 2},
  [28] = {.lex_state = 80, .external_lex_state = 2},
  [29] = {.lex_state = 80, .external_lex_state = 2},
  [30] = {.lex_state = 80, .external_lex_state = 2},
  [31] = {.lex_state = 80, .external_lex_state = 2},
  [32] = {.lex_state = 80, .external_lex_state = 2},
  [33] = {.lex_state = 80, .external_lex_state = 2},
  [34] = {.lex_state = 80, .external_lex_state = 2},
  [35] = {.lex_state = 80, .external_lex_state = 2},
  [36] = {.lex_state = 80, .external_lex_state = 2},
  [37] = {.lex_state = 80, .external_lex_state = 2},
  [38] = {.lex_state = 80, .external_lex_state = 2},
  [39] = {.lex_state = 80, .external_lex_state = 2},
  [40] = {.lex_state = 80, .external_lex_state = 2},
  [41] = {.lex_state = 80, .external_lex_state = 2},
  [42] = {.lex_state = 80, .external_lex_state = 2},
  [43] = {.lex_state = 80, .external_lex_state = 2},
  [44] = {.lex_state = 80, .external_lex_state = 2},
  [45] = {.lex_state = 80, .external_lex_state = 2},
  [46] = {.lex_state = 80, .external_lex_state = 2},
  [47] = {.lex_state = 80, .external_lex_state = 2},
  [48] = {.lex_state = 7, .external_lex_state = 2},
  [49] = {.lex_state = 80, .external_lex_state = 2},
  [50] = {.lex_state = 80, .external_lex_state = 2},
  [51] = {.lex_state = 7, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 80, .external_lex_state = 2},
  [56] = {.lex_state = 5, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 5, .external_lex_state = 2},
  [62] = {.lex_state = 5, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 80, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 9, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 5, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 9, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 8, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 8, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 8, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 8, .external_lex_state = 2},
  [89] = {.lex_state = 9, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 80, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 6, .external_lex_state = 2},
  [97] = {.lex_state = 9, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 6, .external_lex_state = 2},
  [106] = {.lex_state = 9, .external_lex_state = 2},
  [107] = {.lex_state = 8, .external_lex_state = 2},
  [108] = {.lex_state = 8, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 7, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 8, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 9, .external_lex_state = 2},
  [122] = {.lex_state = 8, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 7, .external_lex_state = 2},
  [129] = {.lex_state = 7, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 80, .external_lex_state = 2},
  [152] = {.lex_state = 80, .external_lex_state = 2},
  [153] = {.lex_state = 0, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 0, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 0, .external_lex_state = 2},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 80, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 0, .external_lex_state = 2},
  [165] = {.lex_state = 0, .external_lex_state = 2},
  [166] = {.lex_state = 0, .external_lex_state = 2},
  [167] = {.lex_state = 7, .external_lex_state = 2},
  [168] = {.lex_state = 7, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 0, .external_lex_state = 2},
  [171] = {.lex_state = 0, .external_lex_state = 2},
  [172] = {.lex_state = 0, .external_lex_state = 2},
  [173] = {.lex_state = 0, .external_lex_state = 2},
  [174] = {.lex_state = 0, .external_lex_state = 2},
  [175] = {.lex_state = 0, .external_lex_state = 2},
  [176] = {.lex_state = 0, .external_lex_state = 2},
  [177] = {.lex_state = 0, .external_lex_state = 2},
  [178] = {.lex_state = 0, .external_lex_state = 2},
  [179] = {.lex_state = 0, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 0, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 80, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 80, .external_lex_state = 2},
  [190] = {.lex_state = 80, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 80, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 0, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 80, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 1},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 192},
  [210] = {-1},
  [211] = {-1},
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
    [sym_source_file] = STATE(195),
    [sym_decision_graph] = STATE(191),
    [sym__top_level_node] = STATE(42),
    [sym_todo_node] = STATE(43),
    [sym_ask_node] = STATE(43),
    [sym_call_node] = STATE(43),
    [sym_consider_node] = STATE(43),
    [sym_when_node] = STATE(43),
    [sym_section_node] = STATE(43),
    [sym_continue_node] = STATE(43),
    [sym_part_node] = STATE(43),
    [sym_reject_node] = STATE(43),
    [sym_set_node] = STATE(43),
    [sym_import_node] = STATE(43),
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
    STATE(42), 1,
      sym__top_level_node,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(3), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(43), 11,
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
    STATE(9), 1,
      sym_info_sub_node,
    STATE(42), 1,
      sym__top_level_node,
    STATE(178), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(208), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(178), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(206), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(202), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(123), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(149), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(194), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(162), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(42), 1,
      sym__top_level_node,
    STATE(173), 1,
      sym_decision_graph,
    STATE(43), 11,
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
    STATE(50), 1,
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
    STATE(94), 1,
      sym_slot,
    STATE(112), 1,
      sym_assignment_slot,
    STATE(93), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [1227] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(189), 1,
      anon_sym_SLASH,
    STATE(47), 1,
      aux_sym_slot_repeat1,
    STATE(49), 1,
      sym_comment,
    ACTIONS(193), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RBRACE,
  [1248] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(197), 1,
      anon_sym_SLASH,
    STATE(50), 2,
      sym_comment,
      aux_sym_slot_repeat1,
    ACTIONS(195), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RBRACE,
  [1267] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(191), 1,
      sym_slot_identifier,
    STATE(51), 1,
      sym_comment,
    STATE(75), 1,
      sym_assignment_slot,
    STATE(94), 1,
      sym_slot,
    STATE(93), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [1290] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(95), 1,
      sym_term_sub_node,
  [1312] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_term_sub_node,
    STATE(53), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1332] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym_answer_sub_node,
    STATE(54), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1352] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(55), 1,
      sym_comment,
    ACTIONS(195), 4,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [1368] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(214), 1,
      anon_sym_COLON,
    ACTIONS(216), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      sym_slot_identifier,
    STATE(56), 1,
      sym_comment,
    STATE(62), 1,
      aux_sym_aggregate_assignment_slot_repeat1,
  [1390] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_consider_option_sub_node,
    STATE(57), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1410] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(58), 1,
      sym_comment,
    STATE(103), 1,
      sym_answer_sub_node,
  [1432] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(59), 1,
      sym_comment,
    STATE(95), 1,
      sym_term_sub_node,
  [1454] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(60), 1,
      sym_comment,
    STATE(102), 1,
      sym_consider_option_sub_node,
  [1476] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(237), 1,
      anon_sym_SEMI,
    ACTIONS(239), 1,
      sym_slot_identifier,
    STATE(61), 2,
      sym_comment,
      aux_sym_aggregate_assignment_slot_repeat1,
  [1496] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      sym_slot_identifier,
    ACTIONS(242), 1,
      anon_sym_COLON,
    ACTIONS(244), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      aux_sym_aggregate_assignment_slot_repeat1,
    STATE(62), 1,
      sym_comment,
  [1518] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_comment,
    STATE(137), 1,
      sym_else_sub_node,
  [1537] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(250), 1,
      anon_sym_answers,
    STATE(64), 1,
      sym_comment,
    STATE(152), 1,
      sym_node_id,
  [1556] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(65), 1,
      sym_comment,
    STATE(103), 1,
      sym_answer_sub_node,
  [1575] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_comment,
    STATE(87), 1,
      sym_terms_sub_node,
    STATE(199), 1,
      sym_answers_sub_node,
  [1594] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(102), 1,
      sym_consider_option_sub_node,
  [1613] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(254), 1,
      aux_sym_decision_graph_name_token1,
    STATE(68), 1,
      sym_comment,
    STATE(140), 1,
      sym_decision_graph_name,
    STATE(163), 1,
      sym_node_id_value,
  [1632] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_comment,
    STATE(120), 1,
      sym_terms_sub_node,
    STATE(150), 1,
      sym_answers_sub_node,
  [1651] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_COLON,
      sym_slot_identifier,
  [1668] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_comment,
    STATE(157), 1,
      sym_else_sub_node,
  [1687] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(72), 1,
      sym_comment,
    STATE(186), 1,
      sym_else_sub_node,
  [1706] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(254), 1,
      aux_sym_decision_graph_name_token1,
    STATE(73), 1,
      sym_comment,
    STATE(124), 1,
      sym_node_id_value,
    STATE(170), 1,
      sym_decision_graph_name,
  [1725] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      sym_comment,
    STATE(142), 1,
      sym_else_sub_node,
  [1744] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(268), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_comment,
  [1760] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(76), 1,
      sym_comment,
  [1776] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(77), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1790] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(276), 1,
      sym_free_text,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_comment,
  [1806] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(79), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1820] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    ACTIONS(284), 1,
      sym_free_text,
    STATE(80), 1,
      sym_comment,
  [1836] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_text_sub_node,
    STATE(81), 1,
      sym_comment,
  [1852] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_comment,
    STATE(104), 1,
      sym_slot_sub_node,
  [1868] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_when_answer_sub_node,
    STATE(83), 1,
      sym_comment,
  [1884] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 1,
      sym_free_text,
    STATE(84), 1,
      sym_comment,
  [1900] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(85), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1914] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(12), 1,
      sym_node_id,
    STATE(86), 1,
      sym_comment,
  [1930] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_comment,
    STATE(150), 1,
      sym_answers_sub_node,
  [1946] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(300), 1,
      sym_free_text,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_comment,
  [1962] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(304), 1,
      aux_sym_decision_graph_name_token1,
    STATE(89), 1,
      sym_comment,
    STATE(146), 1,
      sym_node_id_value,
  [1978] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(306), 1,
      anon_sym_LBRACK,
    ACTIONS(308), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(90), 1,
      sym_comment,
  [1994] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(91), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2008] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(92), 1,
      sym_comment,
    STATE(201), 1,
      sym_node_id,
  [2024] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(93), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2038] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(314), 1,
      anon_sym_EQ,
    ACTIONS(316), 1,
      anon_sym_PLUS_EQ,
    STATE(94), 1,
      sym_comment,
  [2054] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(95), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2068] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      sym_free_text,
    STATE(96), 1,
      sym_comment,
  [2084] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(304), 1,
      aux_sym_decision_graph_name_token1,
    STATE(97), 1,
      sym_comment,
    STATE(147), 1,
      sym_node_id_value,
  [2100] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(98), 1,
      sym_comment,
    STATE(184), 1,
      sym_node_id,
  [2116] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_consider_options_sub_node,
    STATE(99), 1,
      sym_comment,
  [2132] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(100), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2146] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(101), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2160] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(102), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2174] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(103), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2188] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(324), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_consider_options_sub_node,
    STATE(104), 1,
      sym_comment,
  [2204] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(334), 1,
      anon_sym_COLON,
    ACTIONS(336), 1,
      sym_free_text,
    STATE(105), 1,
      sym_comment,
  [2220] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(338), 1,
      aux_sym_decision_graph_name_token1,
    STATE(106), 1,
      sym_comment,
    STATE(135), 1,
      sym_decision_graph_name,
  [2236] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    ACTIONS(342), 1,
      sym_free_text,
    STATE(107), 1,
      sym_comment,
  [2252] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(344), 1,
      sym_free_text,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_comment,
  [2268] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_text_sub_node,
    STATE(109), 1,
      sym_comment,
  [2284] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(110), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2298] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(111), 1,
      sym_comment,
    ACTIONS(350), 2,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2312] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(112), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2326] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    ACTIONS(356), 1,
      anon_sym_LT,
    STATE(113), 1,
      sym_comment,
  [2342] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_slot_sub_node,
    STATE(114), 1,
      sym_comment,
  [2358] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(115), 1,
      sym_comment,
    ACTIONS(358), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2372] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(191), 1,
      sym_slot_identifier,
    STATE(116), 1,
      sym_comment,
    STATE(144), 1,
      sym_slot,
  [2388] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(290), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_when_answer_sub_node,
    STATE(117), 1,
      sym_comment,
  [2404] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    ACTIONS(362), 1,
      sym_free_text,
    STATE(118), 1,
      sym_comment,
  [2420] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    ACTIONS(364), 1,
      anon_sym_GT,
    STATE(119), 1,
      sym_comment,
  [2436] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_comment,
    STATE(155), 1,
      sym_answers_sub_node,
  [2452] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(304), 1,
      aux_sym_decision_graph_name_token1,
    STATE(121), 1,
      sym_comment,
    STATE(156), 1,
      sym_node_id_value,
  [2468] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(366), 1,
      sym_free_text,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    STATE(122), 1,
      sym_comment,
  [2484] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_comment,
  [2497] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_comment,
  [2510] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(374), 1,
      anon_sym_COLON,
    STATE(125), 1,
      sym_comment,
  [2523] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(376), 1,
      anon_sym_COLON,
    STATE(126), 1,
      sym_comment,
  [2536] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(378), 1,
      anon_sym_COLON,
    STATE(127), 1,
      sym_comment,
  [2549] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(380), 1,
      sym_slot_identifier,
    STATE(128), 1,
      sym_comment,
  [2562] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(382), 1,
      sym_slot_identifier,
    STATE(129), 1,
      sym_comment,
  [2575] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(384), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_comment,
  [2588] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(386), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_comment,
  [2601] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(388), 1,
      anon_sym_COLON,
    STATE(132), 1,
      sym_comment,
  [2614] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(390), 1,
      anon_sym_COLON,
    STATE(133), 1,
      sym_comment,
  [2627] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(392), 1,
      anon_sym_COLON,
    STATE(134), 1,
      sym_comment,
  [2640] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(394), 1,
      anon_sym_COLON,
    STATE(135), 1,
      sym_comment,
  [2653] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(364), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_comment,
  [2666] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym_comment,
  [2679] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(282), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      sym_comment,
  [2692] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      sym_comment,
  [2705] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(400), 1,
      anon_sym_GT,
    STATE(140), 1,
      sym_comment,
  [2718] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(402), 1,
      anon_sym_COLON,
    STATE(141), 1,
      sym_comment,
  [2731] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(260), 1,
      anon_sym_RBRACK,
    STATE(142), 1,
      sym_comment,
  [2744] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym_comment,
  [2757] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym_comment,
  [2770] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(408), 1,
      anon_sym_COLON,
    STATE(145), 1,
      sym_comment,
  [2783] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      sym_comment,
  [2796] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(412), 1,
      anon_sym_LT,
    STATE(147), 1,
      sym_comment,
  [2809] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(414), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_comment,
  [2822] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(149), 1,
      sym_comment,
  [2835] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_comment,
  [2848] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(250), 1,
      anon_sym_answers,
    STATE(151), 1,
      sym_comment,
  [2861] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(420), 1,
      anon_sym_term,
    STATE(152), 1,
      sym_comment,
  [2874] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(422), 1,
      anon_sym_COLON,
    STATE(153), 1,
      sym_comment,
  [2887] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(424), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_comment,
  [2900] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(426), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym_comment,
  [2913] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_comment,
  [2926] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_comment,
  [2939] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(432), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_comment,
  [2952] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(434), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
  [2965] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(436), 1,
      anon_sym_RBRACE,
    STATE(160), 1,
      sym_comment,
  [2978] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(161), 1,
      sym_comment,
  [2991] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(440), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(162), 1,
      sym_comment,
  [3004] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_comment,
  [3017] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(444), 1,
      anon_sym_COLON,
    STATE(164), 1,
      sym_comment,
  [3030] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(446), 1,
      anon_sym_COLON,
    STATE(165), 1,
      sym_comment,
  [3043] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(448), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_comment,
  [3056] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(450), 1,
      sym_slot_identifier,
    STATE(167), 1,
      sym_comment,
  [3069] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(452), 1,
      sym_slot_identifier,
    STATE(168), 1,
      sym_comment,
  [3082] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_comment,
  [3095] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(456), 1,
      anon_sym_GT,
    STATE(170), 1,
      sym_comment,
  [3108] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_comment,
  [3121] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(172), 1,
      sym_comment,
  [3134] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      sym_comment,
  [3147] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_comment,
  [3160] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym_comment,
  [3173] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(468), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym_comment,
  [3186] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(470), 1,
      anon_sym_COLON,
    STATE(177), 1,
      sym_comment,
  [3199] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(472), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      sym_comment,
  [3212] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_comment,
  [3225] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(476), 1,
      anon_sym_COLON,
    STATE(180), 1,
      sym_comment,
  [3238] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(478), 1,
      anon_sym_COLON,
    STATE(181), 1,
      sym_comment,
  [3251] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      sym_comment,
  [3264] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(482), 1,
      anon_sym_COLON,
    STATE(183), 1,
      sym_comment,
  [3277] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(484), 1,
      anon_sym_title,
    STATE(184), 1,
      sym_comment,
  [3290] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_comment,
  [3303] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_comment,
  [3316] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(488), 1,
      anon_sym_COLON,
    STATE(187), 1,
      sym_comment,
  [3329] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(490), 1,
      anon_sym_COLON,
    STATE(188), 1,
      sym_comment,
  [3342] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(492), 1,
      anon_sym_else,
    STATE(189), 1,
      sym_comment,
  [3355] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(494), 1,
      anon_sym_slot,
    STATE(190), 1,
      sym_comment,
  [3368] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(496), 1,
      ts_builtin_sym_end,
    STATE(191), 1,
      sym_comment,
  [3381] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      sym_comment,
  [3394] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(500), 1,
      anon_sym_options,
    STATE(193), 1,
      sym_comment,
  [3407] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_comment,
  [3420] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(504), 1,
      ts_builtin_sym_end,
    STATE(195), 1,
      sym_comment,
  [3433] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(506), 1,
      anon_sym_COLON,
    STATE(196), 1,
      sym_comment,
  [3446] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(508), 1,
      anon_sym_COLON,
    STATE(197), 1,
      sym_comment,
  [3459] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(510), 1,
      anon_sym_LBRACE,
    STATE(198), 1,
      sym_comment,
  [3472] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      sym_comment,
  [3485] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym_comment,
  [3498] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(516), 1,
      anon_sym_text,
    STATE(201), 1,
      sym_comment,
  [3511] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(518), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_comment,
  [3524] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym_comment,
  [3537] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_comment,
  [3550] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(522), 1,
      sym_file_path,
    STATE(205), 1,
      sym_comment,
  [3563] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    STATE(206), 1,
      sym_comment,
  [3576] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      sym_comment,
  [3589] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(526), 1,
      anon_sym_RBRACK,
    STATE(208), 1,
      sym_comment,
  [3602] = 1,
    ACTIONS(528), 1,
      aux_sym_comment_token1,
  [3606] = 1,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
  [3610] = 1,
    ACTIONS(532), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(50)] = 1248,
  [SMALL_STATE(51)] = 1267,
  [SMALL_STATE(52)] = 1290,
  [SMALL_STATE(53)] = 1312,
  [SMALL_STATE(54)] = 1332,
  [SMALL_STATE(55)] = 1352,
  [SMALL_STATE(56)] = 1368,
  [SMALL_STATE(57)] = 1390,
  [SMALL_STATE(58)] = 1410,
  [SMALL_STATE(59)] = 1432,
  [SMALL_STATE(60)] = 1454,
  [SMALL_STATE(61)] = 1476,
  [SMALL_STATE(62)] = 1496,
  [SMALL_STATE(63)] = 1518,
  [SMALL_STATE(64)] = 1537,
  [SMALL_STATE(65)] = 1556,
  [SMALL_STATE(66)] = 1575,
  [SMALL_STATE(67)] = 1594,
  [SMALL_STATE(68)] = 1613,
  [SMALL_STATE(69)] = 1632,
  [SMALL_STATE(70)] = 1651,
  [SMALL_STATE(71)] = 1668,
  [SMALL_STATE(72)] = 1687,
  [SMALL_STATE(73)] = 1706,
  [SMALL_STATE(74)] = 1725,
  [SMALL_STATE(75)] = 1744,
  [SMALL_STATE(76)] = 1760,
  [SMALL_STATE(77)] = 1776,
  [SMALL_STATE(78)] = 1790,
  [SMALL_STATE(79)] = 1806,
  [SMALL_STATE(80)] = 1820,
  [SMALL_STATE(81)] = 1836,
  [SMALL_STATE(82)] = 1852,
  [SMALL_STATE(83)] = 1868,
  [SMALL_STATE(84)] = 1884,
  [SMALL_STATE(85)] = 1900,
  [SMALL_STATE(86)] = 1914,
  [SMALL_STATE(87)] = 1930,
  [SMALL_STATE(88)] = 1946,
  [SMALL_STATE(89)] = 1962,
  [SMALL_STATE(90)] = 1978,
  [SMALL_STATE(91)] = 1994,
  [SMALL_STATE(92)] = 2008,
  [SMALL_STATE(93)] = 2024,
  [SMALL_STATE(94)] = 2038,
  [SMALL_STATE(95)] = 2054,
  [SMALL_STATE(96)] = 2068,
  [SMALL_STATE(97)] = 2084,
  [SMALL_STATE(98)] = 2100,
  [SMALL_STATE(99)] = 2116,
  [SMALL_STATE(100)] = 2132,
  [SMALL_STATE(101)] = 2146,
  [SMALL_STATE(102)] = 2160,
  [SMALL_STATE(103)] = 2174,
  [SMALL_STATE(104)] = 2188,
  [SMALL_STATE(105)] = 2204,
  [SMALL_STATE(106)] = 2220,
  [SMALL_STATE(107)] = 2236,
  [SMALL_STATE(108)] = 2252,
  [SMALL_STATE(109)] = 2268,
  [SMALL_STATE(110)] = 2284,
  [SMALL_STATE(111)] = 2298,
  [SMALL_STATE(112)] = 2312,
  [SMALL_STATE(113)] = 2326,
  [SMALL_STATE(114)] = 2342,
  [SMALL_STATE(115)] = 2358,
  [SMALL_STATE(116)] = 2372,
  [SMALL_STATE(117)] = 2388,
  [SMALL_STATE(118)] = 2404,
  [SMALL_STATE(119)] = 2420,
  [SMALL_STATE(120)] = 2436,
  [SMALL_STATE(121)] = 2452,
  [SMALL_STATE(122)] = 2468,
  [SMALL_STATE(123)] = 2484,
  [SMALL_STATE(124)] = 2497,
  [SMALL_STATE(125)] = 2510,
  [SMALL_STATE(126)] = 2523,
  [SMALL_STATE(127)] = 2536,
  [SMALL_STATE(128)] = 2549,
  [SMALL_STATE(129)] = 2562,
  [SMALL_STATE(130)] = 2575,
  [SMALL_STATE(131)] = 2588,
  [SMALL_STATE(132)] = 2601,
  [SMALL_STATE(133)] = 2614,
  [SMALL_STATE(134)] = 2627,
  [SMALL_STATE(135)] = 2640,
  [SMALL_STATE(136)] = 2653,
  [SMALL_STATE(137)] = 2666,
  [SMALL_STATE(138)] = 2679,
  [SMALL_STATE(139)] = 2692,
  [SMALL_STATE(140)] = 2705,
  [SMALL_STATE(141)] = 2718,
  [SMALL_STATE(142)] = 2731,
  [SMALL_STATE(143)] = 2744,
  [SMALL_STATE(144)] = 2757,
  [SMALL_STATE(145)] = 2770,
  [SMALL_STATE(146)] = 2783,
  [SMALL_STATE(147)] = 2796,
  [SMALL_STATE(148)] = 2809,
  [SMALL_STATE(149)] = 2822,
  [SMALL_STATE(150)] = 2835,
  [SMALL_STATE(151)] = 2848,
  [SMALL_STATE(152)] = 2861,
  [SMALL_STATE(153)] = 2874,
  [SMALL_STATE(154)] = 2887,
  [SMALL_STATE(155)] = 2900,
  [SMALL_STATE(156)] = 2913,
  [SMALL_STATE(157)] = 2926,
  [SMALL_STATE(158)] = 2939,
  [SMALL_STATE(159)] = 2952,
  [SMALL_STATE(160)] = 2965,
  [SMALL_STATE(161)] = 2978,
  [SMALL_STATE(162)] = 2991,
  [SMALL_STATE(163)] = 3004,
  [SMALL_STATE(164)] = 3017,
  [SMALL_STATE(165)] = 3030,
  [SMALL_STATE(166)] = 3043,
  [SMALL_STATE(167)] = 3056,
  [SMALL_STATE(168)] = 3069,
  [SMALL_STATE(169)] = 3082,
  [SMALL_STATE(170)] = 3095,
  [SMALL_STATE(171)] = 3108,
  [SMALL_STATE(172)] = 3121,
  [SMALL_STATE(173)] = 3134,
  [SMALL_STATE(174)] = 3147,
  [SMALL_STATE(175)] = 3160,
  [SMALL_STATE(176)] = 3173,
  [SMALL_STATE(177)] = 3186,
  [SMALL_STATE(178)] = 3199,
  [SMALL_STATE(179)] = 3212,
  [SMALL_STATE(180)] = 3225,
  [SMALL_STATE(181)] = 3238,
  [SMALL_STATE(182)] = 3251,
  [SMALL_STATE(183)] = 3264,
  [SMALL_STATE(184)] = 3277,
  [SMALL_STATE(185)] = 3290,
  [SMALL_STATE(186)] = 3303,
  [SMALL_STATE(187)] = 3316,
  [SMALL_STATE(188)] = 3329,
  [SMALL_STATE(189)] = 3342,
  [SMALL_STATE(190)] = 3355,
  [SMALL_STATE(191)] = 3368,
  [SMALL_STATE(192)] = 3381,
  [SMALL_STATE(193)] = 3394,
  [SMALL_STATE(194)] = 3407,
  [SMALL_STATE(195)] = 3420,
  [SMALL_STATE(196)] = 3433,
  [SMALL_STATE(197)] = 3446,
  [SMALL_STATE(198)] = 3459,
  [SMALL_STATE(199)] = 3472,
  [SMALL_STATE(200)] = 3485,
  [SMALL_STATE(201)] = 3498,
  [SMALL_STATE(202)] = 3511,
  [SMALL_STATE(203)] = 3524,
  [SMALL_STATE(204)] = 3537,
  [SMALL_STATE(205)] = 3550,
  [SMALL_STATE(206)] = 3563,
  [SMALL_STATE(207)] = 3576,
  [SMALL_STATE(208)] = 3589,
  [SMALL_STATE(209)] = 3602,
  [SMALL_STATE(210)] = 3606,
  [SMALL_STATE(211)] = 3610,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(209),
  [5] = {.count = 1, .reusable = true}, SHIFT(211),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(86),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(86),
  [21] = {.count = 1, .reusable = true}, SHIFT(98),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [27] = {.count = 1, .reusable = true}, SHIFT(187),
  [29] = {.count = 1, .reusable = true}, SHIFT(183),
  [31] = {.count = 1, .reusable = true}, SHIFT(180),
  [33] = {.count = 1, .reusable = true}, SHIFT(97),
  [35] = {.count = 1, .reusable = true}, SHIFT(177),
  [37] = {.count = 1, .reusable = true}, SHIFT(176),
  [39] = {.count = 1, .reusable = true}, SHIFT(172),
  [41] = {.count = 1, .reusable = true}, SHIFT(169),
  [43] = {.count = 1, .reusable = true}, SHIFT(165),
  [45] = {.count = 1, .reusable = true}, SHIFT(164),
  [47] = {.count = 1, .reusable = true}, SHIFT(106),
  [49] = {.count = 1, .reusable = true}, SHIFT(134),
  [51] = {.count = 1, .reusable = true}, SHIFT(133),
  [53] = {.count = 1, .reusable = true}, SHIFT(131),
  [55] = {.count = 1, .reusable = true}, SHIFT(127),
  [57] = {.count = 1, .reusable = true}, SHIFT(126),
  [59] = {.count = 1, .reusable = true}, SHIFT(125),
  [61] = {.count = 1, .reusable = true}, SHIFT(143),
  [63] = {.count = 1, .reusable = true}, SHIFT(148),
  [65] = {.count = 1, .reusable = true}, SHIFT(158),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 7),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 7),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 8),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 8),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 4),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 4),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [167] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [169] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 2),
  [189] = {.count = 1, .reusable = true}, SHIFT(168),
  [191] = {.count = 1, .reusable = true}, SHIFT(49),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 1),
  [195] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2),
  [197] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2), SHIFT_REPEAT(168),
  [200] = {.count = 1, .reusable = true}, SHIFT(96),
  [202] = {.count = 1, .reusable = true}, SHIFT(198),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(96),
  [207] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [209] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(105),
  [212] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_aggregate_assignment_slot, 3),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [218] = {.count = 1, .reusable = false}, SHIFT(70),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(167),
  [223] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(105),
  [227] = {.count = 1, .reusable = true}, SHIFT(182),
  [229] = {.count = 1, .reusable = true}, SHIFT(185),
  [231] = {.count = 1, .reusable = true}, SHIFT(167),
  [233] = {.count = 1, .reusable = true}, SHIFT(91),
  [235] = {.count = 1, .reusable = false}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2),
  [239] = {.count = 2, .reusable = false}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2), SHIFT_REPEAT(70),
  [242] = {.count = 1, .reusable = false}, REDUCE(sym_aggregate_assignment_slot, 4),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 4),
  [246] = {.count = 1, .reusable = true}, SHIFT(40),
  [248] = {.count = 1, .reusable = true}, SHIFT(189),
  [250] = {.count = 1, .reusable = true}, SHIFT(153),
  [252] = {.count = 1, .reusable = true}, SHIFT(64),
  [254] = {.count = 1, .reusable = true}, SHIFT(119),
  [256] = {.count = 1, .reusable = false}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 1),
  [258] = {.count = 1, .reusable = true}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 1),
  [260] = {.count = 1, .reusable = true}, SHIFT(31),
  [262] = {.count = 1, .reusable = true}, SHIFT(24),
  [264] = {.count = 1, .reusable = true}, SHIFT(44),
  [266] = {.count = 1, .reusable = true}, SHIFT(10),
  [268] = {.count = 1, .reusable = true}, SHIFT(48),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [276] = {.count = 1, .reusable = true}, SHIFT(200),
  [278] = {.count = 1, .reusable = true}, SHIFT(101),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [282] = {.count = 1, .reusable = true}, SHIFT(28),
  [284] = {.count = 1, .reusable = true}, SHIFT(171),
  [286] = {.count = 1, .reusable = true}, SHIFT(92),
  [288] = {.count = 1, .reusable = true}, SHIFT(190),
  [290] = {.count = 1, .reusable = true}, SHIFT(51),
  [292] = {.count = 1, .reusable = true}, SHIFT(23),
  [294] = {.count = 1, .reusable = true}, SHIFT(159),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [298] = {.count = 1, .reusable = true}, SHIFT(151),
  [300] = {.count = 1, .reusable = true}, SHIFT(203),
  [302] = {.count = 1, .reusable = true}, SHIFT(79),
  [304] = {.count = 1, .reusable = true}, SHIFT(113),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [314] = {.count = 1, .reusable = true}, SHIFT(128),
  [316] = {.count = 1, .reusable = true}, SHIFT(129),
  [318] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [320] = {.count = 1, .reusable = false}, SHIFT(88),
  [322] = {.count = 1, .reusable = false}, SHIFT(197),
  [324] = {.count = 1, .reusable = true}, SHIFT(193),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [330] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [332] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [334] = {.count = 1, .reusable = false}, SHIFT(11),
  [336] = {.count = 1, .reusable = false}, SHIFT(181),
  [338] = {.count = 1, .reusable = true}, SHIFT(136),
  [340] = {.count = 1, .reusable = true}, SHIFT(41),
  [342] = {.count = 1, .reusable = true}, SHIFT(138),
  [344] = {.count = 1, .reusable = true}, SHIFT(174),
  [346] = {.count = 1, .reusable = true}, SHIFT(76),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [356] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [360] = {.count = 1, .reusable = true}, SHIFT(33),
  [362] = {.count = 1, .reusable = true}, SHIFT(207),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [366] = {.count = 1, .reusable = true}, SHIFT(160),
  [368] = {.count = 1, .reusable = true}, SHIFT(161),
  [370] = {.count = 1, .reusable = true}, SHIFT(26),
  [372] = {.count = 1, .reusable = true}, SHIFT(36),
  [374] = {.count = 1, .reusable = true}, SHIFT(4),
  [376] = {.count = 1, .reusable = true}, SHIFT(83),
  [378] = {.count = 1, .reusable = true}, SHIFT(82),
  [380] = {.count = 1, .reusable = true}, SHIFT(111),
  [382] = {.count = 1, .reusable = true}, SHIFT(56),
  [384] = {.count = 1, .reusable = true}, SHIFT(13),
  [386] = {.count = 1, .reusable = true}, SHIFT(73),
  [388] = {.count = 1, .reusable = true}, SHIFT(108),
  [390] = {.count = 1, .reusable = true}, SHIFT(81),
  [392] = {.count = 1, .reusable = true}, SHIFT(80),
  [394] = {.count = 1, .reusable = true}, SHIFT(205),
  [396] = {.count = 1, .reusable = true}, SHIFT(27),
  [398] = {.count = 1, .reusable = true}, SHIFT(30),
  [400] = {.count = 1, .reusable = true}, SHIFT(89),
  [402] = {.count = 1, .reusable = true}, SHIFT(59),
  [404] = {.count = 1, .reusable = true}, SHIFT(22),
  [406] = {.count = 1, .reusable = true}, SHIFT(166),
  [408] = {.count = 1, .reusable = true}, SHIFT(67),
  [410] = {.count = 1, .reusable = true}, SHIFT(17),
  [412] = {.count = 1, .reusable = false}, SHIFT(14),
  [414] = {.count = 1, .reusable = true}, SHIFT(84),
  [416] = {.count = 1, .reusable = true}, SHIFT(100),
  [418] = {.count = 1, .reusable = true}, SHIFT(32),
  [420] = {.count = 1, .reusable = true}, SHIFT(141),
  [422] = {.count = 1, .reusable = true}, SHIFT(65),
  [424] = {.count = 1, .reusable = true}, SHIFT(122),
  [426] = {.count = 1, .reusable = true}, SHIFT(21),
  [428] = {.count = 1, .reusable = true}, SHIFT(20),
  [430] = {.count = 1, .reusable = true}, SHIFT(19),
  [432] = {.count = 1, .reusable = true}, SHIFT(204),
  [434] = {.count = 1, .reusable = true}, SHIFT(35),
  [436] = {.count = 1, .reusable = true}, SHIFT(179),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [440] = {.count = 1, .reusable = true}, SHIFT(29),
  [442] = {.count = 1, .reusable = true}, SHIFT(25),
  [444] = {.count = 1, .reusable = true}, SHIFT(139),
  [446] = {.count = 1, .reusable = true}, SHIFT(118),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [450] = {.count = 1, .reusable = true}, SHIFT(188),
  [452] = {.count = 1, .reusable = true}, SHIFT(55),
  [454] = {.count = 1, .reusable = true}, SHIFT(34),
  [456] = {.count = 1, .reusable = true}, SHIFT(121),
  [458] = {.count = 1, .reusable = true}, SHIFT(37),
  [460] = {.count = 1, .reusable = true}, SHIFT(5),
  [462] = {.count = 1, .reusable = true}, SHIFT(192),
  [464] = {.count = 1, .reusable = true}, SHIFT(90),
  [466] = {.count = 1, .reusable = true}, SHIFT(38),
  [468] = {.count = 1, .reusable = true}, SHIFT(117),
  [470] = {.count = 1, .reusable = true}, SHIFT(114),
  [472] = {.count = 1, .reusable = true}, SHIFT(39),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [476] = {.count = 1, .reusable = true}, SHIFT(68),
  [478] = {.count = 1, .reusable = true}, SHIFT(8),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [482] = {.count = 1, .reusable = true}, SHIFT(109),
  [484] = {.count = 1, .reusable = true}, SHIFT(132),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [488] = {.count = 1, .reusable = true}, SHIFT(107),
  [490] = {.count = 1, .reusable = true}, SHIFT(7),
  [492] = {.count = 1, .reusable = true}, SHIFT(130),
  [494] = {.count = 1, .reusable = true}, SHIFT(196),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [500] = {.count = 1, .reusable = true}, SHIFT(145),
  [502] = {.count = 1, .reusable = true}, SHIFT(85),
  [504] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [506] = {.count = 1, .reusable = true}, SHIFT(116),
  [508] = {.count = 1, .reusable = true}, SHIFT(78),
  [510] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [512] = {.count = 1, .reusable = true}, SHIFT(45),
  [514] = {.count = 1, .reusable = true}, SHIFT(115),
  [516] = {.count = 1, .reusable = true}, SHIFT(154),
  [518] = {.count = 1, .reusable = true}, SHIFT(77),
  [520] = {.count = 1, .reusable = true}, SHIFT(46),
  [522] = {.count = 1, .reusable = true}, SHIFT(175),
  [524] = {.count = 1, .reusable = true}, SHIFT(110),
  [526] = {.count = 1, .reusable = true}, SHIFT(18),
  [528] = {.count = 1, .reusable = true}, SHIFT(210),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
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
