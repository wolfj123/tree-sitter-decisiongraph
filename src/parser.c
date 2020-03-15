#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 240
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 83
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
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
  anon_sym_LBRACE = 7,
  anon_sym_terms = 8,
  anon_sym_RBRACE = 9,
  anon_sym_answers = 10,
  anon_sym_call = 11,
  anon_sym_GT = 12,
  anon_sym_consider = 13,
  anon_sym_slot = 14,
  anon_sym_options = 15,
  anon_sym_else = 16,
  anon_sym_when = 17,
  anon_sym_section = 18,
  anon_sym_continue = 19,
  anon_sym_LBRACK_DASH_DASH = 20,
  anon_sym_DASH_DASH_RBRACK = 21,
  anon_sym_end = 22,
  anon_sym_reject = 23,
  anon_sym_set = 24,
  anon_sym_SEMI = 25,
  anon_sym_PLUS_EQ = 26,
  anon_sym_EQ = 27,
  anon_sym_SLASH = 28,
  anon_sym_COMMA = 29,
  aux_sym_slot_value_token1 = 30,
  anon_sym_POUNDimport = 31,
  aux_sym_decision_graph_name_token1 = 32,
  anon_sym_text = 33,
  anon_sym_title = 34,
  anon_sym_LT = 35,
  anon_sym_LT_DASH_DASH = 36,
  aux_sym_comment_token1 = 37,
  sym__comment_block = 38,
  sym_file_path = 39,
  sym_source_file = 40,
  sym_decision_graph = 41,
  sym__top_level_node = 42,
  sym_todo_node = 43,
  sym_ask_node = 44,
  sym_terms_sub_node = 45,
  sym_term_sub_node = 46,
  sym_answers_sub_node = 47,
  sym_answer_sub_node = 48,
  sym_call_node = 49,
  sym_consider_node = 50,
  sym_slot_sub_node = 51,
  sym_consider_options_sub_node = 52,
  sym_consider_option_sub_node = 53,
  sym_else_sub_node = 54,
  sym_when_node = 55,
  sym_section_node = 56,
  sym_continue_node = 57,
  sym_part_node = 58,
  sym_end_node = 59,
  sym_reject_node = 60,
  sym_set_node = 61,
  sym_assignment_slot = 62,
  sym_aggregate_assignment_slot = 63,
  sym_atomic_assignment_slot = 64,
  sym_slot = 65,
  sym__slot_values = 66,
  sym_slot_value = 67,
  sym__slot_identifier = 68,
  sym_import_node = 69,
  sym_decision_graph_name = 70,
  sym_text_sub_node = 71,
  sym_info_sub_node = 72,
  sym_when_answer_sub_node = 73,
  sym_node_id = 74,
  sym__node_id_value = 75,
  sym_comment = 76,
  aux_sym_decision_graph_repeat1 = 77,
  aux_sym_terms_sub_node_repeat1 = 78,
  aux_sym_answers_sub_node_repeat1 = 79,
  aux_sym_consider_options_sub_node_repeat1 = 80,
  aux_sym_slot_repeat1 = 81,
  aux_sym__slot_values_repeat1 = 82,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_todo] = "todo",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACK] = "]",
  [sym_free_text] = "free_text",
  [anon_sym_ask] = "ask",
  [anon_sym_LBRACE] = "{",
  [anon_sym_terms] = "terms",
  [anon_sym_RBRACE] = "}",
  [anon_sym_answers] = "answers",
  [anon_sym_call] = "call",
  [anon_sym_GT] = ">",
  [anon_sym_consider] = "consider",
  [anon_sym_slot] = "slot",
  [anon_sym_options] = "options",
  [anon_sym_else] = "else",
  [anon_sym_when] = "when",
  [anon_sym_section] = "section",
  [anon_sym_continue] = "continue",
  [anon_sym_LBRACK_DASH_DASH] = "[--",
  [anon_sym_DASH_DASH_RBRACK] = "--]",
  [anon_sym_end] = "end",
  [anon_sym_reject] = "reject",
  [anon_sym_set] = "set",
  [anon_sym_SEMI] = ";",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH] = "/",
  [anon_sym_COMMA] = ",",
  [aux_sym_slot_value_token1] = "slot_value_token1",
  [anon_sym_POUNDimport] = "#import",
  [aux_sym_decision_graph_name_token1] = "decision_graph_name_token1",
  [anon_sym_text] = "text",
  [anon_sym_title] = "title",
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
  [sym_terms_sub_node] = "terms_sub_node",
  [sym_term_sub_node] = "term_sub_node",
  [sym_answers_sub_node] = "answers_sub_node",
  [sym_answer_sub_node] = "answer_sub_node",
  [sym_call_node] = "call_node",
  [sym_consider_node] = "consider_node",
  [sym_slot_sub_node] = "slot_sub_node",
  [sym_consider_options_sub_node] = "consider_options_sub_node",
  [sym_consider_option_sub_node] = "consider_option_sub_node",
  [sym_else_sub_node] = "else_sub_node",
  [sym_when_node] = "when_node",
  [sym_section_node] = "section_node",
  [sym_continue_node] = "continue_node",
  [sym_part_node] = "part_node",
  [sym_end_node] = "end_node",
  [sym_reject_node] = "reject_node",
  [sym_set_node] = "set_node",
  [sym_assignment_slot] = "assignment_slot",
  [sym_aggregate_assignment_slot] = "aggregate_assignment_slot",
  [sym_atomic_assignment_slot] = "atomic_assignment_slot",
  [sym_slot] = "slot",
  [sym__slot_values] = "_slot_values",
  [sym_slot_value] = "slot_value",
  [sym__slot_identifier] = "_slot_identifier",
  [sym_import_node] = "import_node",
  [sym_decision_graph_name] = "decision_graph_name",
  [sym_text_sub_node] = "text_sub_node",
  [sym_info_sub_node] = "info_sub_node",
  [sym_when_answer_sub_node] = "when_answer_sub_node",
  [sym_node_id] = "node_id",
  [sym__node_id_value] = "_node_id_value",
  [sym_comment] = "comment",
  [aux_sym_decision_graph_repeat1] = "decision_graph_repeat1",
  [aux_sym_terms_sub_node_repeat1] = "terms_sub_node_repeat1",
  [aux_sym_answers_sub_node_repeat1] = "answers_sub_node_repeat1",
  [aux_sym_consider_options_sub_node_repeat1] = "consider_options_sub_node_repeat1",
  [aux_sym_slot_repeat1] = "slot_repeat1",
  [aux_sym__slot_values_repeat1] = "_slot_values_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_todo] = anon_sym_todo,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_free_text] = sym_free_text,
  [anon_sym_ask] = anon_sym_ask,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_terms] = anon_sym_terms,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_answers] = anon_sym_answers,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_consider] = anon_sym_consider,
  [anon_sym_slot] = anon_sym_slot,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_LBRACK_DASH_DASH] = anon_sym_LBRACK_DASH_DASH,
  [anon_sym_DASH_DASH_RBRACK] = anon_sym_DASH_DASH_RBRACK,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_reject] = anon_sym_reject,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_slot_value_token1] = aux_sym_slot_value_token1,
  [anon_sym_POUNDimport] = anon_sym_POUNDimport,
  [aux_sym_decision_graph_name_token1] = aux_sym_decision_graph_name_token1,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_title] = anon_sym_title,
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
  [sym_terms_sub_node] = sym_terms_sub_node,
  [sym_term_sub_node] = sym_term_sub_node,
  [sym_answers_sub_node] = sym_answers_sub_node,
  [sym_answer_sub_node] = sym_answer_sub_node,
  [sym_call_node] = sym_call_node,
  [sym_consider_node] = sym_consider_node,
  [sym_slot_sub_node] = sym_slot_sub_node,
  [sym_consider_options_sub_node] = sym_consider_options_sub_node,
  [sym_consider_option_sub_node] = sym_consider_option_sub_node,
  [sym_else_sub_node] = sym_else_sub_node,
  [sym_when_node] = sym_when_node,
  [sym_section_node] = sym_section_node,
  [sym_continue_node] = sym_continue_node,
  [sym_part_node] = sym_part_node,
  [sym_end_node] = sym_end_node,
  [sym_reject_node] = sym_reject_node,
  [sym_set_node] = sym_set_node,
  [sym_assignment_slot] = sym_assignment_slot,
  [sym_aggregate_assignment_slot] = sym_aggregate_assignment_slot,
  [sym_atomic_assignment_slot] = sym_atomic_assignment_slot,
  [sym_slot] = sym_slot,
  [sym__slot_values] = sym__slot_values,
  [sym_slot_value] = sym_slot_value,
  [sym__slot_identifier] = sym__slot_identifier,
  [sym_import_node] = sym_import_node,
  [sym_decision_graph_name] = sym_decision_graph_name,
  [sym_text_sub_node] = sym_text_sub_node,
  [sym_info_sub_node] = sym_info_sub_node,
  [sym_when_answer_sub_node] = sym_when_answer_sub_node,
  [sym_node_id] = sym_node_id,
  [sym__node_id_value] = sym__node_id_value,
  [sym_comment] = sym_comment,
  [aux_sym_decision_graph_repeat1] = aux_sym_decision_graph_repeat1,
  [aux_sym_terms_sub_node_repeat1] = aux_sym_terms_sub_node_repeat1,
  [aux_sym_answers_sub_node_repeat1] = aux_sym_answers_sub_node_repeat1,
  [aux_sym_consider_options_sub_node_repeat1] = aux_sym_consider_options_sub_node_repeat1,
  [aux_sym_slot_repeat1] = aux_sym_slot_repeat1,
  [aux_sym__slot_values_repeat1] = aux_sym__slot_values_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_terms] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_answers] = {
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
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_slot_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUNDimport] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_decision_graph_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
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
  [sym_call_node] = {
    .visible = true,
    .named = true,
  },
  [sym_consider_node] = {
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
  [sym_else_sub_node] = {
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
  [sym_end_node] = {
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
  [sym_aggregate_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_slot] = {
    .visible = true,
    .named = true,
  },
  [sym__slot_values] = {
    .visible = false,
    .named = true,
  },
  [sym_slot_value] = {
    .visible = true,
    .named = true,
  },
  [sym__slot_identifier] = {
    .visible = false,
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
  [sym_when_answer_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_node_id] = {
    .visible = true,
    .named = true,
  },
  [sym__node_id_value] = {
    .visible = false,
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
  [aux_sym_slot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__slot_values_repeat1] = {
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
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+') ADVANCE(130);
      if (lookahead == ',') ADVANCE(126);
      if (lookahead == '-') ADVANCE(129);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(122);
      if (lookahead == '<') ADVANCE(193);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'c') ADVANCE(132);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(138);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(148);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '}') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(114);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == '}') ADVANCE(94);
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
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '{') ADVANCE(91);
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
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(123);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(116);
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
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(112);
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
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(15);
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
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(13);
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
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(57);
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(110);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(64);
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
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(95);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(29);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 72:
      if (lookahead == 'w') ADVANCE(23);
      END_STATE();
    case 73:
      if (lookahead == '{') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 74:
      if (lookahead == '}') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
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
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(88);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(124);
      if (lookahead == '>') ADVANCE(99);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(86);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(26);
      if (lookahead == '}') ADVANCE(94);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(79);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_terms);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_terms);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_answers);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_answers);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_consider);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_slot);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH_DASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_POUNDimport);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '-') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '=') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == ']') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'j') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'k') ADVANCE(90);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(98);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(109);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'p') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 'x') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'w') ADVANCE(143);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
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
  [18] = {.lex_state = 6, .external_lex_state = 2},
  [19] = {.lex_state = 80, .external_lex_state = 2},
  [20] = {.lex_state = 80, .external_lex_state = 2},
  [21] = {.lex_state = 80, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 80, .external_lex_state = 2},
  [24] = {.lex_state = 80, .external_lex_state = 2},
  [25] = {.lex_state = 6, .external_lex_state = 2},
  [26] = {.lex_state = 80, .external_lex_state = 2},
  [27] = {.lex_state = 80, .external_lex_state = 2},
  [28] = {.lex_state = 80, .external_lex_state = 2},
  [29] = {.lex_state = 80, .external_lex_state = 2},
  [30] = {.lex_state = 80, .external_lex_state = 2},
  [31] = {.lex_state = 6, .external_lex_state = 2},
  [32] = {.lex_state = 80, .external_lex_state = 2},
  [33] = {.lex_state = 80, .external_lex_state = 2},
  [34] = {.lex_state = 80, .external_lex_state = 2},
  [35] = {.lex_state = 80, .external_lex_state = 2},
  [36] = {.lex_state = 80, .external_lex_state = 2},
  [37] = {.lex_state = 80, .external_lex_state = 2},
  [38] = {.lex_state = 6, .external_lex_state = 2},
  [39] = {.lex_state = 80, .external_lex_state = 2},
  [40] = {.lex_state = 80, .external_lex_state = 2},
  [41] = {.lex_state = 80, .external_lex_state = 2},
  [42] = {.lex_state = 80, .external_lex_state = 2},
  [43] = {.lex_state = 80, .external_lex_state = 2},
  [44] = {.lex_state = 80, .external_lex_state = 2},
  [45] = {.lex_state = 80, .external_lex_state = 2},
  [46] = {.lex_state = 80, .external_lex_state = 2},
  [47] = {.lex_state = 80, .external_lex_state = 2},
  [48] = {.lex_state = 80, .external_lex_state = 2},
  [49] = {.lex_state = 80, .external_lex_state = 2},
  [50] = {.lex_state = 80, .external_lex_state = 2},
  [51] = {.lex_state = 80, .external_lex_state = 2},
  [52] = {.lex_state = 80, .external_lex_state = 2},
  [53] = {.lex_state = 80, .external_lex_state = 2},
  [54] = {.lex_state = 80, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 80, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 80, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 6, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 80, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 80, .external_lex_state = 2},
  [70] = {.lex_state = 80, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 80, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 7, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 6, .external_lex_state = 2},
  [86] = {.lex_state = 7, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 80, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 5, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 7, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 5, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 6, .external_lex_state = 2},
  [113] = {.lex_state = 6, .external_lex_state = 2},
  [114] = {.lex_state = 5, .external_lex_state = 2},
  [115] = {.lex_state = 7, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 6, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 5, .external_lex_state = 2},
  [124] = {.lex_state = 7, .external_lex_state = 2},
  [125] = {.lex_state = 5, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 5, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 5, .external_lex_state = 2},
  [132] = {.lex_state = 5, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 6, .external_lex_state = 2},
  [136] = {.lex_state = 80, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 5, .external_lex_state = 2},
  [140] = {.lex_state = 5, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 5, .external_lex_state = 2},
  [143] = {.lex_state = 6, .external_lex_state = 2},
  [144] = {.lex_state = 7, .external_lex_state = 2},
  [145] = {.lex_state = 5, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 80, .external_lex_state = 2},
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
  [168] = {.lex_state = 0, .external_lex_state = 2},
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
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 80, .external_lex_state = 2},
  [191] = {.lex_state = 80, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 80, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 0, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 2},
  [198] = {.lex_state = 80, .external_lex_state = 2},
  [199] = {.lex_state = 0, .external_lex_state = 2},
  [200] = {.lex_state = 0, .external_lex_state = 2},
  [201] = {.lex_state = 0, .external_lex_state = 2},
  [202] = {.lex_state = 0, .external_lex_state = 2},
  [203] = {.lex_state = 0, .external_lex_state = 2},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 0, .external_lex_state = 2},
  [206] = {.lex_state = 0, .external_lex_state = 2},
  [207] = {.lex_state = 0, .external_lex_state = 2},
  [208] = {.lex_state = 0, .external_lex_state = 2},
  [209] = {.lex_state = 0, .external_lex_state = 2},
  [210] = {.lex_state = 0, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 0, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 0, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 80, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 0, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 80, .external_lex_state = 2},
  [233] = {.lex_state = 0, .external_lex_state = 2},
  [234] = {.lex_state = 80, .external_lex_state = 2},
  [235] = {.lex_state = 0, .external_lex_state = 2},
  [236] = {.lex_state = 0, .external_lex_state = 2},
  [237] = {.lex_state = 195},
  [238] = {-1},
  [239] = {-1},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_terms] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_answers] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_consider] = ACTIONS(1),
    [anon_sym_slot] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_LBRACK_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_RBRACK] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_reject] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_POUNDimport] = ACTIONS(1),
    [aux_sym_decision_graph_name_token1] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
    [sym_file_path] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(224),
    [sym_decision_graph] = STATE(221),
    [sym__top_level_node] = STATE(46),
    [sym_todo_node] = STATE(51),
    [sym_ask_node] = STATE(51),
    [sym_call_node] = STATE(51),
    [sym_consider_node] = STATE(51),
    [sym_when_node] = STATE(51),
    [sym_section_node] = STATE(51),
    [sym_continue_node] = STATE(51),
    [sym_part_node] = STATE(51),
    [sym_end_node] = STATE(51),
    [sym_reject_node] = STATE(51),
    [sym_set_node] = STATE(51),
    [sym_import_node] = STATE(51),
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
    STATE(46), 1,
      sym__top_level_node,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [42] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(18), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(46), 1,
      sym__top_level_node,
    STATE(3), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [82] = 11,
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
    STATE(46), 1,
      sym__top_level_node,
    STATE(223), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [127] = 11,
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
    STATE(11), 1,
      sym_info_sub_node,
    STATE(46), 1,
      sym__top_level_node,
    STATE(174), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [172] = 9,
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
    STATE(46), 1,
      sym__top_level_node,
    STATE(199), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [211] = 9,
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
    STATE(46), 1,
      sym__top_level_node,
    STATE(236), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [250] = 9,
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
    STATE(46), 1,
      sym__top_level_node,
    STATE(235), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [289] = 9,
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
    STATE(46), 1,
      sym__top_level_node,
    STATE(159), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [328] = 9,
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
    STATE(46), 1,
      sym__top_level_node,
    STATE(171), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [367] = 9,
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
    STATE(46), 1,
      sym__top_level_node,
    STATE(223), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [406] = 9,
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
    STATE(46), 1,
      sym__top_level_node,
    STATE(228), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [445] = 9,
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
    STATE(46), 1,
      sym__top_level_node,
    STATE(153), 1,
      sym_decision_graph,
    STATE(51), 12,
      sym_todo_node,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_end_node,
      sym_reject_node,
      sym_set_node,
      sym_import_node,
  [484] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_comment,
    ACTIONS(25), 14,
      anon_sym_todo,
      anon_sym_ask,
      anon_sym_terms,
      anon_sym_call,
      anon_sym_consider,
      anon_sym_when,
      anon_sym_section,
      anon_sym_continue,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_end,
      anon_sym_reject,
      anon_sym_set,
      anon_sym_text,
      anon_sym_title,
  [513] = 16,
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
      anon_sym_end,
    ACTIONS(45), 1,
      anon_sym_reject,
    ACTIONS(47), 1,
      anon_sym_set,
    ACTIONS(49), 1,
      anon_sym_POUNDimport,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      sym_node_id,
  [562] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(51), 1,
      anon_sym_todo,
    ACTIONS(53), 1,
      anon_sym_ask,
    ACTIONS(55), 1,
      anon_sym_call,
    ACTIONS(57), 1,
      anon_sym_consider,
    ACTIONS(59), 1,
      anon_sym_when,
    ACTIONS(61), 1,
      anon_sym_section,
    ACTIONS(63), 1,
      anon_sym_continue,
    ACTIONS(65), 1,
      anon_sym_end,
    ACTIONS(67), 1,
      anon_sym_reject,
    ACTIONS(69), 1,
      anon_sym_set,
    STATE(16), 1,
      sym_comment,
  [602] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_comment,
    ACTIONS(71), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [622] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(18), 1,
      sym_comment,
    STATE(54), 1,
      sym__slot_identifier,
    STATE(75), 1,
      sym_aggregate_assignment_slot,
    STATE(81), 1,
      sym_atomic_assignment_slot,
    STATE(106), 1,
      sym_assignment_slot,
    STATE(136), 1,
      sym_slot,
  [650] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [670] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_comment,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [690] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [710] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(91), 1,
      anon_sym_COMMA,
    STATE(22), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(89), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [730] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(94), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [750] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [770] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(25), 1,
      sym_comment,
    STATE(54), 1,
      sym__slot_identifier,
    STATE(75), 1,
      sym_aggregate_assignment_slot,
    STATE(81), 1,
      sym_atomic_assignment_slot,
    STATE(92), 1,
      sym_assignment_slot,
    STATE(136), 1,
      sym_slot,
  [798] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [818] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [838] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [858] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [878] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [898] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(31), 1,
      sym_comment,
    STATE(54), 1,
      sym__slot_identifier,
    STATE(75), 1,
      sym_aggregate_assignment_slot,
    STATE(81), 1,
      sym_atomic_assignment_slot,
    STATE(122), 1,
      sym_assignment_slot,
    STATE(136), 1,
      sym_slot,
  [926] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [946] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [966] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [986] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1006] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1026] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1046] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(38), 1,
      sym_comment,
    STATE(54), 1,
      sym__slot_identifier,
    STATE(75), 1,
      sym_aggregate_assignment_slot,
    STATE(81), 1,
      sym_atomic_assignment_slot,
    STATE(136), 1,
      sym_slot,
    STATE(138), 1,
      sym_assignment_slot,
  [1074] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1094] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1114] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_comment,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1134] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1154] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1174] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1194] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_comment,
    ACTIONS(170), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1214] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_comment,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1234] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_comment,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1254] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_comment,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1274] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym_comment,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1294] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_comment,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1314] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_comment,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1334] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_comment,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1354] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_comment,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1374] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_slot_repeat1,
    ACTIONS(206), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1395] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym__slot_values_repeat1,
    ACTIONS(210), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1416] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(56), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_slot_repeat1,
    ACTIONS(214), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1437] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(57), 1,
      sym_comment,
    ACTIONS(216), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1454] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(58), 1,
      sym_comment,
    ACTIONS(89), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1471] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(220), 1,
      anon_sym_SLASH,
    STATE(59), 2,
      sym_comment,
      aux_sym_slot_repeat1,
    ACTIONS(218), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1490] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(60), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1511] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      sym_term_sub_node,
    STATE(61), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1531] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    ACTIONS(232), 1,
      aux_sym_slot_value_token1,
    STATE(55), 1,
      sym_slot_value,
    STATE(62), 1,
      sym_comment,
    STATE(76), 1,
      sym__slot_values,
  [1553] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(119), 1,
      sym_consider_option_sub_node,
  [1575] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_answer_sub_node,
    STATE(64), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1595] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(243), 1,
      anon_sym_terms,
    ACTIONS(245), 1,
      anon_sym_answers,
    STATE(65), 1,
      sym_comment,
    STATE(191), 1,
      sym_node_id,
  [1617] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(129), 1,
      sym_term_sub_node,
  [1639] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(126), 1,
      sym_answer_sub_node,
  [1661] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(129), 1,
      sym_term_sub_node,
  [1683] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(69), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1699] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(70), 1,
      sym_comment,
    ACTIONS(255), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1715] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_consider_option_sub_node,
    STATE(71), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1735] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(72), 1,
      sym_comment,
    STATE(129), 1,
      sym_term_sub_node,
  [1757] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(129), 1,
      sym_term_sub_node,
  [1779] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(266), 1,
      anon_sym_text,
    STATE(74), 1,
      sym_comment,
    STATE(198), 1,
      sym_node_id,
  [1798] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(75), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1813] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(76), 1,
      sym_comment,
    ACTIONS(270), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1828] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_comment,
    STATE(181), 1,
      sym_else_sub_node,
  [1847] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(276), 1,
      aux_sym_decision_graph_name_token1,
    STATE(78), 1,
      sym_comment,
    STATE(200), 1,
      sym__node_id_value,
    STATE(208), 1,
      sym_decision_graph_name,
  [1866] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_comment,
    STATE(158), 1,
      sym_else_sub_node,
  [1885] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_comment,
    STATE(178), 1,
      sym_else_sub_node,
  [1904] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(81), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1919] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(82), 1,
      sym_comment,
    STATE(126), 1,
      sym_answer_sub_node,
  [1938] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(234), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(119), 1,
      sym_consider_option_sub_node,
  [1957] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_comment,
    STATE(95), 1,
      aux_sym__slot_values_repeat1,
  [1976] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(54), 1,
      sym__slot_identifier,
    STATE(85), 1,
      sym_comment,
    STATE(168), 1,
      sym_slot,
  [1995] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(276), 1,
      aux_sym_decision_graph_name_token1,
    STATE(86), 1,
      sym_comment,
    STATE(150), 1,
      sym__node_id_value,
    STATE(151), 1,
      sym_decision_graph_name,
  [2014] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_comment,
    STATE(97), 1,
      sym_terms_sub_node,
    STATE(189), 1,
      sym_answers_sub_node,
  [2033] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(88), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2048] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_comment,
    STATE(101), 1,
      sym_terms_sub_node,
    STATE(218), 1,
      sym_answers_sub_node,
  [2067] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(288), 1,
      anon_sym_title,
    STATE(90), 1,
      sym_comment,
    STATE(226), 1,
      sym_node_id,
  [2086] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym_comment,
    STATE(229), 1,
      sym_else_sub_node,
  [2105] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(92), 1,
      sym_comment,
    ACTIONS(292), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2120] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(93), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2135] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(94), 1,
      sym_comment,
    ACTIONS(296), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2150] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(95), 1,
      sym_comment,
  [2169] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_consider_options_sub_node,
    STATE(96), 1,
      sym_comment,
  [2185] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_comment,
    STATE(179), 1,
      sym_answers_sub_node,
  [2201] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    ACTIONS(306), 1,
      sym_free_text,
    STATE(98), 1,
      sym_comment,
  [2217] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(99), 1,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2231] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(100), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2245] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_comment,
    STATE(189), 1,
      sym_answers_sub_node,
  [2261] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(102), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2275] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(314), 1,
      aux_sym_decision_graph_name_token1,
    STATE(103), 1,
      sym_comment,
    STATE(188), 1,
      sym__node_id_value,
  [2291] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(104), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2305] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(105), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2319] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(320), 1,
      anon_sym_COLON,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_comment,
  [2335] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(13), 1,
      sym_node_id,
    STATE(107), 1,
      sym_comment,
  [2351] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(324), 1,
      sym_free_text,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(108), 1,
      sym_comment,
  [2367] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(109), 1,
      sym_comment,
    ACTIONS(328), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2381] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(330), 1,
      anon_sym_LBRACK,
    ACTIONS(332), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(110), 1,
      sym_comment,
  [2397] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(111), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2411] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(232), 1,
      aux_sym_slot_value_token1,
    STATE(88), 1,
      sym_slot_value,
    STATE(112), 1,
      sym_comment,
  [2427] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(69), 1,
      sym__slot_identifier,
    STATE(113), 1,
      sym_comment,
  [2443] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(336), 1,
      sym_free_text,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(114), 1,
      sym_comment,
  [2459] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(314), 1,
      aux_sym_decision_graph_name_token1,
    STATE(115), 1,
      sym_comment,
    STATE(182), 1,
      sym__node_id_value,
  [2475] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(116), 1,
      sym_comment,
  [2491] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(117), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2505] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_consider_options_sub_node,
    STATE(118), 1,
      sym_comment,
  [2521] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(119), 1,
      sym_comment,
    ACTIONS(346), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2535] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_slot_sub_node,
    STATE(120), 1,
      sym_comment,
  [2551] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(232), 1,
      aux_sym_slot_value_token1,
    STATE(121), 1,
      sym_comment,
    STATE(219), 1,
      sym_slot_value,
  [2567] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    STATE(122), 1,
      sym_comment,
  [2583] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(352), 1,
      sym_free_text,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_comment,
  [2599] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(356), 1,
      aux_sym_decision_graph_name_token1,
    STATE(124), 1,
      sym_comment,
    STATE(169), 1,
      sym_decision_graph_name,
  [2615] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    ACTIONS(360), 1,
      sym_free_text,
    STATE(125), 1,
      sym_comment,
  [2631] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(126), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2645] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      sym_free_text,
    STATE(127), 1,
      sym_comment,
  [2661] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(89), 1,
      sym_text_sub_node,
    STATE(128), 1,
      sym_comment,
  [2677] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(129), 1,
      sym_comment,
    ACTIONS(370), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2691] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(368), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_text_sub_node,
    STATE(130), 1,
      sym_comment,
  [2707] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(372), 1,
      anon_sym_COLON,
    ACTIONS(374), 1,
      sym_free_text,
    STATE(131), 1,
      sym_comment,
  [2723] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    ACTIONS(378), 1,
      sym_free_text,
    STATE(132), 1,
      sym_comment,
  [2739] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    ACTIONS(382), 1,
      anon_sym_LT,
    STATE(133), 1,
      sym_comment,
  [2755] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(348), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_slot_sub_node,
    STATE(134), 1,
      sym_comment,
  [2771] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(232), 1,
      aux_sym_slot_value_token1,
    STATE(58), 1,
      sym_slot_value,
    STATE(135), 1,
      sym_comment,
  [2787] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(384), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(386), 1,
      anon_sym_EQ,
    STATE(136), 1,
      sym_comment,
  [2803] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_when_answer_sub_node,
    STATE(137), 1,
      sym_comment,
  [2819] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(322), 1,
      anon_sym_SEMI,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      sym_comment,
  [2835] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(392), 1,
      sym_free_text,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(139), 1,
      sym_comment,
  [2851] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(396), 1,
      sym_free_text,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym_comment,
  [2867] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(400), 1,
      anon_sym_LBRACK,
    ACTIONS(402), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(141), 1,
      sym_comment,
  [2883] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    ACTIONS(406), 1,
      sym_free_text,
    STATE(142), 1,
      sym_comment,
  [2899] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(232), 1,
      aux_sym_slot_value_token1,
    STATE(84), 1,
      sym_slot_value,
    STATE(143), 1,
      sym_comment,
  [2915] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(314), 1,
      aux_sym_decision_graph_name_token1,
    STATE(144), 1,
      sym_comment,
    STATE(180), 1,
      sym__node_id_value,
  [2931] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(408), 1,
      sym_free_text,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      sym_comment,
  [2947] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_when_answer_sub_node,
    STATE(146), 1,
      sym_comment,
  [2963] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    ACTIONS(412), 1,
      anon_sym_GT,
    STATE(147), 1,
      sym_comment,
  [2979] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(414), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_comment,
  [2992] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(416), 1,
      anon_sym_COLON,
    STATE(149), 1,
      sym_comment,
  [3005] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_comment,
  [3018] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(420), 1,
      anon_sym_GT,
    STATE(151), 1,
      sym_comment,
  [3031] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_comment,
  [3044] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(422), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(153), 1,
      sym_comment,
  [3057] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(424), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_comment,
  [3070] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(426), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_comment,
  [3083] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_comment,
  [3096] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_comment,
  [3109] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      sym_comment,
  [3122] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(434), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
  [3135] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(436), 1,
      anon_sym_COLON,
    STATE(160), 1,
      sym_comment,
  [3148] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(438), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_comment,
  [3161] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_comment,
  [3174] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_comment,
  [3187] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(442), 1,
      anon_sym_COLON,
    STATE(164), 1,
      sym_comment,
  [3200] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(444), 1,
      anon_sym_COLON,
    STATE(165), 1,
      sym_comment,
  [3213] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(446), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym_comment,
  [3226] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(448), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_comment,
  [3239] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(450), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_comment,
  [3252] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(452), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_comment,
  [3265] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(412), 1,
      anon_sym_COLON,
    STATE(170), 1,
      sym_comment,
  [3278] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_comment,
  [3291] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(456), 1,
      anon_sym_COLON,
    STATE(172), 1,
      sym_comment,
  [3304] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      sym_comment,
  [3317] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_comment,
  [3330] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym_comment,
  [3343] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym_comment,
  [3356] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(462), 1,
      anon_sym_COLON,
    STATE(177), 1,
      sym_comment,
  [3369] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      sym_comment,
  [3382] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_comment,
  [3395] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      sym_comment,
  [3408] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym_comment,
  [3421] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(470), 1,
      anon_sym_LT,
    STATE(182), 1,
      sym_comment,
  [3434] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(472), 1,
      sym_file_path,
    STATE(183), 1,
      sym_comment,
  [3447] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym_comment,
  [3460] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      sym_comment,
  [3473] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(478), 1,
      anon_sym_COLON,
    STATE(186), 1,
      sym_comment,
  [3486] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_comment,
  [3499] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym_comment,
  [3512] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym_comment,
  [3525] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(245), 1,
      anon_sym_answers,
    STATE(190), 1,
      sym_comment,
  [3538] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(486), 1,
      anon_sym_terms,
    STATE(191), 1,
      sym_comment,
  [3551] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(488), 1,
      anon_sym_COLON,
    STATE(192), 1,
      sym_comment,
  [3564] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(490), 1,
      anon_sym_slot,
    STATE(193), 1,
      sym_comment,
  [3577] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(492), 1,
      anon_sym_LBRACE,
    STATE(194), 1,
      sym_comment,
  [3590] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(494), 1,
      anon_sym_COLON,
    STATE(195), 1,
      sym_comment,
  [3603] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      sym_comment,
  [3616] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(498), 1,
      anon_sym_COLON,
    STATE(197), 1,
      sym_comment,
  [3629] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(500), 1,
      anon_sym_text,
    STATE(198), 1,
      sym_comment,
  [3642] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      sym_comment,
  [3655] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      sym_comment,
  [3668] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_comment,
  [3681] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(508), 1,
      anon_sym_COLON,
    STATE(202), 1,
      sym_comment,
  [3694] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_comment,
  [3707] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_comment,
  [3720] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(514), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_comment,
  [3733] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(516), 1,
      anon_sym_COLON,
    STATE(206), 1,
      sym_comment,
  [3746] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(518), 1,
      anon_sym_COLON,
    STATE(207), 1,
      sym_comment,
  [3759] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(520), 1,
      anon_sym_GT,
    STATE(208), 1,
      sym_comment,
  [3772] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(522), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym_comment,
  [3785] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(210), 1,
      sym_comment,
  [3798] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(526), 1,
      anon_sym_COLON,
    STATE(211), 1,
      sym_comment,
  [3811] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym_comment,
  [3824] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(530), 1,
      anon_sym_COLON,
    STATE(213), 1,
      sym_comment,
  [3837] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(532), 1,
      anon_sym_COLON,
    STATE(214), 1,
      sym_comment,
  [3850] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(534), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_comment,
  [3863] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym_comment,
  [3876] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(538), 1,
      anon_sym_COLON,
    STATE(217), 1,
      sym_comment,
  [3889] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      sym_comment,
  [3902] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(542), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym_comment,
  [3915] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      sym_comment,
  [3928] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    STATE(221), 1,
      sym_comment,
  [3941] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(548), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym_comment,
  [3954] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(550), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
  [3967] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_comment,
  [3980] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    STATE(225), 1,
      sym_comment,
  [3993] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(554), 1,
      anon_sym_title,
    STATE(226), 1,
      sym_comment,
  [4006] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(556), 1,
      anon_sym_COLON,
    STATE(227), 1,
      sym_comment,
  [4019] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_comment,
  [4032] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym_comment,
  [4045] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
    STATE(230), 1,
      sym_comment,
  [4058] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(562), 1,
      anon_sym_COLON,
    STATE(231), 1,
      sym_comment,
  [4071] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(564), 1,
      anon_sym_else,
    STATE(232), 1,
      sym_comment,
  [4084] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
  [4097] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(568), 1,
      anon_sym_options,
    STATE(234), 1,
      sym_comment,
  [4110] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_comment,
  [4123] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_comment,
  [4136] = 1,
    ACTIONS(574), 1,
      aux_sym_comment_token1,
  [4140] = 1,
    ACTIONS(576), 1,
      ts_builtin_sym_end,
  [4144] = 1,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 289,
  [SMALL_STATE(10)] = 328,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 406,
  [SMALL_STATE(13)] = 445,
  [SMALL_STATE(14)] = 484,
  [SMALL_STATE(15)] = 513,
  [SMALL_STATE(16)] = 562,
  [SMALL_STATE(17)] = 602,
  [SMALL_STATE(18)] = 622,
  [SMALL_STATE(19)] = 650,
  [SMALL_STATE(20)] = 670,
  [SMALL_STATE(21)] = 690,
  [SMALL_STATE(22)] = 710,
  [SMALL_STATE(23)] = 730,
  [SMALL_STATE(24)] = 750,
  [SMALL_STATE(25)] = 770,
  [SMALL_STATE(26)] = 798,
  [SMALL_STATE(27)] = 818,
  [SMALL_STATE(28)] = 838,
  [SMALL_STATE(29)] = 858,
  [SMALL_STATE(30)] = 878,
  [SMALL_STATE(31)] = 898,
  [SMALL_STATE(32)] = 926,
  [SMALL_STATE(33)] = 946,
  [SMALL_STATE(34)] = 966,
  [SMALL_STATE(35)] = 986,
  [SMALL_STATE(36)] = 1006,
  [SMALL_STATE(37)] = 1026,
  [SMALL_STATE(38)] = 1046,
  [SMALL_STATE(39)] = 1074,
  [SMALL_STATE(40)] = 1094,
  [SMALL_STATE(41)] = 1114,
  [SMALL_STATE(42)] = 1134,
  [SMALL_STATE(43)] = 1154,
  [SMALL_STATE(44)] = 1174,
  [SMALL_STATE(45)] = 1194,
  [SMALL_STATE(46)] = 1214,
  [SMALL_STATE(47)] = 1234,
  [SMALL_STATE(48)] = 1254,
  [SMALL_STATE(49)] = 1274,
  [SMALL_STATE(50)] = 1294,
  [SMALL_STATE(51)] = 1314,
  [SMALL_STATE(52)] = 1334,
  [SMALL_STATE(53)] = 1354,
  [SMALL_STATE(54)] = 1374,
  [SMALL_STATE(55)] = 1395,
  [SMALL_STATE(56)] = 1416,
  [SMALL_STATE(57)] = 1437,
  [SMALL_STATE(58)] = 1454,
  [SMALL_STATE(59)] = 1471,
  [SMALL_STATE(60)] = 1490,
  [SMALL_STATE(61)] = 1511,
  [SMALL_STATE(62)] = 1531,
  [SMALL_STATE(63)] = 1553,
  [SMALL_STATE(64)] = 1575,
  [SMALL_STATE(65)] = 1595,
  [SMALL_STATE(66)] = 1617,
  [SMALL_STATE(67)] = 1639,
  [SMALL_STATE(68)] = 1661,
  [SMALL_STATE(69)] = 1683,
  [SMALL_STATE(70)] = 1699,
  [SMALL_STATE(71)] = 1715,
  [SMALL_STATE(72)] = 1735,
  [SMALL_STATE(73)] = 1757,
  [SMALL_STATE(74)] = 1779,
  [SMALL_STATE(75)] = 1798,
  [SMALL_STATE(76)] = 1813,
  [SMALL_STATE(77)] = 1828,
  [SMALL_STATE(78)] = 1847,
  [SMALL_STATE(79)] = 1866,
  [SMALL_STATE(80)] = 1885,
  [SMALL_STATE(81)] = 1904,
  [SMALL_STATE(82)] = 1919,
  [SMALL_STATE(83)] = 1938,
  [SMALL_STATE(84)] = 1957,
  [SMALL_STATE(85)] = 1976,
  [SMALL_STATE(86)] = 1995,
  [SMALL_STATE(87)] = 2014,
  [SMALL_STATE(88)] = 2033,
  [SMALL_STATE(89)] = 2048,
  [SMALL_STATE(90)] = 2067,
  [SMALL_STATE(91)] = 2086,
  [SMALL_STATE(92)] = 2105,
  [SMALL_STATE(93)] = 2120,
  [SMALL_STATE(94)] = 2135,
  [SMALL_STATE(95)] = 2150,
  [SMALL_STATE(96)] = 2169,
  [SMALL_STATE(97)] = 2185,
  [SMALL_STATE(98)] = 2201,
  [SMALL_STATE(99)] = 2217,
  [SMALL_STATE(100)] = 2231,
  [SMALL_STATE(101)] = 2245,
  [SMALL_STATE(102)] = 2261,
  [SMALL_STATE(103)] = 2275,
  [SMALL_STATE(104)] = 2291,
  [SMALL_STATE(105)] = 2305,
  [SMALL_STATE(106)] = 2319,
  [SMALL_STATE(107)] = 2335,
  [SMALL_STATE(108)] = 2351,
  [SMALL_STATE(109)] = 2367,
  [SMALL_STATE(110)] = 2381,
  [SMALL_STATE(111)] = 2397,
  [SMALL_STATE(112)] = 2411,
  [SMALL_STATE(113)] = 2427,
  [SMALL_STATE(114)] = 2443,
  [SMALL_STATE(115)] = 2459,
  [SMALL_STATE(116)] = 2475,
  [SMALL_STATE(117)] = 2491,
  [SMALL_STATE(118)] = 2505,
  [SMALL_STATE(119)] = 2521,
  [SMALL_STATE(120)] = 2535,
  [SMALL_STATE(121)] = 2551,
  [SMALL_STATE(122)] = 2567,
  [SMALL_STATE(123)] = 2583,
  [SMALL_STATE(124)] = 2599,
  [SMALL_STATE(125)] = 2615,
  [SMALL_STATE(126)] = 2631,
  [SMALL_STATE(127)] = 2645,
  [SMALL_STATE(128)] = 2661,
  [SMALL_STATE(129)] = 2677,
  [SMALL_STATE(130)] = 2691,
  [SMALL_STATE(131)] = 2707,
  [SMALL_STATE(132)] = 2723,
  [SMALL_STATE(133)] = 2739,
  [SMALL_STATE(134)] = 2755,
  [SMALL_STATE(135)] = 2771,
  [SMALL_STATE(136)] = 2787,
  [SMALL_STATE(137)] = 2803,
  [SMALL_STATE(138)] = 2819,
  [SMALL_STATE(139)] = 2835,
  [SMALL_STATE(140)] = 2851,
  [SMALL_STATE(141)] = 2867,
  [SMALL_STATE(142)] = 2883,
  [SMALL_STATE(143)] = 2899,
  [SMALL_STATE(144)] = 2915,
  [SMALL_STATE(145)] = 2931,
  [SMALL_STATE(146)] = 2947,
  [SMALL_STATE(147)] = 2963,
  [SMALL_STATE(148)] = 2979,
  [SMALL_STATE(149)] = 2992,
  [SMALL_STATE(150)] = 3005,
  [SMALL_STATE(151)] = 3018,
  [SMALL_STATE(152)] = 3031,
  [SMALL_STATE(153)] = 3044,
  [SMALL_STATE(154)] = 3057,
  [SMALL_STATE(155)] = 3070,
  [SMALL_STATE(156)] = 3083,
  [SMALL_STATE(157)] = 3096,
  [SMALL_STATE(158)] = 3109,
  [SMALL_STATE(159)] = 3122,
  [SMALL_STATE(160)] = 3135,
  [SMALL_STATE(161)] = 3148,
  [SMALL_STATE(162)] = 3161,
  [SMALL_STATE(163)] = 3174,
  [SMALL_STATE(164)] = 3187,
  [SMALL_STATE(165)] = 3200,
  [SMALL_STATE(166)] = 3213,
  [SMALL_STATE(167)] = 3226,
  [SMALL_STATE(168)] = 3239,
  [SMALL_STATE(169)] = 3252,
  [SMALL_STATE(170)] = 3265,
  [SMALL_STATE(171)] = 3278,
  [SMALL_STATE(172)] = 3291,
  [SMALL_STATE(173)] = 3304,
  [SMALL_STATE(174)] = 3317,
  [SMALL_STATE(175)] = 3330,
  [SMALL_STATE(176)] = 3343,
  [SMALL_STATE(177)] = 3356,
  [SMALL_STATE(178)] = 3369,
  [SMALL_STATE(179)] = 3382,
  [SMALL_STATE(180)] = 3395,
  [SMALL_STATE(181)] = 3408,
  [SMALL_STATE(182)] = 3421,
  [SMALL_STATE(183)] = 3434,
  [SMALL_STATE(184)] = 3447,
  [SMALL_STATE(185)] = 3460,
  [SMALL_STATE(186)] = 3473,
  [SMALL_STATE(187)] = 3486,
  [SMALL_STATE(188)] = 3499,
  [SMALL_STATE(189)] = 3512,
  [SMALL_STATE(190)] = 3525,
  [SMALL_STATE(191)] = 3538,
  [SMALL_STATE(192)] = 3551,
  [SMALL_STATE(193)] = 3564,
  [SMALL_STATE(194)] = 3577,
  [SMALL_STATE(195)] = 3590,
  [SMALL_STATE(196)] = 3603,
  [SMALL_STATE(197)] = 3616,
  [SMALL_STATE(198)] = 3629,
  [SMALL_STATE(199)] = 3642,
  [SMALL_STATE(200)] = 3655,
  [SMALL_STATE(201)] = 3668,
  [SMALL_STATE(202)] = 3681,
  [SMALL_STATE(203)] = 3694,
  [SMALL_STATE(204)] = 3707,
  [SMALL_STATE(205)] = 3720,
  [SMALL_STATE(206)] = 3733,
  [SMALL_STATE(207)] = 3746,
  [SMALL_STATE(208)] = 3759,
  [SMALL_STATE(209)] = 3772,
  [SMALL_STATE(210)] = 3785,
  [SMALL_STATE(211)] = 3798,
  [SMALL_STATE(212)] = 3811,
  [SMALL_STATE(213)] = 3824,
  [SMALL_STATE(214)] = 3837,
  [SMALL_STATE(215)] = 3850,
  [SMALL_STATE(216)] = 3863,
  [SMALL_STATE(217)] = 3876,
  [SMALL_STATE(218)] = 3889,
  [SMALL_STATE(219)] = 3902,
  [SMALL_STATE(220)] = 3915,
  [SMALL_STATE(221)] = 3928,
  [SMALL_STATE(222)] = 3941,
  [SMALL_STATE(223)] = 3954,
  [SMALL_STATE(224)] = 3967,
  [SMALL_STATE(225)] = 3980,
  [SMALL_STATE(226)] = 3993,
  [SMALL_STATE(227)] = 4006,
  [SMALL_STATE(228)] = 4019,
  [SMALL_STATE(229)] = 4032,
  [SMALL_STATE(230)] = 4045,
  [SMALL_STATE(231)] = 4058,
  [SMALL_STATE(232)] = 4071,
  [SMALL_STATE(233)] = 4084,
  [SMALL_STATE(234)] = 4097,
  [SMALL_STATE(235)] = 4110,
  [SMALL_STATE(236)] = 4123,
  [SMALL_STATE(237)] = 4136,
  [SMALL_STATE(238)] = 4140,
  [SMALL_STATE(239)] = 4144,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(237),
  [5] = {.count = 1, .reusable = true}, SHIFT(239),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(107),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(107),
  [21] = {.count = 1, .reusable = true}, SHIFT(90),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [27] = {.count = 1, .reusable = true}, SHIFT(217),
  [29] = {.count = 1, .reusable = true}, SHIFT(214),
  [31] = {.count = 1, .reusable = true}, SHIFT(213),
  [33] = {.count = 1, .reusable = true}, SHIFT(115),
  [35] = {.count = 1, .reusable = true}, SHIFT(207),
  [37] = {.count = 1, .reusable = true}, SHIFT(206),
  [39] = {.count = 1, .reusable = true}, SHIFT(205),
  [41] = {.count = 1, .reusable = true}, SHIFT(204),
  [43] = {.count = 1, .reusable = true}, SHIFT(203),
  [45] = {.count = 1, .reusable = true}, SHIFT(202),
  [47] = {.count = 1, .reusable = true}, SHIFT(197),
  [49] = {.count = 1, .reusable = true}, SHIFT(124),
  [51] = {.count = 1, .reusable = true}, SHIFT(148),
  [53] = {.count = 1, .reusable = true}, SHIFT(167),
  [55] = {.count = 1, .reusable = true}, SHIFT(165),
  [57] = {.count = 1, .reusable = true}, SHIFT(164),
  [59] = {.count = 1, .reusable = true}, SHIFT(161),
  [61] = {.count = 1, .reusable = true}, SHIFT(160),
  [63] = {.count = 1, .reusable = true}, SHIFT(157),
  [65] = {.count = 1, .reusable = true}, SHIFT(156),
  [67] = {.count = 1, .reusable = true}, SHIFT(155),
  [69] = {.count = 1, .reusable = true}, SHIFT(154),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [75] = {.count = 1, .reusable = true}, SHIFT(70),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 8),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 8),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(135),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 4),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 4),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 7),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 7),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [176] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 1),
  [208] = {.count = 1, .reusable = true}, SHIFT(113),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [212] = {.count = 1, .reusable = true}, SHIFT(135),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 2),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [218] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2),
  [220] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2), SHIFT_REPEAT(113),
  [223] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [225] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(131),
  [228] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [230] = {.count = 1, .reusable = true}, SHIFT(143),
  [232] = {.count = 1, .reusable = true}, SHIFT(57),
  [234] = {.count = 1, .reusable = true}, SHIFT(121),
  [236] = {.count = 1, .reusable = true}, SHIFT(111),
  [238] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(127),
  [241] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [243] = {.count = 1, .reusable = true}, SHIFT(149),
  [245] = {.count = 1, .reusable = true}, SHIFT(192),
  [247] = {.count = 1, .reusable = true}, SHIFT(131),
  [249] = {.count = 1, .reusable = true}, SHIFT(212),
  [251] = {.count = 1, .reusable = true}, SHIFT(127),
  [253] = {.count = 1, .reusable = true}, SHIFT(216),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym__slot_identifier, 1),
  [257] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(121),
  [260] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [262] = {.count = 1, .reusable = true}, SHIFT(230),
  [264] = {.count = 1, .reusable = true}, SHIFT(187),
  [266] = {.count = 1, .reusable = true}, SHIFT(172),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [272] = {.count = 1, .reusable = true}, SHIFT(37),
  [274] = {.count = 1, .reusable = true}, SHIFT(232),
  [276] = {.count = 1, .reusable = true}, SHIFT(147),
  [278] = {.count = 1, .reusable = true}, SHIFT(48),
  [280] = {.count = 1, .reusable = true}, SHIFT(43),
  [282] = {.count = 1, .reusable = true}, SHIFT(94),
  [284] = {.count = 1, .reusable = true}, SHIFT(65),
  [286] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [288] = {.count = 1, .reusable = true}, SHIFT(227),
  [290] = {.count = 1, .reusable = true}, SHIFT(27),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [298] = {.count = 1, .reusable = true}, SHIFT(93),
  [300] = {.count = 1, .reusable = true}, SHIFT(234),
  [302] = {.count = 1, .reusable = true}, SHIFT(190),
  [304] = {.count = 1, .reusable = true}, SHIFT(33),
  [306] = {.count = 1, .reusable = true}, SHIFT(196),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [314] = {.count = 1, .reusable = true}, SHIFT(133),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [320] = {.count = 1, .reusable = true}, SHIFT(10),
  [322] = {.count = 1, .reusable = true}, SHIFT(25),
  [324] = {.count = 1, .reusable = true}, SHIFT(233),
  [326] = {.count = 1, .reusable = true}, SHIFT(105),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [336] = {.count = 1, .reusable = true}, SHIFT(225),
  [338] = {.count = 1, .reusable = true}, SHIFT(109),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [346] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [348] = {.count = 1, .reusable = true}, SHIFT(193),
  [350] = {.count = 1, .reusable = true}, SHIFT(44),
  [352] = {.count = 1, .reusable = true}, SHIFT(162),
  [354] = {.count = 1, .reusable = true}, SHIFT(163),
  [356] = {.count = 1, .reusable = true}, SHIFT(170),
  [358] = {.count = 1, .reusable = true}, SHIFT(52),
  [360] = {.count = 1, .reusable = true}, SHIFT(152),
  [362] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [364] = {.count = 1, .reusable = true}, SHIFT(12),
  [366] = {.count = 1, .reusable = true}, SHIFT(215),
  [368] = {.count = 1, .reusable = true}, SHIFT(74),
  [370] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [372] = {.count = 1, .reusable = true}, SHIFT(114),
  [374] = {.count = 1, .reusable = true}, SHIFT(211),
  [376] = {.count = 1, .reusable = true}, SHIFT(28),
  [378] = {.count = 1, .reusable = true}, SHIFT(210),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym__node_id_value, 1),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym__node_id_value, 1),
  [384] = {.count = 1, .reusable = true}, SHIFT(62),
  [386] = {.count = 1, .reusable = true}, SHIFT(112),
  [388] = {.count = 1, .reusable = true}, SHIFT(18),
  [390] = {.count = 1, .reusable = true}, SHIFT(26),
  [392] = {.count = 1, .reusable = true}, SHIFT(173),
  [394] = {.count = 1, .reusable = true}, SHIFT(141),
  [396] = {.count = 1, .reusable = true}, SHIFT(201),
  [398] = {.count = 1, .reusable = true}, SHIFT(116),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [404] = {.count = 1, .reusable = true}, SHIFT(50),
  [406] = {.count = 1, .reusable = true}, SHIFT(175),
  [408] = {.count = 1, .reusable = true}, SHIFT(185),
  [410] = {.count = 1, .reusable = true}, SHIFT(184),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [414] = {.count = 1, .reusable = true}, SHIFT(132),
  [416] = {.count = 1, .reusable = true}, SHIFT(73),
  [418] = {.count = 1, .reusable = true}, SHIFT(24),
  [420] = {.count = 1, .reusable = true}, SHIFT(103),
  [422] = {.count = 1, .reusable = true}, SHIFT(29),
  [424] = {.count = 1, .reusable = true}, SHIFT(31),
  [426] = {.count = 1, .reusable = true}, SHIFT(98),
  [428] = {.count = 1, .reusable = true}, SHIFT(34),
  [430] = {.count = 1, .reusable = true}, SHIFT(39),
  [432] = {.count = 1, .reusable = true}, SHIFT(32),
  [434] = {.count = 1, .reusable = true}, SHIFT(30),
  [436] = {.count = 1, .reusable = true}, SHIFT(4),
  [438] = {.count = 1, .reusable = true}, SHIFT(146),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [442] = {.count = 1, .reusable = true}, SHIFT(120),
  [444] = {.count = 1, .reusable = true}, SHIFT(78),
  [446] = {.count = 1, .reusable = true}, SHIFT(66),
  [448] = {.count = 1, .reusable = true}, SHIFT(130),
  [450] = {.count = 1, .reusable = true}, SHIFT(194),
  [452] = {.count = 1, .reusable = true}, SHIFT(183),
  [454] = {.count = 1, .reusable = true}, SHIFT(117),
  [456] = {.count = 1, .reusable = true}, SHIFT(123),
  [458] = {.count = 1, .reusable = true}, SHIFT(23),
  [460] = {.count = 1, .reusable = true}, SHIFT(140),
  [462] = {.count = 1, .reusable = true}, SHIFT(6),
  [464] = {.count = 1, .reusable = true}, SHIFT(21),
  [466] = {.count = 1, .reusable = true}, SHIFT(20),
  [468] = {.count = 1, .reusable = true}, SHIFT(19),
  [470] = {.count = 1, .reusable = false}, SHIFT(14),
  [472] = {.count = 1, .reusable = true}, SHIFT(220),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [476] = {.count = 1, .reusable = true}, SHIFT(209),
  [478] = {.count = 1, .reusable = true}, SHIFT(83),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [482] = {.count = 1, .reusable = true}, SHIFT(40),
  [484] = {.count = 1, .reusable = true}, SHIFT(41),
  [486] = {.count = 1, .reusable = true}, SHIFT(166),
  [488] = {.count = 1, .reusable = true}, SHIFT(82),
  [490] = {.count = 1, .reusable = true}, SHIFT(231),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [494] = {.count = 1, .reusable = true}, SHIFT(145),
  [496] = {.count = 1, .reusable = true}, SHIFT(45),
  [498] = {.count = 1, .reusable = true}, SHIFT(38),
  [500] = {.count = 1, .reusable = true}, SHIFT(195),
  [502] = {.count = 1, .reusable = true}, SHIFT(222),
  [504] = {.count = 1, .reusable = true}, SHIFT(47),
  [506] = {.count = 1, .reusable = true}, SHIFT(110),
  [508] = {.count = 1, .reusable = true}, SHIFT(142),
  [510] = {.count = 1, .reusable = true}, SHIFT(36),
  [512] = {.count = 1, .reusable = true}, SHIFT(35),
  [514] = {.count = 1, .reusable = true}, SHIFT(5),
  [516] = {.count = 1, .reusable = true}, SHIFT(137),
  [518] = {.count = 1, .reusable = true}, SHIFT(134),
  [520] = {.count = 1, .reusable = true}, SHIFT(144),
  [522] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [524] = {.count = 1, .reusable = true}, SHIFT(17),
  [526] = {.count = 1, .reusable = true}, SHIFT(108),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [530] = {.count = 1, .reusable = true}, SHIFT(86),
  [532] = {.count = 1, .reusable = true}, SHIFT(128),
  [534] = {.count = 1, .reusable = true}, SHIFT(8),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [538] = {.count = 1, .reusable = true}, SHIFT(125),
  [540] = {.count = 1, .reusable = true}, SHIFT(42),
  [542] = {.count = 1, .reusable = true}, SHIFT(7),
  [544] = {.count = 1, .reusable = true}, SHIFT(49),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [550] = {.count = 1, .reusable = true}, SHIFT(53),
  [552] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [554] = {.count = 1, .reusable = true}, SHIFT(176),
  [556] = {.count = 1, .reusable = true}, SHIFT(139),
  [558] = {.count = 1, .reusable = true}, SHIFT(104),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [562] = {.count = 1, .reusable = true}, SHIFT(85),
  [564] = {.count = 1, .reusable = true}, SHIFT(177),
  [566] = {.count = 1, .reusable = true}, SHIFT(102),
  [568] = {.count = 1, .reusable = true}, SHIFT(186),
  [570] = {.count = 1, .reusable = true}, SHIFT(100),
  [572] = {.count = 1, .reusable = true}, SHIFT(99),
  [574] = {.count = 1, .reusable = true}, SHIFT(238),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [578] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
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
