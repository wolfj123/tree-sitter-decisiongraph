#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 243
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_LBRACK = 1,
  anon_sym_todo = 2,
  anon_sym_COLON = 3,
  anon_sym_RBRACK = 4,
  aux_sym_free_text_token1 = 5,
  anon_sym_ask = 6,
  anon_sym_LBRACE = 7,
  anon_sym_text = 8,
  anon_sym_RBRACE = 9,
  anon_sym_terms = 10,
  anon_sym_answers = 11,
  anon_sym_call = 12,
  anon_sym_GT = 13,
  anon_sym_consider = 14,
  anon_sym_slot = 15,
  anon_sym_options = 16,
  anon_sym_else = 17,
  anon_sym_when = 18,
  anon_sym_section = 19,
  anon_sym_title = 20,
  anon_sym_continue = 21,
  anon_sym_LBRACK_DASH_DASH = 22,
  anon_sym_DASH_DASH_RBRACK = 23,
  anon_sym_end = 24,
  anon_sym_reject = 25,
  anon_sym_set = 26,
  anon_sym_SEMI = 27,
  anon_sym_PLUS_EQ = 28,
  anon_sym_EQ = 29,
  anon_sym_SLASH = 30,
  anon_sym_COMMA = 31,
  aux_sym_slot_value_token1 = 32,
  anon_sym_POUNDimport = 33,
  sym_file_path = 34,
  aux_sym_decision_graph_name_token1 = 35,
  anon_sym_LT = 36,
  anon_sym_LT_DASH_DASH = 37,
  aux_sym_comment_token1 = 38,
  sym__comment_block = 39,
  sym_source_file = 40,
  sym_decision_graph = 41,
  sym__top_level_node = 42,
  sym_todo_node = 43,
  sym_free_text = 44,
  sym_free_text_no_end_bracket = 45,
  sym_free_text_no_colon = 46,
  sym_ask_node = 47,
  sym_text_sub_node = 48,
  sym_terms_sub_node = 49,
  sym_term_sub_node = 50,
  sym_answers_sub_node = 51,
  sym_answer_sub_node = 52,
  sym_call_node = 53,
  sym_node_reference = 54,
  sym_consider_node = 55,
  sym_slot_sub_node = 56,
  sym_consider_options_sub_node = 57,
  sym_consider_option_sub_node = 58,
  sym_else_sub_node = 59,
  sym_when_node = 60,
  sym_when_answer_sub_node = 61,
  sym_section_node = 62,
  sym_info_sub_node = 63,
  sym_continue_node = 64,
  sym_part_node = 65,
  sym_end_node = 66,
  sym_reject_node = 67,
  sym_set_node = 68,
  sym_assignment_slot = 69,
  sym_aggregate_assignment_slot = 70,
  sym_atomic_assignment_slot = 71,
  sym_slot_reference = 72,
  sym__slot_values = 73,
  sym_slot_value = 74,
  sym_slot_identifier = 75,
  sym_import_node = 76,
  sym_decision_graph_name = 77,
  sym_node_id = 78,
  sym_node_id_value = 79,
  sym_comment = 80,
  aux_sym_decision_graph_repeat1 = 81,
  aux_sym_terms_sub_node_repeat1 = 82,
  aux_sym_answers_sub_node_repeat1 = 83,
  aux_sym_consider_options_sub_node_repeat1 = 84,
  aux_sym_when_node_repeat1 = 85,
  aux_sym_slot_reference_repeat1 = 86,
  aux_sym__slot_values_repeat1 = 87,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_todo] = "todo",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACK] = "]",
  [aux_sym_free_text_token1] = "free_text_token1",
  [anon_sym_ask] = "ask",
  [anon_sym_LBRACE] = "{",
  [anon_sym_text] = "text",
  [anon_sym_RBRACE] = "}",
  [anon_sym_terms] = "terms",
  [anon_sym_answers] = "answers",
  [anon_sym_call] = "call",
  [anon_sym_GT] = ">",
  [anon_sym_consider] = "consider",
  [anon_sym_slot] = "slot",
  [anon_sym_options] = "options",
  [anon_sym_else] = "else",
  [anon_sym_when] = "when",
  [anon_sym_section] = "section",
  [anon_sym_title] = "title",
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
  [sym_file_path] = "file_path",
  [aux_sym_decision_graph_name_token1] = "decision_graph_name_token1",
  [anon_sym_LT] = "<",
  [anon_sym_LT_DASH_DASH] = "<--",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__comment_block] = "_comment_block",
  [sym_source_file] = "source_file",
  [sym_decision_graph] = "decision_graph",
  [sym__top_level_node] = "_top_level_node",
  [sym_todo_node] = "todo_node",
  [sym_free_text] = "free_text",
  [sym_free_text_no_end_bracket] = "free_text_no_end_bracket",
  [sym_free_text_no_colon] = "free_text_no_colon",
  [sym_ask_node] = "ask_node",
  [sym_text_sub_node] = "text_sub_node",
  [sym_terms_sub_node] = "terms_sub_node",
  [sym_term_sub_node] = "term_sub_node",
  [sym_answers_sub_node] = "answers_sub_node",
  [sym_answer_sub_node] = "answer_sub_node",
  [sym_call_node] = "call_node",
  [sym_node_reference] = "node_reference",
  [sym_consider_node] = "consider_node",
  [sym_slot_sub_node] = "slot_sub_node",
  [sym_consider_options_sub_node] = "consider_options_sub_node",
  [sym_consider_option_sub_node] = "consider_option_sub_node",
  [sym_else_sub_node] = "else_sub_node",
  [sym_when_node] = "when_node",
  [sym_when_answer_sub_node] = "when_answer_sub_node",
  [sym_section_node] = "section_node",
  [sym_info_sub_node] = "info_sub_node",
  [sym_continue_node] = "continue_node",
  [sym_part_node] = "part_node",
  [sym_end_node] = "end_node",
  [sym_reject_node] = "reject_node",
  [sym_set_node] = "set_node",
  [sym_assignment_slot] = "assignment_slot",
  [sym_aggregate_assignment_slot] = "aggregate_assignment_slot",
  [sym_atomic_assignment_slot] = "atomic_assignment_slot",
  [sym_slot_reference] = "slot_reference",
  [sym__slot_values] = "_slot_values",
  [sym_slot_value] = "slot_value",
  [sym_slot_identifier] = "slot_identifier",
  [sym_import_node] = "import_node",
  [sym_decision_graph_name] = "decision_graph_name",
  [sym_node_id] = "node_id",
  [sym_node_id_value] = "node_id_value",
  [sym_comment] = "comment",
  [aux_sym_decision_graph_repeat1] = "decision_graph_repeat1",
  [aux_sym_terms_sub_node_repeat1] = "terms_sub_node_repeat1",
  [aux_sym_answers_sub_node_repeat1] = "answers_sub_node_repeat1",
  [aux_sym_consider_options_sub_node_repeat1] = "consider_options_sub_node_repeat1",
  [aux_sym_when_node_repeat1] = "when_node_repeat1",
  [aux_sym_slot_reference_repeat1] = "slot_reference_repeat1",
  [aux_sym__slot_values_repeat1] = "_slot_values_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_todo] = anon_sym_todo,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_free_text_token1] = aux_sym_free_text_token1,
  [anon_sym_ask] = anon_sym_ask,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_terms] = anon_sym_terms,
  [anon_sym_answers] = anon_sym_answers,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_consider] = anon_sym_consider,
  [anon_sym_slot] = anon_sym_slot,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_section] = anon_sym_section,
  [anon_sym_title] = anon_sym_title,
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
  [sym_file_path] = sym_file_path,
  [aux_sym_decision_graph_name_token1] = aux_sym_decision_graph_name_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__comment_block] = sym__comment_block,
  [sym_source_file] = sym_source_file,
  [sym_decision_graph] = sym_decision_graph,
  [sym__top_level_node] = sym__top_level_node,
  [sym_todo_node] = sym_todo_node,
  [sym_free_text] = sym_free_text,
  [sym_free_text_no_end_bracket] = sym_free_text_no_end_bracket,
  [sym_free_text_no_colon] = sym_free_text_no_colon,
  [sym_ask_node] = sym_ask_node,
  [sym_text_sub_node] = sym_text_sub_node,
  [sym_terms_sub_node] = sym_terms_sub_node,
  [sym_term_sub_node] = sym_term_sub_node,
  [sym_answers_sub_node] = sym_answers_sub_node,
  [sym_answer_sub_node] = sym_answer_sub_node,
  [sym_call_node] = sym_call_node,
  [sym_node_reference] = sym_node_reference,
  [sym_consider_node] = sym_consider_node,
  [sym_slot_sub_node] = sym_slot_sub_node,
  [sym_consider_options_sub_node] = sym_consider_options_sub_node,
  [sym_consider_option_sub_node] = sym_consider_option_sub_node,
  [sym_else_sub_node] = sym_else_sub_node,
  [sym_when_node] = sym_when_node,
  [sym_when_answer_sub_node] = sym_when_answer_sub_node,
  [sym_section_node] = sym_section_node,
  [sym_info_sub_node] = sym_info_sub_node,
  [sym_continue_node] = sym_continue_node,
  [sym_part_node] = sym_part_node,
  [sym_end_node] = sym_end_node,
  [sym_reject_node] = sym_reject_node,
  [sym_set_node] = sym_set_node,
  [sym_assignment_slot] = sym_assignment_slot,
  [sym_aggregate_assignment_slot] = sym_aggregate_assignment_slot,
  [sym_atomic_assignment_slot] = sym_atomic_assignment_slot,
  [sym_slot_reference] = sym_slot_reference,
  [sym__slot_values] = sym__slot_values,
  [sym_slot_value] = sym_slot_value,
  [sym_slot_identifier] = sym_slot_identifier,
  [sym_import_node] = sym_import_node,
  [sym_decision_graph_name] = sym_decision_graph_name,
  [sym_node_id] = sym_node_id,
  [sym_node_id_value] = sym_node_id_value,
  [sym_comment] = sym_comment,
  [aux_sym_decision_graph_repeat1] = aux_sym_decision_graph_repeat1,
  [aux_sym_terms_sub_node_repeat1] = aux_sym_terms_sub_node_repeat1,
  [aux_sym_answers_sub_node_repeat1] = aux_sym_answers_sub_node_repeat1,
  [aux_sym_consider_options_sub_node_repeat1] = aux_sym_consider_options_sub_node_repeat1,
  [aux_sym_when_node_repeat1] = aux_sym_when_node_repeat1,
  [aux_sym_slot_reference_repeat1] = aux_sym_slot_reference_repeat1,
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
  [aux_sym_free_text_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_ask] = {
    .visible = true,
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
  [anon_sym_terms] = {
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
  [anon_sym_title] = {
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
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_decision_graph_name_token1] = {
    .visible = false,
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
  [sym_free_text] = {
    .visible = true,
    .named = true,
  },
  [sym_free_text_no_end_bracket] = {
    .visible = true,
    .named = true,
  },
  [sym_free_text_no_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_ask_node] = {
    .visible = true,
    .named = true,
  },
  [sym_text_sub_node] = {
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
  [sym_node_reference] = {
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
  [sym_when_answer_sub_node] = {
    .visible = true,
    .named = true,
  },
  [sym_section_node] = {
    .visible = true,
    .named = true,
  },
  [sym_info_sub_node] = {
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
  [sym_slot_reference] = {
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
  [sym_slot_identifier] = {
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
  [aux_sym_when_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_slot_reference_repeat1] = {
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
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == ',') ADVANCE(132);
      if (lookahead == '-') ADVANCE(140);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(128);
      if (lookahead == '<') ADVANCE(200);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead == 'c') ADVANCE(143);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(149);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead == 'w') ADVANCE(159);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '}') ADVANCE(95);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(139);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(201);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~' ||
          lookahead == 8217) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(134);
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
          (lookahead < '.' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(136);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          (lookahead < '.' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(136);
      END_STATE();
    case 9:
      if (lookahead == '<') ADVANCE(2);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(129);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(121);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(122);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'h') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'j') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'k') ADVANCE(90);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(48);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 74:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == '{') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 76:
      if (lookahead == '}') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 77:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(139);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (eof) ADVANCE(83);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(131);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '}') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(82)
      END_STATE();
    case 83:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_todo);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_free_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~' ||
          lookahead == 8217) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ask);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_terms);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_terms);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_answers);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_answers);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_consider);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_slot);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\\') ADVANCE(72);
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
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(136);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH_DASH);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(110);
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
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(136);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(135);
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
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 's') ADVANCE(133);
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
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
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
          lookahead != '/' &&
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_POUNDimport);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == ']') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(194);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'h') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'j') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'k') ADVANCE(91);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(185);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(197);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'p') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 'x') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(198);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(161);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'u') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'w') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(203);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 82, .external_lex_state = 1},
  [3] = {.lex_state = 82, .external_lex_state = 1},
  [4] = {.lex_state = 0, .external_lex_state = 1},
  [5] = {.lex_state = 0, .external_lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 0, .external_lex_state = 1},
  [10] = {.lex_state = 0, .external_lex_state = 1},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 82, .external_lex_state = 1},
  [15] = {.lex_state = 82, .external_lex_state = 1},
  [16] = {.lex_state = 82, .external_lex_state = 1},
  [17] = {.lex_state = 7, .external_lex_state = 1},
  [18] = {.lex_state = 82, .external_lex_state = 1},
  [19] = {.lex_state = 82, .external_lex_state = 1},
  [20] = {.lex_state = 82, .external_lex_state = 1},
  [21] = {.lex_state = 82, .external_lex_state = 1},
  [22] = {.lex_state = 82, .external_lex_state = 1},
  [23] = {.lex_state = 0, .external_lex_state = 1},
  [24] = {.lex_state = 82, .external_lex_state = 1},
  [25] = {.lex_state = 82, .external_lex_state = 1},
  [26] = {.lex_state = 82, .external_lex_state = 1},
  [27] = {.lex_state = 82, .external_lex_state = 1},
  [28] = {.lex_state = 82, .external_lex_state = 1},
  [29] = {.lex_state = 82, .external_lex_state = 1},
  [30] = {.lex_state = 82, .external_lex_state = 1},
  [31] = {.lex_state = 82, .external_lex_state = 1},
  [32] = {.lex_state = 8, .external_lex_state = 1},
  [33] = {.lex_state = 82, .external_lex_state = 1},
  [34] = {.lex_state = 82, .external_lex_state = 1},
  [35] = {.lex_state = 82, .external_lex_state = 1},
  [36] = {.lex_state = 82, .external_lex_state = 1},
  [37] = {.lex_state = 82, .external_lex_state = 1},
  [38] = {.lex_state = 8, .external_lex_state = 1},
  [39] = {.lex_state = 8, .external_lex_state = 1},
  [40] = {.lex_state = 82, .external_lex_state = 1},
  [41] = {.lex_state = 82, .external_lex_state = 1},
  [42] = {.lex_state = 8, .external_lex_state = 1},
  [43] = {.lex_state = 82, .external_lex_state = 1},
  [44] = {.lex_state = 82, .external_lex_state = 1},
  [45] = {.lex_state = 82, .external_lex_state = 1},
  [46] = {.lex_state = 82, .external_lex_state = 1},
  [47] = {.lex_state = 82, .external_lex_state = 1},
  [48] = {.lex_state = 82, .external_lex_state = 1},
  [49] = {.lex_state = 82, .external_lex_state = 1},
  [50] = {.lex_state = 82, .external_lex_state = 1},
  [51] = {.lex_state = 82, .external_lex_state = 1},
  [52] = {.lex_state = 82, .external_lex_state = 1},
  [53] = {.lex_state = 0, .external_lex_state = 1},
  [54] = {.lex_state = 82, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 82, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 82, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 9, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 8, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 1},
  [71] = {.lex_state = 8, .external_lex_state = 1},
  [72] = {.lex_state = 82, .external_lex_state = 1},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 82, .external_lex_state = 1},
  [75] = {.lex_state = 9, .external_lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 82, .external_lex_state = 1},
  [79] = {.lex_state = 6, .external_lex_state = 1},
  [80] = {.lex_state = 8, .external_lex_state = 1},
  [81] = {.lex_state = 6, .external_lex_state = 1},
  [82] = {.lex_state = 6, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 6, .external_lex_state = 1},
  [86] = {.lex_state = 6, .external_lex_state = 1},
  [87] = {.lex_state = 6, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 6, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 6, .external_lex_state = 1},
  [95] = {.lex_state = 6, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 6, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 6, .external_lex_state = 1},
  [103] = {.lex_state = 6, .external_lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 82, .external_lex_state = 1},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 82, .external_lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 8, .external_lex_state = 1},
  [116] = {.lex_state = 8, .external_lex_state = 1},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 9, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 9, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 9, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 8, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 0, .external_lex_state = 1},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 8, .external_lex_state = 1},
  [148] = {.lex_state = 82, .external_lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 1},
  [152] = {.lex_state = 0, .external_lex_state = 1},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 1, .external_lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 82, .external_lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 0, .external_lex_state = 1},
  [165] = {.lex_state = 0, .external_lex_state = 1},
  [166] = {.lex_state = 0, .external_lex_state = 1},
  [167] = {.lex_state = 0, .external_lex_state = 1},
  [168] = {.lex_state = 82, .external_lex_state = 1},
  [169] = {.lex_state = 0, .external_lex_state = 1},
  [170] = {.lex_state = 0, .external_lex_state = 1},
  [171] = {.lex_state = 0, .external_lex_state = 1},
  [172] = {.lex_state = 0, .external_lex_state = 1},
  [173] = {.lex_state = 0, .external_lex_state = 1},
  [174] = {.lex_state = 0, .external_lex_state = 1},
  [175] = {.lex_state = 0, .external_lex_state = 1},
  [176] = {.lex_state = 0, .external_lex_state = 1},
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 82, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 0, .external_lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 1},
  [188] = {.lex_state = 0, .external_lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 0, .external_lex_state = 1},
  [191] = {.lex_state = 0, .external_lex_state = 1},
  [192] = {.lex_state = 82, .external_lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 1},
  [197] = {.lex_state = 82, .external_lex_state = 1},
  [198] = {.lex_state = 0, .external_lex_state = 1},
  [199] = {.lex_state = 82, .external_lex_state = 1},
  [200] = {.lex_state = 82, .external_lex_state = 1},
  [201] = {.lex_state = 0, .external_lex_state = 1},
  [202] = {.lex_state = 0, .external_lex_state = 1},
  [203] = {.lex_state = 0, .external_lex_state = 1},
  [204] = {.lex_state = 0, .external_lex_state = 1},
  [205] = {.lex_state = 0, .external_lex_state = 1},
  [206] = {.lex_state = 0, .external_lex_state = 1},
  [207] = {.lex_state = 0, .external_lex_state = 1},
  [208] = {.lex_state = 0, .external_lex_state = 1},
  [209] = {.lex_state = 0, .external_lex_state = 1},
  [210] = {.lex_state = 0, .external_lex_state = 1},
  [211] = {.lex_state = 0, .external_lex_state = 1},
  [212] = {.lex_state = 0, .external_lex_state = 1},
  [213] = {.lex_state = 0, .external_lex_state = 1},
  [214] = {.lex_state = 0, .external_lex_state = 1},
  [215] = {.lex_state = 0, .external_lex_state = 1},
  [216] = {.lex_state = 0, .external_lex_state = 1},
  [217] = {.lex_state = 0, .external_lex_state = 1},
  [218] = {.lex_state = 0, .external_lex_state = 1},
  [219] = {.lex_state = 0, .external_lex_state = 1},
  [220] = {.lex_state = 0, .external_lex_state = 1},
  [221] = {.lex_state = 0, .external_lex_state = 1},
  [222] = {.lex_state = 0, .external_lex_state = 1},
  [223] = {.lex_state = 0, .external_lex_state = 1},
  [224] = {.lex_state = 0, .external_lex_state = 1},
  [225] = {.lex_state = 0, .external_lex_state = 1},
  [226] = {.lex_state = 0, .external_lex_state = 1},
  [227] = {.lex_state = 0, .external_lex_state = 1},
  [228] = {.lex_state = 0, .external_lex_state = 1},
  [229] = {.lex_state = 0, .external_lex_state = 1},
  [230] = {.lex_state = 82, .external_lex_state = 1},
  [231] = {.lex_state = 0, .external_lex_state = 1},
  [232] = {.lex_state = 0, .external_lex_state = 1},
  [233] = {.lex_state = 0, .external_lex_state = 1},
  [234] = {.lex_state = 0, .external_lex_state = 1},
  [235] = {.lex_state = 0, .external_lex_state = 1},
  [236] = {.lex_state = 0, .external_lex_state = 1},
  [237] = {.lex_state = 0, .external_lex_state = 1},
  [238] = {.lex_state = 0, .external_lex_state = 1},
  [239] = {.lex_state = 0, .external_lex_state = 1},
  [240] = {-1},
  [241] = {.lex_state = 202},
  [242] = {-1},
};

enum {
  ts_external_token__comment_block = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__comment_block] = sym__comment_block,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
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
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_terms] = ACTIONS(1),
    [anon_sym_answers] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_consider] = ACTIONS(1),
    [anon_sym_slot] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
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
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(229),
    [sym_decision_graph] = STATE(226),
    [sym__top_level_node] = STATE(45),
    [sym_todo_node] = STATE(19),
    [sym_ask_node] = STATE(19),
    [sym_call_node] = STATE(19),
    [sym_consider_node] = STATE(19),
    [sym_when_node] = STATE(19),
    [sym_section_node] = STATE(19),
    [sym_continue_node] = STATE(19),
    [sym_part_node] = STATE(19),
    [sym_end_node] = STATE(19),
    [sym_reject_node] = STATE(19),
    [sym_set_node] = STATE(19),
    [sym_import_node] = STATE(19),
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
    STATE(45), 1,
      sym__top_level_node,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(19), 12,
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
    STATE(45), 1,
      sym__top_level_node,
    STATE(3), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(19), 12,
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
    STATE(13), 1,
      sym_info_sub_node,
    STATE(45), 1,
      sym__top_level_node,
    STATE(223), 1,
      sym_decision_graph,
    STATE(19), 12,
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
    STATE(10), 1,
      sym_info_sub_node,
    STATE(45), 1,
      sym__top_level_node,
    STATE(157), 1,
      sym_decision_graph,
    STATE(19), 12,
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
  [172] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(45), 1,
      sym__top_level_node,
    STATE(238), 1,
      sym_decision_graph,
    STATE(19), 12,
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
  [214] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LBRACK_DASH_DASH,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(45), 1,
      sym__top_level_node,
    STATE(231), 1,
      sym_decision_graph,
    STATE(19), 12,
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
  [256] = 9,
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
    STATE(45), 1,
      sym__top_level_node,
    STATE(175), 1,
      sym_decision_graph,
    STATE(19), 12,
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
  [295] = 9,
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
    STATE(45), 1,
      sym__top_level_node,
    STATE(239), 1,
      sym_decision_graph,
    STATE(19), 12,
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
  [334] = 9,
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
    STATE(45), 1,
      sym__top_level_node,
    STATE(223), 1,
      sym_decision_graph,
    STATE(19), 12,
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
  [373] = 9,
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
    STATE(45), 1,
      sym__top_level_node,
    STATE(201), 1,
      sym_decision_graph,
    STATE(19), 12,
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
  [412] = 9,
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
    STATE(45), 1,
      sym__top_level_node,
    STATE(168), 1,
      sym_decision_graph,
    STATE(19), 12,
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
  [451] = 9,
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
    STATE(45), 1,
      sym__top_level_node,
    STATE(163), 1,
      sym_decision_graph,
    STATE(19), 12,
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
  [490] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    STATE(14), 1,
      sym_comment,
    ACTIONS(29), 14,
      anon_sym_todo,
      anon_sym_ask,
      anon_sym_text,
      anon_sym_terms,
      anon_sym_call,
      anon_sym_consider,
      anon_sym_when,
      anon_sym_section,
      anon_sym_title,
      anon_sym_continue,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_end,
      anon_sym_reject,
      anon_sym_set,
  [519] = 16,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(31), 1,
      anon_sym_todo,
    ACTIONS(33), 1,
      anon_sym_ask,
    ACTIONS(35), 1,
      anon_sym_call,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(39), 1,
      anon_sym_consider,
    ACTIONS(41), 1,
      anon_sym_when,
    ACTIONS(43), 1,
      anon_sym_section,
    ACTIONS(45), 1,
      anon_sym_continue,
    ACTIONS(47), 1,
      anon_sym_end,
    ACTIONS(49), 1,
      anon_sym_reject,
    ACTIONS(51), 1,
      anon_sym_set,
    ACTIONS(53), 1,
      anon_sym_POUNDimport,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      sym_node_id,
  [568] = 13,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(55), 1,
      anon_sym_todo,
    ACTIONS(57), 1,
      anon_sym_ask,
    ACTIONS(59), 1,
      anon_sym_call,
    ACTIONS(61), 1,
      anon_sym_consider,
    ACTIONS(63), 1,
      anon_sym_when,
    ACTIONS(65), 1,
      anon_sym_section,
    ACTIONS(67), 1,
      anon_sym_continue,
    ACTIONS(69), 1,
      anon_sym_end,
    ACTIONS(71), 1,
      anon_sym_reject,
    ACTIONS(73), 1,
      anon_sym_set,
    STATE(16), 1,
      sym_comment,
  [608] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      anon_sym_else,
    ACTIONS(77), 1,
      aux_sym_slot_value_token1,
    STATE(17), 1,
      sym_comment,
    STATE(54), 1,
      sym_slot_identifier,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(96), 1,
      sym_aggregate_assignment_slot,
    STATE(122), 1,
      sym_assignment_slot,
    STATE(148), 1,
      sym_slot_reference,
  [639] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_comment,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [659] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [679] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_comment,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [699] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [719] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [739] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    STATE(23), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(99), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [759] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [779] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(110), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [799] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(114), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [819] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [839] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [859] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [879] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [899] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(132), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [919] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(136), 1,
      aux_sym_slot_value_token1,
    STATE(32), 1,
      sym_comment,
    STATE(54), 1,
      sym_slot_identifier,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(96), 1,
      sym_aggregate_assignment_slot,
    STATE(125), 1,
      sym_assignment_slot,
    STATE(148), 1,
      sym_slot_reference,
  [947] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [967] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [987] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1007] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1027] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1047] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(136), 1,
      aux_sym_slot_value_token1,
    STATE(38), 1,
      sym_comment,
    STATE(54), 1,
      sym_slot_identifier,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(96), 1,
      sym_aggregate_assignment_slot,
    STATE(148), 1,
      sym_slot_reference,
    STATE(149), 1,
      sym_assignment_slot,
  [1075] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(136), 1,
      aux_sym_slot_value_token1,
    STATE(39), 1,
      sym_comment,
    STATE(54), 1,
      sym_slot_identifier,
    STATE(92), 1,
      sym_assignment_slot,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(96), 1,
      sym_aggregate_assignment_slot,
    STATE(148), 1,
      sym_slot_reference,
  [1103] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1123] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_comment,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1143] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(136), 1,
      aux_sym_slot_value_token1,
    STATE(42), 1,
      sym_comment,
    STATE(54), 1,
      sym_slot_identifier,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(96), 1,
      sym_aggregate_assignment_slot,
    STATE(122), 1,
      sym_assignment_slot,
    STATE(148), 1,
      sym_slot_reference,
  [1171] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(168), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1191] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(172), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(170), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1211] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_comment,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1231] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(180), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_comment,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1251] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_comment,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1271] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(188), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_comment,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1291] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym_comment,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1311] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_comment,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1331] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_comment,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1351] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_comment,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1371] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(53), 1,
      sym_comment,
    ACTIONS(206), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1388] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_slot_reference_repeat1,
    ACTIONS(208), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1409] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym__slot_values_repeat1,
    ACTIONS(212), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1430] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_when_node_repeat1,
    STATE(141), 1,
      sym_when_answer_sub_node,
    STATE(232), 1,
      sym_else_sub_node,
  [1455] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym__slot_values_repeat1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1476] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(224), 1,
      anon_sym_SLASH,
    STATE(58), 2,
      sym_comment,
      aux_sym_slot_reference_repeat1,
    ACTIONS(222), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1495] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_when_node_repeat1,
    STATE(141), 1,
      sym_when_answer_sub_node,
    STATE(162), 1,
      sym_else_sub_node,
  [1520] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(60), 1,
      sym_comment,
    ACTIONS(99), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1537] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(210), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      aux_sym_slot_reference_repeat1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1558] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(138), 1,
      sym_term_sub_node,
  [1580] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(235), 1,
      aux_sym_decision_graph_name_token1,
    STATE(63), 1,
      sym_comment,
    STATE(159), 1,
      sym_node_id_value,
    STATE(160), 1,
      sym_decision_graph_name,
    STATE(235), 1,
      sym_node_reference,
  [1602] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_consider_option_sub_node,
    STATE(64), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1622] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(138), 1,
      sym_term_sub_node,
  [1644] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      aux_sym_slot_value_token1,
    STATE(55), 1,
      sym_slot_value,
    STATE(66), 1,
      sym_comment,
    STATE(98), 1,
      sym__slot_values,
  [1666] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_answer_sub_node,
    STATE(67), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1686] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(141), 1,
      sym_when_answer_sub_node,
    STATE(68), 2,
      sym_comment,
      aux_sym_when_node_repeat1,
  [1706] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(138), 1,
      sym_term_sub_node,
    STATE(69), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1726] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(131), 1,
      sym_consider_option_sub_node,
  [1748] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      aux_sym_slot_value_token1,
    STATE(55), 1,
      sym_slot_value,
    STATE(71), 1,
      sym_comment,
    STATE(221), 1,
      sym__slot_values,
  [1770] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(72), 1,
      sym_comment,
    ACTIONS(267), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1786] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(138), 1,
      sym_term_sub_node,
  [1808] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(271), 1,
      anon_sym_terms,
    ACTIONS(273), 1,
      anon_sym_answers,
    STATE(74), 1,
      sym_comment,
    STATE(200), 1,
      sym_node_id,
  [1830] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(235), 1,
      aux_sym_decision_graph_name_token1,
    STATE(75), 1,
      sym_comment,
    STATE(159), 1,
      sym_node_id_value,
    STATE(160), 1,
      sym_decision_graph_name,
    STATE(161), 1,
      sym_node_reference,
  [1852] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(135), 1,
      sym_answer_sub_node,
  [1874] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(138), 1,
      sym_term_sub_node,
  [1896] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(78), 1,
      sym_comment,
    ACTIONS(222), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1912] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    STATE(79), 1,
      sym_comment,
    STATE(227), 1,
      sym_free_text_no_end_bracket,
  [1931] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(136), 1,
      aux_sym_slot_value_token1,
    STATE(54), 1,
      sym_slot_identifier,
    STATE(80), 1,
      sym_comment,
    STATE(172), 1,
      sym_slot_reference,
  [1950] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_comment,
    STATE(177), 1,
      sym_free_text_no_end_bracket,
  [1969] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_comment,
    STATE(203), 1,
      sym_free_text_no_end_bracket,
  [1988] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      aux_sym_when_node_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(141), 1,
      sym_when_answer_sub_node,
  [2007] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_comment,
    STATE(101), 1,
      aux_sym__slot_values_repeat1,
  [2026] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(291), 1,
      anon_sym_COLON,
    ACTIONS(293), 1,
      aux_sym_free_text_token1,
    STATE(85), 1,
      sym_comment,
    STATE(213), 1,
      sym_free_text_no_colon,
  [2045] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_comment,
    STATE(156), 1,
      sym_free_text_no_end_bracket,
  [2064] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(297), 1,
      aux_sym_free_text_token1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      sym_comment,
    STATE(236), 1,
      sym_free_text,
  [2083] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(287), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      aux_sym_when_node_repeat1,
    STATE(88), 1,
      sym_comment,
    STATE(141), 1,
      sym_when_answer_sub_node,
  [2102] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(89), 1,
      sym_comment,
    STATE(131), 1,
      sym_consider_option_sub_node,
  [2121] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      aux_sym_free_text_token1,
    ACTIONS(301), 1,
      anon_sym_COLON,
    STATE(90), 1,
      sym_comment,
    STATE(217), 1,
      sym_free_text_no_colon,
  [2140] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(91), 1,
      sym_comment,
    STATE(135), 1,
      sym_answer_sub_node,
  [2159] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(92), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2174] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(93), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2189] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_comment,
    STATE(237), 1,
      sym_free_text_no_end_bracket,
  [2208] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_comment,
    STATE(164), 1,
      sym_free_text_no_end_bracket,
  [2227] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(96), 1,
      sym_comment,
    ACTIONS(305), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2242] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(297), 1,
      aux_sym_free_text_token1,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_comment,
    STATE(167), 1,
      sym_free_text,
  [2261] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(98), 1,
      sym_comment,
    ACTIONS(313), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2276] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(99), 1,
      sym_comment,
    ACTIONS(315), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2291] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_comment,
    STATE(190), 1,
      sym_else_sub_node,
  [2310] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      aux_sym__slot_values_repeat1,
    STATE(101), 1,
      sym_comment,
  [2329] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(297), 1,
      aux_sym_free_text_token1,
    ACTIONS(323), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_comment,
    STATE(228), 1,
      sym_free_text,
  [2348] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(297), 1,
      aux_sym_free_text_token1,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym_comment,
    STATE(187), 1,
      sym_free_text,
  [2367] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_comment,
    STATE(112), 1,
      sym_terms_sub_node,
    STATE(198), 1,
      sym_answers_sub_node,
  [2386] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(329), 1,
      anon_sym_text,
    STATE(105), 1,
      sym_comment,
    STATE(197), 1,
      sym_node_id,
  [2405] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_comment,
    STATE(137), 1,
      sym_terms_sub_node,
    STATE(195), 1,
      sym_answers_sub_node,
  [2424] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(331), 1,
      anon_sym_title,
    STATE(107), 1,
      sym_comment,
    STATE(180), 1,
      sym_node_id,
  [2443] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      sym_comment,
    STATE(183), 1,
      sym_else_sub_node,
  [2462] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(109), 1,
      sym_comment,
    ACTIONS(335), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2477] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(110), 1,
      sym_comment,
    ACTIONS(337), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2492] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_consider_options_sub_node,
    STATE(111), 1,
      sym_comment,
  [2508] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym_comment,
    STATE(182), 1,
      sym_answers_sub_node,
  [2524] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(113), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2538] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(114), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2552] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(246), 1,
      aux_sym_slot_value_token1,
    STATE(109), 1,
      sym_slot_value,
    STATE(115), 1,
      sym_comment,
  [2568] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(136), 1,
      aux_sym_slot_value_token1,
    STATE(78), 1,
      sym_slot_identifier,
    STATE(116), 1,
      sym_comment,
  [2584] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(117), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2598] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(118), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2612] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(119), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2626] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    STATE(12), 1,
      sym_node_id,
    STATE(120), 1,
      sym_comment,
  [2642] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(121), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2656] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(355), 1,
      anon_sym_COLON,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    STATE(122), 1,
      sym_comment,
  [2672] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(123), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2686] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(361), 1,
      anon_sym_LBRACK,
    ACTIONS(363), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(124), 1,
      sym_comment,
  [2702] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      sym_comment,
  [2718] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(126), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2732] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(369), 1,
      aux_sym_decision_graph_name_token1,
    STATE(127), 1,
      sym_comment,
    STATE(194), 1,
      sym_node_id_value,
  [2748] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(371), 1,
      anon_sym_LBRACK,
    ACTIONS(373), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(128), 1,
      sym_comment,
  [2764] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(129), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2778] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(377), 1,
      aux_sym_decision_graph_name_token1,
    STATE(130), 1,
      sym_comment,
    STATE(188), 1,
      sym_decision_graph_name,
  [2794] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(131), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2808] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_text_sub_node,
    STATE(132), 1,
      sym_comment,
  [2824] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(369), 1,
      aux_sym_decision_graph_name_token1,
    STATE(133), 1,
      sym_comment,
    STATE(151), 1,
      sym_node_id_value,
  [2840] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
    ACTIONS(385), 1,
      anon_sym_LT,
    STATE(134), 1,
      sym_comment,
  [2856] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(135), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2870] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    STATE(136), 1,
      sym_comment,
    STATE(142), 1,
      sym_slot_sub_node,
  [2886] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
    STATE(137), 1,
      sym_comment,
    STATE(198), 1,
      sym_answers_sub_node,
  [2902] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(138), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2916] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(246), 1,
      aux_sym_slot_value_token1,
    STATE(60), 1,
      sym_slot_value,
    STATE(139), 1,
      sym_comment,
  [2932] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(393), 1,
      anon_sym_LBRACK,
    ACTIONS(395), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(140), 1,
      sym_comment,
  [2948] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(141), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2962] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_consider_options_sub_node,
    STATE(142), 1,
      sym_comment,
  [2978] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_slot_sub_node,
    STATE(143), 1,
      sym_comment,
  [2994] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
    ACTIONS(399), 1,
      anon_sym_GT,
    STATE(144), 1,
      sym_comment,
  [3010] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_text_sub_node,
    STATE(145), 1,
      sym_comment,
  [3026] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(146), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3040] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(246), 1,
      aux_sym_slot_value_token1,
    STATE(84), 1,
      sym_slot_value,
    STATE(147), 1,
      sym_comment,
  [3056] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(403), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(405), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym_comment,
  [3072] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(357), 1,
      anon_sym_SEMI,
    ACTIONS(407), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_comment,
  [3088] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(409), 1,
      anon_sym_COLON,
    STATE(150), 1,
      sym_comment,
  [3101] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_comment,
  [3114] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(413), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_comment,
  [3127] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(415), 1,
      anon_sym_COLON,
    STATE(153), 1,
      sym_comment,
  [3140] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(417), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_comment,
  [3153] = 4,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(419), 1,
      sym_file_path,
    ACTIONS(421), 1,
      anon_sym_LT_DASH_DASH,
    STATE(155), 1,
      sym_comment,
  [3166] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_comment,
  [3179] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_comment,
  [3192] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(425), 1,
      anon_sym_slot,
    STATE(158), 1,
      sym_comment,
  [3205] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
  [3218] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(429), 1,
      anon_sym_GT,
    STATE(160), 1,
      sym_comment,
  [3231] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_comment,
  [3244] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_comment,
  [3257] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_comment,
  [3270] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(164), 1,
      sym_comment,
  [3283] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_comment,
  [3296] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_comment,
  [3309] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_comment,
  [3322] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(441), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(168), 1,
      sym_comment,
  [3335] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(443), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_comment,
  [3348] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(445), 1,
      anon_sym_COLON,
    STATE(170), 1,
      sym_comment,
  [3361] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(447), 1,
      anon_sym_COLON,
    STATE(171), 1,
      sym_comment,
  [3374] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_comment,
  [3387] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      sym_comment,
  [3400] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_comment,
  [3413] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_comment,
  [3426] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(457), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym_comment,
  [3439] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym_comment,
  [3452] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(459), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym_comment,
  [3465] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(461), 1,
      anon_sym_COLON,
    STATE(179), 1,
      sym_comment,
  [3478] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(463), 1,
      anon_sym_title,
    STATE(180), 1,
      sym_comment,
  [3491] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(465), 1,
      anon_sym_COLON,
    STATE(181), 1,
      sym_comment,
  [3504] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      sym_comment,
  [3517] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(469), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_comment,
  [3530] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(471), 1,
      anon_sym_COLON,
    STATE(184), 1,
      sym_comment,
  [3543] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(473), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
  [3556] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_comment,
  [3569] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym_comment,
  [3582] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(479), 1,
      anon_sym_COLON,
    STATE(188), 1,
      sym_comment,
  [3595] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_comment,
  [3608] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      sym_comment,
  [3621] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(399), 1,
      anon_sym_COLON,
    STATE(191), 1,
      sym_comment,
  [3634] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(483), 1,
      anon_sym_else,
    STATE(192), 1,
      sym_comment,
  [3647] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(485), 1,
      anon_sym_COLON,
    STATE(193), 1,
      sym_comment,
  [3660] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(487), 1,
      anon_sym_LT,
    STATE(194), 1,
      sym_comment,
  [3673] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      sym_comment,
  [3686] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_comment,
  [3699] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(493), 1,
      anon_sym_text,
    STATE(197), 1,
      sym_comment,
  [3712] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      sym_comment,
  [3725] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(273), 1,
      anon_sym_answers,
    STATE(199), 1,
      sym_comment,
  [3738] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(497), 1,
      anon_sym_terms,
    STATE(200), 1,
      sym_comment,
  [3751] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_comment,
  [3764] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(501), 1,
      anon_sym_COLON,
    STATE(202), 1,
      sym_comment,
  [3777] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym_comment,
  [3790] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(505), 1,
      anon_sym_COLON,
    STATE(204), 1,
      sym_comment,
  [3803] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(507), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_comment,
  [3816] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      sym_comment,
  [3829] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      sym_comment,
  [3842] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(513), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym_comment,
  [3855] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(515), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym_comment,
  [3868] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_comment,
  [3881] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(519), 1,
      anon_sym_COLON,
    STATE(211), 1,
      sym_comment,
  [3894] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(521), 1,
      anon_sym_COLON,
    STATE(212), 1,
      sym_comment,
  [3907] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(523), 1,
      anon_sym_COLON,
    STATE(213), 1,
      sym_comment,
  [3920] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(214), 1,
      sym_comment,
  [3933] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(527), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_comment,
  [3946] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(216), 1,
      sym_comment,
  [3959] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(531), 1,
      anon_sym_COLON,
    STATE(217), 1,
      sym_comment,
  [3972] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      sym_comment,
  [3985] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(535), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym_comment,
  [3998] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(537), 1,
      anon_sym_COLON,
    STATE(220), 1,
      sym_comment,
  [4011] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(539), 1,
      anon_sym_COLON,
    STATE(221), 1,
      sym_comment,
  [4024] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym_comment,
  [4037] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
  [4050] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      sym_comment,
  [4063] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(547), 1,
      anon_sym_COLON,
    STATE(225), 1,
      sym_comment,
  [4076] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(549), 1,
      ts_builtin_sym_end,
    STATE(226), 1,
      sym_comment,
  [4089] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(227), 1,
      sym_comment,
  [4102] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_comment,
  [4115] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(553), 1,
      ts_builtin_sym_end,
    STATE(229), 1,
      sym_comment,
  [4128] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(555), 1,
      anon_sym_options,
    STATE(230), 1,
      sym_comment,
  [4141] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4154] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(232), 1,
      sym_comment,
  [4167] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    STATE(233), 1,
      sym_comment,
  [4180] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    STATE(234), 1,
      sym_comment,
  [4193] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    STATE(235), 1,
      sym_comment,
  [4206] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_comment,
  [4219] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      sym_comment,
  [4232] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_comment,
  [4245] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [4258] = 1,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
  [4262] = 1,
    ACTIONS(573), 1,
      aux_sym_comment_token1,
  [4266] = 1,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 127,
  [SMALL_STATE(6)] = 172,
  [SMALL_STATE(7)] = 214,
  [SMALL_STATE(8)] = 256,
  [SMALL_STATE(9)] = 295,
  [SMALL_STATE(10)] = 334,
  [SMALL_STATE(11)] = 373,
  [SMALL_STATE(12)] = 412,
  [SMALL_STATE(13)] = 451,
  [SMALL_STATE(14)] = 490,
  [SMALL_STATE(15)] = 519,
  [SMALL_STATE(16)] = 568,
  [SMALL_STATE(17)] = 608,
  [SMALL_STATE(18)] = 639,
  [SMALL_STATE(19)] = 659,
  [SMALL_STATE(20)] = 679,
  [SMALL_STATE(21)] = 699,
  [SMALL_STATE(22)] = 719,
  [SMALL_STATE(23)] = 739,
  [SMALL_STATE(24)] = 759,
  [SMALL_STATE(25)] = 779,
  [SMALL_STATE(26)] = 799,
  [SMALL_STATE(27)] = 819,
  [SMALL_STATE(28)] = 839,
  [SMALL_STATE(29)] = 859,
  [SMALL_STATE(30)] = 879,
  [SMALL_STATE(31)] = 899,
  [SMALL_STATE(32)] = 919,
  [SMALL_STATE(33)] = 947,
  [SMALL_STATE(34)] = 967,
  [SMALL_STATE(35)] = 987,
  [SMALL_STATE(36)] = 1007,
  [SMALL_STATE(37)] = 1027,
  [SMALL_STATE(38)] = 1047,
  [SMALL_STATE(39)] = 1075,
  [SMALL_STATE(40)] = 1103,
  [SMALL_STATE(41)] = 1123,
  [SMALL_STATE(42)] = 1143,
  [SMALL_STATE(43)] = 1171,
  [SMALL_STATE(44)] = 1191,
  [SMALL_STATE(45)] = 1211,
  [SMALL_STATE(46)] = 1231,
  [SMALL_STATE(47)] = 1251,
  [SMALL_STATE(48)] = 1271,
  [SMALL_STATE(49)] = 1291,
  [SMALL_STATE(50)] = 1311,
  [SMALL_STATE(51)] = 1331,
  [SMALL_STATE(52)] = 1351,
  [SMALL_STATE(53)] = 1371,
  [SMALL_STATE(54)] = 1388,
  [SMALL_STATE(55)] = 1409,
  [SMALL_STATE(56)] = 1430,
  [SMALL_STATE(57)] = 1455,
  [SMALL_STATE(58)] = 1476,
  [SMALL_STATE(59)] = 1495,
  [SMALL_STATE(60)] = 1520,
  [SMALL_STATE(61)] = 1537,
  [SMALL_STATE(62)] = 1558,
  [SMALL_STATE(63)] = 1580,
  [SMALL_STATE(64)] = 1602,
  [SMALL_STATE(65)] = 1622,
  [SMALL_STATE(66)] = 1644,
  [SMALL_STATE(67)] = 1666,
  [SMALL_STATE(68)] = 1686,
  [SMALL_STATE(69)] = 1706,
  [SMALL_STATE(70)] = 1726,
  [SMALL_STATE(71)] = 1748,
  [SMALL_STATE(72)] = 1770,
  [SMALL_STATE(73)] = 1786,
  [SMALL_STATE(74)] = 1808,
  [SMALL_STATE(75)] = 1830,
  [SMALL_STATE(76)] = 1852,
  [SMALL_STATE(77)] = 1874,
  [SMALL_STATE(78)] = 1896,
  [SMALL_STATE(79)] = 1912,
  [SMALL_STATE(80)] = 1931,
  [SMALL_STATE(81)] = 1950,
  [SMALL_STATE(82)] = 1969,
  [SMALL_STATE(83)] = 1988,
  [SMALL_STATE(84)] = 2007,
  [SMALL_STATE(85)] = 2026,
  [SMALL_STATE(86)] = 2045,
  [SMALL_STATE(87)] = 2064,
  [SMALL_STATE(88)] = 2083,
  [SMALL_STATE(89)] = 2102,
  [SMALL_STATE(90)] = 2121,
  [SMALL_STATE(91)] = 2140,
  [SMALL_STATE(92)] = 2159,
  [SMALL_STATE(93)] = 2174,
  [SMALL_STATE(94)] = 2189,
  [SMALL_STATE(95)] = 2208,
  [SMALL_STATE(96)] = 2227,
  [SMALL_STATE(97)] = 2242,
  [SMALL_STATE(98)] = 2261,
  [SMALL_STATE(99)] = 2276,
  [SMALL_STATE(100)] = 2291,
  [SMALL_STATE(101)] = 2310,
  [SMALL_STATE(102)] = 2329,
  [SMALL_STATE(103)] = 2348,
  [SMALL_STATE(104)] = 2367,
  [SMALL_STATE(105)] = 2386,
  [SMALL_STATE(106)] = 2405,
  [SMALL_STATE(107)] = 2424,
  [SMALL_STATE(108)] = 2443,
  [SMALL_STATE(109)] = 2462,
  [SMALL_STATE(110)] = 2477,
  [SMALL_STATE(111)] = 2492,
  [SMALL_STATE(112)] = 2508,
  [SMALL_STATE(113)] = 2524,
  [SMALL_STATE(114)] = 2538,
  [SMALL_STATE(115)] = 2552,
  [SMALL_STATE(116)] = 2568,
  [SMALL_STATE(117)] = 2584,
  [SMALL_STATE(118)] = 2598,
  [SMALL_STATE(119)] = 2612,
  [SMALL_STATE(120)] = 2626,
  [SMALL_STATE(121)] = 2642,
  [SMALL_STATE(122)] = 2656,
  [SMALL_STATE(123)] = 2672,
  [SMALL_STATE(124)] = 2686,
  [SMALL_STATE(125)] = 2702,
  [SMALL_STATE(126)] = 2718,
  [SMALL_STATE(127)] = 2732,
  [SMALL_STATE(128)] = 2748,
  [SMALL_STATE(129)] = 2764,
  [SMALL_STATE(130)] = 2778,
  [SMALL_STATE(131)] = 2794,
  [SMALL_STATE(132)] = 2808,
  [SMALL_STATE(133)] = 2824,
  [SMALL_STATE(134)] = 2840,
  [SMALL_STATE(135)] = 2856,
  [SMALL_STATE(136)] = 2870,
  [SMALL_STATE(137)] = 2886,
  [SMALL_STATE(138)] = 2902,
  [SMALL_STATE(139)] = 2916,
  [SMALL_STATE(140)] = 2932,
  [SMALL_STATE(141)] = 2948,
  [SMALL_STATE(142)] = 2962,
  [SMALL_STATE(143)] = 2978,
  [SMALL_STATE(144)] = 2994,
  [SMALL_STATE(145)] = 3010,
  [SMALL_STATE(146)] = 3026,
  [SMALL_STATE(147)] = 3040,
  [SMALL_STATE(148)] = 3056,
  [SMALL_STATE(149)] = 3072,
  [SMALL_STATE(150)] = 3088,
  [SMALL_STATE(151)] = 3101,
  [SMALL_STATE(152)] = 3114,
  [SMALL_STATE(153)] = 3127,
  [SMALL_STATE(154)] = 3140,
  [SMALL_STATE(155)] = 3153,
  [SMALL_STATE(156)] = 3166,
  [SMALL_STATE(157)] = 3179,
  [SMALL_STATE(158)] = 3192,
  [SMALL_STATE(159)] = 3205,
  [SMALL_STATE(160)] = 3218,
  [SMALL_STATE(161)] = 3231,
  [SMALL_STATE(162)] = 3244,
  [SMALL_STATE(163)] = 3257,
  [SMALL_STATE(164)] = 3270,
  [SMALL_STATE(165)] = 3283,
  [SMALL_STATE(166)] = 3296,
  [SMALL_STATE(167)] = 3309,
  [SMALL_STATE(168)] = 3322,
  [SMALL_STATE(169)] = 3335,
  [SMALL_STATE(170)] = 3348,
  [SMALL_STATE(171)] = 3361,
  [SMALL_STATE(172)] = 3374,
  [SMALL_STATE(173)] = 3387,
  [SMALL_STATE(174)] = 3400,
  [SMALL_STATE(175)] = 3413,
  [SMALL_STATE(176)] = 3426,
  [SMALL_STATE(177)] = 3439,
  [SMALL_STATE(178)] = 3452,
  [SMALL_STATE(179)] = 3465,
  [SMALL_STATE(180)] = 3478,
  [SMALL_STATE(181)] = 3491,
  [SMALL_STATE(182)] = 3504,
  [SMALL_STATE(183)] = 3517,
  [SMALL_STATE(184)] = 3530,
  [SMALL_STATE(185)] = 3543,
  [SMALL_STATE(186)] = 3556,
  [SMALL_STATE(187)] = 3569,
  [SMALL_STATE(188)] = 3582,
  [SMALL_STATE(189)] = 3595,
  [SMALL_STATE(190)] = 3608,
  [SMALL_STATE(191)] = 3621,
  [SMALL_STATE(192)] = 3634,
  [SMALL_STATE(193)] = 3647,
  [SMALL_STATE(194)] = 3660,
  [SMALL_STATE(195)] = 3673,
  [SMALL_STATE(196)] = 3686,
  [SMALL_STATE(197)] = 3699,
  [SMALL_STATE(198)] = 3712,
  [SMALL_STATE(199)] = 3725,
  [SMALL_STATE(200)] = 3738,
  [SMALL_STATE(201)] = 3751,
  [SMALL_STATE(202)] = 3764,
  [SMALL_STATE(203)] = 3777,
  [SMALL_STATE(204)] = 3790,
  [SMALL_STATE(205)] = 3803,
  [SMALL_STATE(206)] = 3816,
  [SMALL_STATE(207)] = 3829,
  [SMALL_STATE(208)] = 3842,
  [SMALL_STATE(209)] = 3855,
  [SMALL_STATE(210)] = 3868,
  [SMALL_STATE(211)] = 3881,
  [SMALL_STATE(212)] = 3894,
  [SMALL_STATE(213)] = 3907,
  [SMALL_STATE(214)] = 3920,
  [SMALL_STATE(215)] = 3933,
  [SMALL_STATE(216)] = 3946,
  [SMALL_STATE(217)] = 3959,
  [SMALL_STATE(218)] = 3972,
  [SMALL_STATE(219)] = 3985,
  [SMALL_STATE(220)] = 3998,
  [SMALL_STATE(221)] = 4011,
  [SMALL_STATE(222)] = 4024,
  [SMALL_STATE(223)] = 4037,
  [SMALL_STATE(224)] = 4050,
  [SMALL_STATE(225)] = 4063,
  [SMALL_STATE(226)] = 4076,
  [SMALL_STATE(227)] = 4089,
  [SMALL_STATE(228)] = 4102,
  [SMALL_STATE(229)] = 4115,
  [SMALL_STATE(230)] = 4128,
  [SMALL_STATE(231)] = 4141,
  [SMALL_STATE(232)] = 4154,
  [SMALL_STATE(233)] = 4167,
  [SMALL_STATE(234)] = 4180,
  [SMALL_STATE(235)] = 4193,
  [SMALL_STATE(236)] = 4206,
  [SMALL_STATE(237)] = 4219,
  [SMALL_STATE(238)] = 4232,
  [SMALL_STATE(239)] = 4245,
  [SMALL_STATE(240)] = 4258,
  [SMALL_STATE(241)] = 4262,
  [SMALL_STATE(242)] = 4266,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(241),
  [5] = {.count = 1, .reusable = true}, SHIFT(240),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(120),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(120),
  [21] = {.count = 1, .reusable = true}, SHIFT(107),
  [23] = {.count = 1, .reusable = true}, SHIFT(118),
  [25] = {.count = 1, .reusable = true}, SHIFT(121),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [31] = {.count = 1, .reusable = true}, SHIFT(220),
  [33] = {.count = 1, .reusable = true}, SHIFT(219),
  [35] = {.count = 1, .reusable = true}, SHIFT(216),
  [37] = {.count = 1, .reusable = true}, SHIFT(127),
  [39] = {.count = 1, .reusable = true}, SHIFT(211),
  [41] = {.count = 1, .reusable = true}, SHIFT(209),
  [43] = {.count = 1, .reusable = true}, SHIFT(208),
  [45] = {.count = 1, .reusable = true}, SHIFT(207),
  [47] = {.count = 1, .reusable = true}, SHIFT(206),
  [49] = {.count = 1, .reusable = true}, SHIFT(205),
  [51] = {.count = 1, .reusable = true}, SHIFT(204),
  [53] = {.count = 1, .reusable = true}, SHIFT(130),
  [55] = {.count = 1, .reusable = true}, SHIFT(185),
  [57] = {.count = 1, .reusable = true}, SHIFT(184),
  [59] = {.count = 1, .reusable = true}, SHIFT(181),
  [61] = {.count = 1, .reusable = true}, SHIFT(179),
  [63] = {.count = 1, .reusable = true}, SHIFT(178),
  [65] = {.count = 1, .reusable = true}, SHIFT(150),
  [67] = {.count = 1, .reusable = true}, SHIFT(174),
  [69] = {.count = 1, .reusable = true}, SHIFT(173),
  [71] = {.count = 1, .reusable = true}, SHIFT(171),
  [73] = {.count = 1, .reusable = true}, SHIFT(169),
  [75] = {.count = 1, .reusable = false}, SHIFT(152),
  [77] = {.count = 1, .reusable = false}, SHIFT(72),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [99] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [101] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(139),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [112] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [114] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [118] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [136] = {.count = 1, .reusable = true}, SHIFT(72),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 4),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 4),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [176] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 1),
  [210] = {.count = 1, .reusable = true}, SHIFT(116),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [214] = {.count = 1, .reusable = true}, SHIFT(139),
  [216] = {.count = 1, .reusable = true}, SHIFT(20),
  [218] = {.count = 1, .reusable = true}, SHIFT(17),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [222] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2), SHIFT_REPEAT(116),
  [227] = {.count = 1, .reusable = true}, SHIFT(43),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 2),
  [231] = {.count = 1, .reusable = true}, SHIFT(85),
  [233] = {.count = 1, .reusable = true}, SHIFT(214),
  [235] = {.count = 1, .reusable = true}, SHIFT(144),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(71),
  [240] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [242] = {.count = 1, .reusable = true}, SHIFT(233),
  [244] = {.count = 1, .reusable = true}, SHIFT(147),
  [246] = {.count = 1, .reusable = true}, SHIFT(53),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(90),
  [251] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2),
  [255] = {.count = 2, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2), SHIFT_REPEAT(42),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(85),
  [261] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(71),
  [265] = {.count = 1, .reusable = true}, SHIFT(126),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_slot_identifier, 1),
  [269] = {.count = 1, .reusable = true}, SHIFT(189),
  [271] = {.count = 1, .reusable = true}, SHIFT(215),
  [273] = {.count = 1, .reusable = true}, SHIFT(202),
  [275] = {.count = 1, .reusable = true}, SHIFT(90),
  [277] = {.count = 1, .reusable = true}, SHIFT(218),
  [279] = {.count = 1, .reusable = true}, SHIFT(34),
  [281] = {.count = 1, .reusable = true}, SHIFT(146),
  [283] = {.count = 1, .reusable = true}, SHIFT(140),
  [285] = {.count = 1, .reusable = true}, SHIFT(128),
  [287] = {.count = 1, .reusable = true}, SHIFT(42),
  [289] = {.count = 1, .reusable = true}, SHIFT(99),
  [291] = {.count = 1, .reusable = true}, SHIFT(102),
  [293] = {.count = 1, .reusable = true}, SHIFT(212),
  [295] = {.count = 1, .reusable = true}, SHIFT(50),
  [297] = {.count = 1, .reusable = true}, SHIFT(165),
  [299] = {.count = 1, .reusable = true}, SHIFT(119),
  [301] = {.count = 1, .reusable = true}, SHIFT(7),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [305] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [307] = {.count = 1, .reusable = true}, SHIFT(18),
  [309] = {.count = 1, .reusable = true}, SHIFT(52),
  [311] = {.count = 1, .reusable = true}, SHIFT(166),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [317] = {.count = 1, .reusable = true}, SHIFT(28),
  [319] = {.count = 1, .reusable = true}, SHIFT(192),
  [321] = {.count = 1, .reusable = true}, SHIFT(110),
  [323] = {.count = 1, .reusable = true}, SHIFT(123),
  [325] = {.count = 1, .reusable = true}, SHIFT(186),
  [327] = {.count = 1, .reusable = true}, SHIFT(74),
  [329] = {.count = 1, .reusable = true}, SHIFT(153),
  [331] = {.count = 1, .reusable = true}, SHIFT(176),
  [333] = {.count = 1, .reusable = true}, SHIFT(46),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [339] = {.count = 1, .reusable = true}, SHIFT(230),
  [341] = {.count = 1, .reusable = true}, SHIFT(199),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 3),
  [355] = {.count = 1, .reusable = true}, SHIFT(8),
  [357] = {.count = 1, .reusable = true}, SHIFT(39),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [361] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [363] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [365] = {.count = 1, .reusable = true}, SHIFT(49),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [369] = {.count = 1, .reusable = true}, SHIFT(134),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [377] = {.count = 1, .reusable = true}, SHIFT(191),
  [379] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [381] = {.count = 1, .reusable = true}, SHIFT(105),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [387] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [389] = {.count = 1, .reusable = true}, SHIFT(158),
  [391] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [397] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 1),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_free_text_no_end_bracket, 1),
  [403] = {.count = 1, .reusable = true}, SHIFT(66),
  [405] = {.count = 1, .reusable = true}, SHIFT(115),
  [407] = {.count = 1, .reusable = true}, SHIFT(29),
  [409] = {.count = 1, .reusable = true}, SHIFT(4),
  [411] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 3),
  [413] = {.count = 1, .reusable = true}, SHIFT(11),
  [415] = {.count = 1, .reusable = true}, SHIFT(97),
  [417] = {.count = 1, .reusable = true}, SHIFT(82),
  [419] = {.count = 1, .reusable = true}, SHIFT(234),
  [421] = {.count = 1, .reusable = false}, SHIFT(241),
  [423] = {.count = 1, .reusable = true}, SHIFT(51),
  [425] = {.count = 1, .reusable = true}, SHIFT(225),
  [427] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 1),
  [429] = {.count = 1, .reusable = true}, SHIFT(133),
  [431] = {.count = 1, .reusable = true}, SHIFT(26),
  [433] = {.count = 1, .reusable = true}, SHIFT(41),
  [435] = {.count = 1, .reusable = true}, SHIFT(40),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_free_text, 1),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [441] = {.count = 1, .reusable = true}, SHIFT(31),
  [443] = {.count = 1, .reusable = true}, SHIFT(32),
  [445] = {.count = 1, .reusable = true}, SHIFT(62),
  [447] = {.count = 1, .reusable = true}, SHIFT(79),
  [449] = {.count = 1, .reusable = true}, SHIFT(196),
  [451] = {.count = 1, .reusable = true}, SHIFT(33),
  [453] = {.count = 1, .reusable = true}, SHIFT(37),
  [455] = {.count = 1, .reusable = true}, SHIFT(129),
  [457] = {.count = 1, .reusable = true}, SHIFT(81),
  [459] = {.count = 1, .reusable = true}, SHIFT(83),
  [461] = {.count = 1, .reusable = true}, SHIFT(143),
  [463] = {.count = 1, .reusable = true}, SHIFT(154),
  [465] = {.count = 1, .reusable = true}, SHIFT(63),
  [467] = {.count = 1, .reusable = true}, SHIFT(22),
  [469] = {.count = 1, .reusable = true}, SHIFT(21),
  [471] = {.count = 1, .reusable = true}, SHIFT(145),
  [473] = {.count = 1, .reusable = true}, SHIFT(94),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [477] = {.count = 1, .reusable = true}, SHIFT(210),
  [479] = {.count = 1, .reusable = true}, SHIFT(155),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [483] = {.count = 1, .reusable = true}, SHIFT(152),
  [485] = {.count = 1, .reusable = true}, SHIFT(89),
  [487] = {.count = 1, .reusable = false}, SHIFT(14),
  [489] = {.count = 1, .reusable = true}, SHIFT(27),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [493] = {.count = 1, .reusable = true}, SHIFT(222),
  [495] = {.count = 1, .reusable = true}, SHIFT(48),
  [497] = {.count = 1, .reusable = true}, SHIFT(170),
  [499] = {.count = 1, .reusable = true}, SHIFT(224),
  [501] = {.count = 1, .reusable = true}, SHIFT(91),
  [503] = {.count = 1, .reusable = true}, SHIFT(124),
  [505] = {.count = 1, .reusable = true}, SHIFT(38),
  [507] = {.count = 1, .reusable = true}, SHIFT(86),
  [509] = {.count = 1, .reusable = true}, SHIFT(36),
  [511] = {.count = 1, .reusable = true}, SHIFT(35),
  [513] = {.count = 1, .reusable = true}, SHIFT(5),
  [515] = {.count = 1, .reusable = true}, SHIFT(88),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [519] = {.count = 1, .reusable = true}, SHIFT(136),
  [521] = {.count = 1, .reusable = true}, REDUCE(sym_free_text_no_colon, 1),
  [523] = {.count = 1, .reusable = true}, SHIFT(87),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [527] = {.count = 1, .reusable = true}, SHIFT(73),
  [529] = {.count = 1, .reusable = true}, SHIFT(75),
  [531] = {.count = 1, .reusable = true}, SHIFT(6),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [535] = {.count = 1, .reusable = true}, SHIFT(132),
  [537] = {.count = 1, .reusable = true}, SHIFT(95),
  [539] = {.count = 1, .reusable = true}, SHIFT(9),
  [541] = {.count = 1, .reusable = true}, SHIFT(103),
  [543] = {.count = 1, .reusable = true}, SHIFT(44),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [547] = {.count = 1, .reusable = true}, SHIFT(80),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [551] = {.count = 1, .reusable = true}, SHIFT(47),
  [553] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [555] = {.count = 1, .reusable = true}, SHIFT(193),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [559] = {.count = 1, .reusable = true}, SHIFT(24),
  [561] = {.count = 1, .reusable = true}, SHIFT(30),
  [563] = {.count = 1, .reusable = true}, SHIFT(117),
  [565] = {.count = 1, .reusable = true}, SHIFT(25),
  [567] = {.count = 1, .reusable = true}, SHIFT(114),
  [569] = {.count = 1, .reusable = true}, SHIFT(113),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [573] = {.count = 1, .reusable = true}, SHIFT(242),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
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
