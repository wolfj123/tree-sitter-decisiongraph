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
      if (lookahead == '+') ADVANCE(142);
      if (lookahead == ',') ADVANCE(133);
      if (lookahead == '-') ADVANCE(141);
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(129);
      if (lookahead == '<') ADVANCE(201);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(103);
      if (lookahead == '[') ADVANCE(84);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(172);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 's') ADVANCE(151);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == 'w') ADVANCE(160);
      if (lookahead == '{') ADVANCE(93);
      if (lookahead == '}') ADVANCE(96);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
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
          lookahead == 65279) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(140);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(202);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(121);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == ']') ADVANCE(88);
      if (lookahead == '}') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(135);
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
          (lookahead < '{' || '}' < lookahead)) ADVANCE(137);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '{') ADVANCE(93);
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
          lookahead != '}') ADVANCE(137);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(122);
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
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(123);
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
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(119);
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
      if (lookahead == 'k') ADVANCE(91);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(101);
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
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(115);
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
      if (lookahead == 'r') ADVANCE(104);
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
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(108);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(125);
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
      if (lookahead == '}') ADVANCE(137);
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
          lookahead != '|') ADVANCE(140);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
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
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '>') ADVANCE(103);
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
      if (lookahead == '}') ADVANCE(96);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
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
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_free_text_token1);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '9') ||
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_terms);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_terms);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_answers);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_answers);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_consider);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_slot);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 111:
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
          lookahead != 65279) ADVANCE(137);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH_DASH);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(111);
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
          lookahead != 65279) ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(136);
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
          lookahead != 65279) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 's') ADVANCE(134);
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
          lookahead != 65279) ADVANCE(137);
      END_STATE();
    case 137:
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
          lookahead != 65279) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_POUNDimport);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(140);
      END_STATE();
    case 140:
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
          lookahead != '|') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == ']') ADVANCE(122);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(124);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'h') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'j') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'k') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(102);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(191);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'p') ADVANCE(192);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == 'x') ADVANCE(194);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(199);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(107);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(95);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(170);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'u') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'w') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(204);
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
  [19] = {.lex_state = 8, .external_lex_state = 1},
  [20] = {.lex_state = 82, .external_lex_state = 1},
  [21] = {.lex_state = 82, .external_lex_state = 1},
  [22] = {.lex_state = 82, .external_lex_state = 1},
  [23] = {.lex_state = 82, .external_lex_state = 1},
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
  [38] = {.lex_state = 82, .external_lex_state = 1},
  [39] = {.lex_state = 82, .external_lex_state = 1},
  [40] = {.lex_state = 82, .external_lex_state = 1},
  [41] = {.lex_state = 8, .external_lex_state = 1},
  [42] = {.lex_state = 82, .external_lex_state = 1},
  [43] = {.lex_state = 82, .external_lex_state = 1},
  [44] = {.lex_state = 82, .external_lex_state = 1},
  [45] = {.lex_state = 82, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 8, .external_lex_state = 1},
  [48] = {.lex_state = 82, .external_lex_state = 1},
  [49] = {.lex_state = 82, .external_lex_state = 1},
  [50] = {.lex_state = 82, .external_lex_state = 1},
  [51] = {.lex_state = 82, .external_lex_state = 1},
  [52] = {.lex_state = 82, .external_lex_state = 1},
  [53] = {.lex_state = 82, .external_lex_state = 1},
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 82, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 82, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 0, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 9, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 82, .external_lex_state = 1},
  [70] = {.lex_state = 82, .external_lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 82, .external_lex_state = 1},
  [74] = {.lex_state = 8, .external_lex_state = 1},
  [75] = {.lex_state = 8, .external_lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 9, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 6, .external_lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 6, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 6, .external_lex_state = 1},
  [86] = {.lex_state = 8, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 6, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 6, .external_lex_state = 1},
  [92] = {.lex_state = 6, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 6, .external_lex_state = 1},
  [96] = {.lex_state = 6, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 6, .external_lex_state = 1},
  [99] = {.lex_state = 82, .external_lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 6, .external_lex_state = 1},
  [105] = {.lex_state = 6, .external_lex_state = 1},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 82, .external_lex_state = 1},
  [110] = {.lex_state = 6, .external_lex_state = 1},
  [111] = {.lex_state = 82, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 8, .external_lex_state = 1},
  [116] = {.lex_state = 8, .external_lex_state = 1},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 9, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 8, .external_lex_state = 1},
  [127] = {.lex_state = 9, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 8, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 0, .external_lex_state = 1},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 9, .external_lex_state = 1},
  [148] = {.lex_state = 0, .external_lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 1},
  [152] = {.lex_state = 82, .external_lex_state = 1},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 82, .external_lex_state = 1},
  [157] = {.lex_state = 82, .external_lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 0, .external_lex_state = 1},
  [165] = {.lex_state = 0, .external_lex_state = 1},
  [166] = {.lex_state = 0, .external_lex_state = 1},
  [167] = {.lex_state = 0, .external_lex_state = 1},
  [168] = {.lex_state = 0, .external_lex_state = 1},
  [169] = {.lex_state = 0, .external_lex_state = 1},
  [170] = {.lex_state = 0, .external_lex_state = 1},
  [171] = {.lex_state = 0, .external_lex_state = 1},
  [172] = {.lex_state = 0, .external_lex_state = 1},
  [173] = {.lex_state = 0, .external_lex_state = 1},
  [174] = {.lex_state = 0, .external_lex_state = 1},
  [175] = {.lex_state = 0, .external_lex_state = 1},
  [176] = {.lex_state = 0, .external_lex_state = 1},
  [177] = {.lex_state = 82, .external_lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 82, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 0, .external_lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 82, .external_lex_state = 1},
  [188] = {.lex_state = 0, .external_lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 1, .external_lex_state = 1},
  [191] = {.lex_state = 0, .external_lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 1},
  [193] = {.lex_state = 82, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 1},
  [197] = {.lex_state = 0, .external_lex_state = 1},
  [198] = {.lex_state = 82, .external_lex_state = 1},
  [199] = {.lex_state = 0, .external_lex_state = 1},
  [200] = {.lex_state = 0, .external_lex_state = 1},
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
  [230] = {.lex_state = 0, .external_lex_state = 1},
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
  [241] = {-1},
  [242] = {.lex_state = 203},
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
    [sym_source_file] = STATE(239),
    [sym_decision_graph] = STATE(238),
    [sym__top_level_node] = STATE(50),
    [sym_todo_node] = STATE(31),
    [sym_ask_node] = STATE(31),
    [sym_call_node] = STATE(31),
    [sym_consider_node] = STATE(31),
    [sym_when_node] = STATE(31),
    [sym_section_node] = STATE(31),
    [sym_continue_node] = STATE(31),
    [sym_part_node] = STATE(31),
    [sym_end_node] = STATE(31),
    [sym_reject_node] = STATE(31),
    [sym_set_node] = STATE(31),
    [sym_import_node] = STATE(31),
    [sym_comment] = STATE(1),
    [aux_sym_decision_graph_repeat1] = STATE(3),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LBRACK_DASH_DASH] = ACTIONS(9),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(16), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(50), 1,
      sym__top_level_node,
    STATE(2), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(31), 12,
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
  [40] = 9,
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
    STATE(3), 1,
      sym_comment,
    STATE(50), 1,
      sym__top_level_node,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(10), 1,
      sym_info_sub_node,
    STATE(50), 1,
      sym__top_level_node,
    STATE(175), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(12), 1,
      sym_info_sub_node,
    STATE(50), 1,
      sym__top_level_node,
    STATE(192), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(50), 1,
      sym__top_level_node,
    STATE(236), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(50), 1,
      sym__top_level_node,
    STATE(230), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(50), 1,
      sym__top_level_node,
    STATE(198), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(50), 1,
      sym__top_level_node,
    STATE(173), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(50), 1,
      sym__top_level_node,
    STATE(161), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(50), 1,
      sym__top_level_node,
    STATE(200), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(50), 1,
      sym__top_level_node,
    STATE(175), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(50), 1,
      sym__top_level_node,
    STATE(237), 1,
      sym_decision_graph,
    STATE(31), 12,
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
    STATE(55), 1,
      sym_slot_identifier,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(93), 1,
      sym_aggregate_assignment_slot,
    STATE(111), 1,
      sym_slot_reference,
    STATE(123), 1,
      sym_assignment_slot,
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
  [659] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      aux_sym_slot_value_token1,
    STATE(19), 1,
      sym_comment,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(93), 1,
      sym_aggregate_assignment_slot,
    STATE(111), 1,
      sym_slot_reference,
    STATE(123), 1,
      sym_assignment_slot,
  [687] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_comment,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [707] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [727] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [747] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [767] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [787] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [807] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [827] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [847] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [867] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [887] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [907] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [927] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      aux_sym_slot_value_token1,
    STATE(32), 1,
      sym_comment,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(79), 1,
      sym_assignment_slot,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(93), 1,
      sym_aggregate_assignment_slot,
    STATE(111), 1,
      sym_slot_reference,
  [955] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [975] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [995] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1015] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1035] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1055] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_comment,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1075] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1095] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1115] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      aux_sym_slot_value_token1,
    STATE(41), 1,
      sym_comment,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(93), 1,
      sym_aggregate_assignment_slot,
    STATE(111), 1,
      sym_slot_reference,
    STATE(139), 1,
      sym_assignment_slot,
  [1143] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1163] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1183] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1203] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_comment,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1223] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(46), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(181), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [1243] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      aux_sym_slot_value_token1,
    STATE(47), 1,
      sym_comment,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(93), 1,
      sym_aggregate_assignment_slot,
    STATE(111), 1,
      sym_slot_reference,
    STATE(125), 1,
      sym_assignment_slot,
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
  [1371] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_slot_reference_repeat1,
    ACTIONS(206), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1392] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym__slot_values_repeat1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1413] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      aux_sym_slot_reference_repeat1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1434] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(56), 1,
      sym_comment,
    ACTIONS(181), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1451] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym__slot_values_repeat1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(216), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1472] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_when_node_repeat1,
    STATE(142), 1,
      sym_when_answer_sub_node,
    STATE(179), 1,
      sym_else_sub_node,
  [1497] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(224), 1,
      anon_sym_SLASH,
    STATE(59), 2,
      sym_comment,
      aux_sym_slot_reference_repeat1,
    ACTIONS(222), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1516] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(60), 1,
      sym_comment,
    ACTIONS(227), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1533] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_comment,
    STATE(64), 1,
      aux_sym_when_node_repeat1,
    STATE(142), 1,
      sym_when_answer_sub_node,
    STATE(160), 1,
      sym_else_sub_node,
  [1558] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      sym_answer_sub_node,
    STATE(62), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1578] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(236), 1,
      aux_sym_decision_graph_name_token1,
    STATE(63), 1,
      sym_comment,
    STATE(151), 1,
      sym_decision_graph_name,
    STATE(194), 1,
      sym_node_id_value,
    STATE(196), 1,
      sym_node_reference,
  [1600] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_when_answer_sub_node,
    STATE(64), 2,
      sym_comment,
      aux_sym_when_node_repeat1,
  [1620] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(137), 1,
      sym_term_sub_node,
  [1642] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(66), 1,
      sym_comment,
    STATE(146), 1,
      sym_answer_sub_node,
  [1664] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(120), 1,
      sym_consider_option_sub_node,
  [1686] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(137), 1,
      sym_term_sub_node,
  [1708] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(257), 1,
      anon_sym_terms,
    ACTIONS(259), 1,
      anon_sym_answers,
    STATE(69), 1,
      sym_comment,
    STATE(156), 1,
      sym_node_id,
  [1730] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(70), 1,
      sym_comment,
    ACTIONS(222), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1746] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      sym_term_sub_node,
    STATE(71), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1766] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(72), 1,
      sym_comment,
    STATE(137), 1,
      sym_term_sub_node,
  [1788] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(73), 1,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1804] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      aux_sym_slot_value_token1,
    STATE(57), 1,
      sym_slot_value,
    STATE(74), 1,
      sym_comment,
    STATE(220), 1,
      sym__slot_values,
  [1826] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    ACTIONS(270), 1,
      aux_sym_slot_value_token1,
    STATE(57), 1,
      sym_slot_value,
    STATE(75), 1,
      sym_comment,
    STATE(94), 1,
      sym__slot_values,
  [1848] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      sym_consider_option_sub_node,
    STATE(76), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1868] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(236), 1,
      aux_sym_decision_graph_name_token1,
    STATE(77), 1,
      sym_comment,
    STATE(151), 1,
      sym_decision_graph_name,
    STATE(171), 1,
      sym_node_reference,
    STATE(194), 1,
      sym_node_id_value,
  [1890] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(137), 1,
      sym_term_sub_node,
  [1912] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(79), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1927] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(80), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1942] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    STATE(81), 1,
      sym_comment,
    STATE(172), 1,
      sym_free_text,
  [1961] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(82), 1,
      sym_comment,
    STATE(120), 1,
      sym_consider_option_sub_node,
  [1980] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(287), 1,
      aux_sym_free_text_token1,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_comment,
    STATE(176), 1,
      sym_free_text_no_end_bracket,
  [1999] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      aux_sym_when_node_repeat1,
    STATE(84), 1,
      sym_comment,
    STATE(142), 1,
      sym_when_answer_sub_node,
  [2018] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_comment,
    STATE(186), 1,
      sym_free_text,
  [2037] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      aux_sym_slot_value_token1,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(86), 1,
      sym_comment,
    STATE(170), 1,
      sym_slot_reference,
  [2056] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(87), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2071] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(287), 1,
      aux_sym_free_text_token1,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_comment,
    STATE(162), 1,
      sym_free_text_no_end_bracket,
  [2090] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym__slot_values_repeat1,
    STATE(89), 1,
      sym_comment,
  [2109] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(90), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2124] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_comment,
    STATE(227), 1,
      sym_free_text,
  [2143] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(305), 1,
      anon_sym_COLON,
    ACTIONS(307), 1,
      aux_sym_free_text_token1,
    STATE(92), 1,
      sym_comment,
    STATE(212), 1,
      sym_free_text_no_colon,
  [2162] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(93), 1,
      sym_comment,
    ACTIONS(301), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2177] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(94), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2192] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(307), 1,
      aux_sym_free_text_token1,
    ACTIONS(311), 1,
      anon_sym_COLON,
    STATE(95), 1,
      sym_comment,
    STATE(216), 1,
      sym_free_text_no_colon,
  [2211] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(287), 1,
      aux_sym_free_text_token1,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    STATE(96), 1,
      sym_comment,
    STATE(191), 1,
      sym_free_text_no_end_bracket,
  [2230] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      aux_sym_when_node_repeat1,
    STATE(97), 1,
      sym_comment,
    STATE(142), 1,
      sym_when_answer_sub_node,
  [2249] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_comment,
    STATE(165), 1,
      sym_free_text,
  [2268] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(317), 1,
      anon_sym_title,
    STATE(99), 1,
      sym_comment,
    STATE(177), 1,
      sym_node_id,
  [2287] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(100), 1,
      sym_comment,
    ACTIONS(319), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2302] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_comment,
    STATE(153), 1,
      sym_else_sub_node,
  [2321] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_comment,
    STATE(144), 1,
      sym_terms_sub_node,
    STATE(159), 1,
      sym_answers_sub_node,
  [2340] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym__slot_values_repeat1,
    STATE(103), 1,
      sym_comment,
  [2359] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_comment,
    STATE(235), 1,
      sym_free_text,
  [2378] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(287), 1,
      aux_sym_free_text_token1,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_comment,
    STATE(202), 1,
      sym_free_text_no_end_bracket,
  [2397] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      sym_comment,
    STATE(182), 1,
      sym_else_sub_node,
  [2416] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(107), 1,
      sym_comment,
    STATE(146), 1,
      sym_answer_sub_node,
  [2435] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(325), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_comment,
    STATE(128), 1,
      sym_terms_sub_node,
    STATE(184), 1,
      sym_answers_sub_node,
  [2454] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(335), 1,
      anon_sym_text,
    STATE(109), 1,
      sym_comment,
    STATE(187), 1,
      sym_node_id,
  [2473] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_comment,
    STATE(197), 1,
      sym_free_text,
  [2492] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(339), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(341), 1,
      anon_sym_EQ,
    STATE(111), 1,
      sym_comment,
  [2508] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    ACTIONS(345), 1,
      anon_sym_LT,
    STATE(112), 1,
      sym_comment,
  [2524] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(347), 1,
      anon_sym_LBRACK,
    ACTIONS(349), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(113), 1,
      sym_comment,
  [2540] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(114), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2554] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(270), 1,
      aux_sym_slot_value_token1,
    STATE(80), 1,
      sym_slot_value,
    STATE(115), 1,
      sym_comment,
  [2570] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      aux_sym_slot_value_token1,
    STATE(70), 1,
      sym_slot_identifier,
    STATE(116), 1,
      sym_comment,
  [2586] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_text_sub_node,
    STATE(117), 1,
      sym_comment,
  [2602] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(118), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2616] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym_comment,
    STATE(145), 1,
      sym_slot_sub_node,
  [2632] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(120), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2646] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(361), 1,
      aux_sym_decision_graph_name_token1,
    STATE(121), 1,
      sym_comment,
    STATE(215), 1,
      sym_decision_graph_name,
  [2662] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(106), 1,
      sym_consider_options_sub_node,
    STATE(122), 1,
      sym_comment,
  [2678] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(365), 1,
      anon_sym_COLON,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    STATE(123), 1,
      sym_comment,
  [2694] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    STATE(8), 1,
      sym_node_id,
    STATE(124), 1,
      sym_comment,
  [2710] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    ACTIONS(369), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      sym_comment,
  [2726] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(270), 1,
      aux_sym_slot_value_token1,
    STATE(56), 1,
      sym_slot_value,
    STATE(126), 1,
      sym_comment,
  [2742] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(371), 1,
      aux_sym_decision_graph_name_token1,
    STATE(127), 1,
      sym_comment,
    STATE(163), 1,
      sym_node_id_value,
  [2758] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(128), 1,
      sym_comment,
    STATE(159), 1,
      sym_answers_sub_node,
  [2774] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(129), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2788] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(130), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2802] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(379), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(131), 1,
      sym_comment,
  [2818] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(132), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2832] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(133), 1,
      sym_comment,
  [2848] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(357), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_slot_sub_node,
    STATE(134), 1,
      sym_comment,
  [2864] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(270), 1,
      aux_sym_slot_value_token1,
    STATE(103), 1,
      sym_slot_value,
    STATE(135), 1,
      sym_comment,
  [2880] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(353), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_text_sub_node,
    STATE(136), 1,
      sym_comment,
  [2896] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(137), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2910] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(138), 1,
      sym_comment,
    ACTIONS(391), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2924] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(367), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(139), 1,
      sym_comment,
  [2940] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(140), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [2954] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(141), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2968] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(142), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2982] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(143), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2996] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_comment,
    STATE(181), 1,
      sym_answers_sub_node,
  [3012] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(363), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_consider_options_sub_node,
    STATE(145), 1,
      sym_comment,
  [3028] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(146), 1,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3042] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(371), 1,
      aux_sym_decision_graph_name_token1,
    STATE(147), 1,
      sym_comment,
    STATE(219), 1,
      sym_node_id_value,
  [3058] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(148), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3072] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    ACTIONS(407), 1,
      anon_sym_GT,
    STATE(149), 1,
      sym_comment,
  [3088] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(150), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3102] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(411), 1,
      anon_sym_GT,
    STATE(151), 1,
      sym_comment,
  [3115] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(413), 1,
      anon_sym_else,
    STATE(152), 1,
      sym_comment,
  [3128] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(333), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      sym_comment,
  [3141] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(415), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_comment,
  [3154] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(417), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym_comment,
  [3167] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(419), 1,
      anon_sym_terms,
    STATE(156), 1,
      sym_comment,
  [3180] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(259), 1,
      anon_sym_answers,
    STATE(157), 1,
      sym_comment,
  [3193] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(421), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_comment,
  [3206] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
  [3219] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_comment,
  [3232] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_comment,
  [3245] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_comment,
  [3258] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_comment,
  [3271] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_comment,
  [3284] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_comment,
  [3297] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(435), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym_comment,
  [3310] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(437), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_comment,
  [3323] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(439), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym_comment,
  [3336] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(441), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_comment,
  [3349] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      sym_comment,
  [3362] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_comment,
  [3375] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_comment,
  [3388] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      sym_comment,
  [3401] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_comment,
  [3414] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym_comment,
  [3427] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      sym_comment,
  [3440] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(455), 1,
      anon_sym_title,
    STATE(177), 1,
      sym_comment,
  [3453] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(457), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym_comment,
  [3466] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_comment,
  [3479] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(459), 1,
      anon_sym_options,
    STATE(180), 1,
      sym_comment,
  [3492] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym_comment,
  [3505] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      sym_comment,
  [3518] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(465), 1,
      anon_sym_COLON,
    STATE(183), 1,
      sym_comment,
  [3531] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_comment,
  [3544] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_comment,
  [3557] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_comment,
  [3570] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(473), 1,
      anon_sym_text,
    STATE(187), 1,
      sym_comment,
  [3583] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_comment,
  [3596] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(477), 1,
      anon_sym_COLON,
    STATE(189), 1,
      sym_comment,
  [3609] = 4,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(479), 1,
      sym_file_path,
    ACTIONS(481), 1,
      anon_sym_LT_DASH_DASH,
    STATE(190), 1,
      sym_comment,
  [3622] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_comment,
  [3635] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      sym_comment,
  [3648] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(485), 1,
      anon_sym_slot,
    STATE(193), 1,
      sym_comment,
  [3661] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      sym_comment,
  [3674] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym_comment,
  [3687] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      sym_comment,
  [3700] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(283), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym_comment,
  [3713] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(493), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(198), 1,
      sym_comment,
  [3726] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(495), 1,
      anon_sym_COLON,
    STATE(199), 1,
      sym_comment,
  [3739] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(497), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym_comment,
  [3752] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(499), 1,
      anon_sym_COLON,
    STATE(201), 1,
      sym_comment,
  [3765] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_comment,
  [3778] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_comment,
  [3791] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_comment,
  [3804] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(507), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_comment,
  [3817] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(509), 1,
      anon_sym_COLON,
    STATE(206), 1,
      sym_comment,
  [3830] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(511), 1,
      anon_sym_COLON,
    STATE(207), 1,
      sym_comment,
  [3843] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(513), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym_comment,
  [3856] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym_comment,
  [3869] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(517), 1,
      anon_sym_COLON,
    STATE(210), 1,
      sym_comment,
  [3882] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(519), 1,
      anon_sym_COLON,
    STATE(211), 1,
      sym_comment,
  [3895] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(521), 1,
      anon_sym_COLON,
    STATE(212), 1,
      sym_comment,
  [3908] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym_comment,
  [3921] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(525), 1,
      anon_sym_COLON,
    STATE(214), 1,
      sym_comment,
  [3934] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(527), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_comment,
  [3947] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(216), 1,
      sym_comment,
  [3960] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      sym_comment,
  [3973] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(407), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym_comment,
  [3986] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(533), 1,
      anon_sym_LT,
    STATE(219), 1,
      sym_comment,
  [3999] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(535), 1,
      anon_sym_COLON,
    STATE(220), 1,
      sym_comment,
  [4012] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(537), 1,
      anon_sym_COLON,
    STATE(221), 1,
      sym_comment,
  [4025] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(539), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym_comment,
  [4038] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
  [4051] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(224), 1,
      sym_comment,
  [4064] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      sym_comment,
  [4077] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(547), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym_comment,
  [4090] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_comment,
  [4103] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(549), 1,
      anon_sym_COLON,
    STATE(228), 1,
      sym_comment,
  [4116] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(551), 1,
      anon_sym_COLON,
    STATE(229), 1,
      sym_comment,
  [4129] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_comment,
  [4142] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(553), 1,
      anon_sym_COLON,
    STATE(231), 1,
      sym_comment,
  [4155] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym_comment,
  [4168] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(557), 1,
      anon_sym_COLON,
    STATE(233), 1,
      sym_comment,
  [4181] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(559), 1,
      anon_sym_COLON,
    STATE(234), 1,
      sym_comment,
  [4194] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_comment,
  [4207] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_comment,
  [4220] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
  [4233] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
    STATE(238), 1,
      sym_comment,
  [4246] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(569), 1,
      ts_builtin_sym_end,
    STATE(239), 1,
      sym_comment,
  [4259] = 1,
    ACTIONS(571), 1,
      ts_builtin_sym_end,
  [4263] = 1,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
  [4267] = 1,
    ACTIONS(575), 1,
      aux_sym_comment_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
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
  [SMALL_STATE(20)] = 687,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 727,
  [SMALL_STATE(23)] = 747,
  [SMALL_STATE(24)] = 767,
  [SMALL_STATE(25)] = 787,
  [SMALL_STATE(26)] = 807,
  [SMALL_STATE(27)] = 827,
  [SMALL_STATE(28)] = 847,
  [SMALL_STATE(29)] = 867,
  [SMALL_STATE(30)] = 887,
  [SMALL_STATE(31)] = 907,
  [SMALL_STATE(32)] = 927,
  [SMALL_STATE(33)] = 955,
  [SMALL_STATE(34)] = 975,
  [SMALL_STATE(35)] = 995,
  [SMALL_STATE(36)] = 1015,
  [SMALL_STATE(37)] = 1035,
  [SMALL_STATE(38)] = 1055,
  [SMALL_STATE(39)] = 1075,
  [SMALL_STATE(40)] = 1095,
  [SMALL_STATE(41)] = 1115,
  [SMALL_STATE(42)] = 1143,
  [SMALL_STATE(43)] = 1163,
  [SMALL_STATE(44)] = 1183,
  [SMALL_STATE(45)] = 1203,
  [SMALL_STATE(46)] = 1223,
  [SMALL_STATE(47)] = 1243,
  [SMALL_STATE(48)] = 1271,
  [SMALL_STATE(49)] = 1291,
  [SMALL_STATE(50)] = 1311,
  [SMALL_STATE(51)] = 1331,
  [SMALL_STATE(52)] = 1351,
  [SMALL_STATE(53)] = 1371,
  [SMALL_STATE(54)] = 1392,
  [SMALL_STATE(55)] = 1413,
  [SMALL_STATE(56)] = 1434,
  [SMALL_STATE(57)] = 1451,
  [SMALL_STATE(58)] = 1472,
  [SMALL_STATE(59)] = 1497,
  [SMALL_STATE(60)] = 1516,
  [SMALL_STATE(61)] = 1533,
  [SMALL_STATE(62)] = 1558,
  [SMALL_STATE(63)] = 1578,
  [SMALL_STATE(64)] = 1600,
  [SMALL_STATE(65)] = 1620,
  [SMALL_STATE(66)] = 1642,
  [SMALL_STATE(67)] = 1664,
  [SMALL_STATE(68)] = 1686,
  [SMALL_STATE(69)] = 1708,
  [SMALL_STATE(70)] = 1730,
  [SMALL_STATE(71)] = 1746,
  [SMALL_STATE(72)] = 1766,
  [SMALL_STATE(73)] = 1788,
  [SMALL_STATE(74)] = 1804,
  [SMALL_STATE(75)] = 1826,
  [SMALL_STATE(76)] = 1848,
  [SMALL_STATE(77)] = 1868,
  [SMALL_STATE(78)] = 1890,
  [SMALL_STATE(79)] = 1912,
  [SMALL_STATE(80)] = 1927,
  [SMALL_STATE(81)] = 1942,
  [SMALL_STATE(82)] = 1961,
  [SMALL_STATE(83)] = 1980,
  [SMALL_STATE(84)] = 1999,
  [SMALL_STATE(85)] = 2018,
  [SMALL_STATE(86)] = 2037,
  [SMALL_STATE(87)] = 2056,
  [SMALL_STATE(88)] = 2071,
  [SMALL_STATE(89)] = 2090,
  [SMALL_STATE(90)] = 2109,
  [SMALL_STATE(91)] = 2124,
  [SMALL_STATE(92)] = 2143,
  [SMALL_STATE(93)] = 2162,
  [SMALL_STATE(94)] = 2177,
  [SMALL_STATE(95)] = 2192,
  [SMALL_STATE(96)] = 2211,
  [SMALL_STATE(97)] = 2230,
  [SMALL_STATE(98)] = 2249,
  [SMALL_STATE(99)] = 2268,
  [SMALL_STATE(100)] = 2287,
  [SMALL_STATE(101)] = 2302,
  [SMALL_STATE(102)] = 2321,
  [SMALL_STATE(103)] = 2340,
  [SMALL_STATE(104)] = 2359,
  [SMALL_STATE(105)] = 2378,
  [SMALL_STATE(106)] = 2397,
  [SMALL_STATE(107)] = 2416,
  [SMALL_STATE(108)] = 2435,
  [SMALL_STATE(109)] = 2454,
  [SMALL_STATE(110)] = 2473,
  [SMALL_STATE(111)] = 2492,
  [SMALL_STATE(112)] = 2508,
  [SMALL_STATE(113)] = 2524,
  [SMALL_STATE(114)] = 2540,
  [SMALL_STATE(115)] = 2554,
  [SMALL_STATE(116)] = 2570,
  [SMALL_STATE(117)] = 2586,
  [SMALL_STATE(118)] = 2602,
  [SMALL_STATE(119)] = 2616,
  [SMALL_STATE(120)] = 2632,
  [SMALL_STATE(121)] = 2646,
  [SMALL_STATE(122)] = 2662,
  [SMALL_STATE(123)] = 2678,
  [SMALL_STATE(124)] = 2694,
  [SMALL_STATE(125)] = 2710,
  [SMALL_STATE(126)] = 2726,
  [SMALL_STATE(127)] = 2742,
  [SMALL_STATE(128)] = 2758,
  [SMALL_STATE(129)] = 2774,
  [SMALL_STATE(130)] = 2788,
  [SMALL_STATE(131)] = 2802,
  [SMALL_STATE(132)] = 2818,
  [SMALL_STATE(133)] = 2832,
  [SMALL_STATE(134)] = 2848,
  [SMALL_STATE(135)] = 2864,
  [SMALL_STATE(136)] = 2880,
  [SMALL_STATE(137)] = 2896,
  [SMALL_STATE(138)] = 2910,
  [SMALL_STATE(139)] = 2924,
  [SMALL_STATE(140)] = 2940,
  [SMALL_STATE(141)] = 2954,
  [SMALL_STATE(142)] = 2968,
  [SMALL_STATE(143)] = 2982,
  [SMALL_STATE(144)] = 2996,
  [SMALL_STATE(145)] = 3012,
  [SMALL_STATE(146)] = 3028,
  [SMALL_STATE(147)] = 3042,
  [SMALL_STATE(148)] = 3058,
  [SMALL_STATE(149)] = 3072,
  [SMALL_STATE(150)] = 3088,
  [SMALL_STATE(151)] = 3102,
  [SMALL_STATE(152)] = 3115,
  [SMALL_STATE(153)] = 3128,
  [SMALL_STATE(154)] = 3141,
  [SMALL_STATE(155)] = 3154,
  [SMALL_STATE(156)] = 3167,
  [SMALL_STATE(157)] = 3180,
  [SMALL_STATE(158)] = 3193,
  [SMALL_STATE(159)] = 3206,
  [SMALL_STATE(160)] = 3219,
  [SMALL_STATE(161)] = 3232,
  [SMALL_STATE(162)] = 3245,
  [SMALL_STATE(163)] = 3258,
  [SMALL_STATE(164)] = 3271,
  [SMALL_STATE(165)] = 3284,
  [SMALL_STATE(166)] = 3297,
  [SMALL_STATE(167)] = 3310,
  [SMALL_STATE(168)] = 3323,
  [SMALL_STATE(169)] = 3336,
  [SMALL_STATE(170)] = 3349,
  [SMALL_STATE(171)] = 3362,
  [SMALL_STATE(172)] = 3375,
  [SMALL_STATE(173)] = 3388,
  [SMALL_STATE(174)] = 3401,
  [SMALL_STATE(175)] = 3414,
  [SMALL_STATE(176)] = 3427,
  [SMALL_STATE(177)] = 3440,
  [SMALL_STATE(178)] = 3453,
  [SMALL_STATE(179)] = 3466,
  [SMALL_STATE(180)] = 3479,
  [SMALL_STATE(181)] = 3492,
  [SMALL_STATE(182)] = 3505,
  [SMALL_STATE(183)] = 3518,
  [SMALL_STATE(184)] = 3531,
  [SMALL_STATE(185)] = 3544,
  [SMALL_STATE(186)] = 3557,
  [SMALL_STATE(187)] = 3570,
  [SMALL_STATE(188)] = 3583,
  [SMALL_STATE(189)] = 3596,
  [SMALL_STATE(190)] = 3609,
  [SMALL_STATE(191)] = 3622,
  [SMALL_STATE(192)] = 3635,
  [SMALL_STATE(193)] = 3648,
  [SMALL_STATE(194)] = 3661,
  [SMALL_STATE(195)] = 3674,
  [SMALL_STATE(196)] = 3687,
  [SMALL_STATE(197)] = 3700,
  [SMALL_STATE(198)] = 3713,
  [SMALL_STATE(199)] = 3726,
  [SMALL_STATE(200)] = 3739,
  [SMALL_STATE(201)] = 3752,
  [SMALL_STATE(202)] = 3765,
  [SMALL_STATE(203)] = 3778,
  [SMALL_STATE(204)] = 3791,
  [SMALL_STATE(205)] = 3804,
  [SMALL_STATE(206)] = 3817,
  [SMALL_STATE(207)] = 3830,
  [SMALL_STATE(208)] = 3843,
  [SMALL_STATE(209)] = 3856,
  [SMALL_STATE(210)] = 3869,
  [SMALL_STATE(211)] = 3882,
  [SMALL_STATE(212)] = 3895,
  [SMALL_STATE(213)] = 3908,
  [SMALL_STATE(214)] = 3921,
  [SMALL_STATE(215)] = 3934,
  [SMALL_STATE(216)] = 3947,
  [SMALL_STATE(217)] = 3960,
  [SMALL_STATE(218)] = 3973,
  [SMALL_STATE(219)] = 3986,
  [SMALL_STATE(220)] = 3999,
  [SMALL_STATE(221)] = 4012,
  [SMALL_STATE(222)] = 4025,
  [SMALL_STATE(223)] = 4038,
  [SMALL_STATE(224)] = 4051,
  [SMALL_STATE(225)] = 4064,
  [SMALL_STATE(226)] = 4077,
  [SMALL_STATE(227)] = 4090,
  [SMALL_STATE(228)] = 4103,
  [SMALL_STATE(229)] = 4116,
  [SMALL_STATE(230)] = 4129,
  [SMALL_STATE(231)] = 4142,
  [SMALL_STATE(232)] = 4155,
  [SMALL_STATE(233)] = 4168,
  [SMALL_STATE(234)] = 4181,
  [SMALL_STATE(235)] = 4194,
  [SMALL_STATE(236)] = 4207,
  [SMALL_STATE(237)] = 4220,
  [SMALL_STATE(238)] = 4233,
  [SMALL_STATE(239)] = 4246,
  [SMALL_STATE(240)] = 4259,
  [SMALL_STATE(241)] = 4263,
  [SMALL_STATE(242)] = 4267,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(242),
  [5] = {.count = 1, .reusable = true}, SHIFT(240),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(124),
  [11] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [13] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [16] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(124),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(99),
  [23] = {.count = 1, .reusable = true}, SHIFT(114),
  [25] = {.count = 1, .reusable = true}, SHIFT(148),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [31] = {.count = 1, .reusable = true}, SHIFT(234),
  [33] = {.count = 1, .reusable = true}, SHIFT(233),
  [35] = {.count = 1, .reusable = true}, SHIFT(231),
  [37] = {.count = 1, .reusable = true}, SHIFT(147),
  [39] = {.count = 1, .reusable = true}, SHIFT(229),
  [41] = {.count = 1, .reusable = true}, SHIFT(228),
  [43] = {.count = 1, .reusable = true}, SHIFT(226),
  [45] = {.count = 1, .reusable = true}, SHIFT(225),
  [47] = {.count = 1, .reusable = true}, SHIFT(224),
  [49] = {.count = 1, .reusable = true}, SHIFT(222),
  [51] = {.count = 1, .reusable = true}, SHIFT(221),
  [53] = {.count = 1, .reusable = true}, SHIFT(121),
  [55] = {.count = 1, .reusable = true}, SHIFT(214),
  [57] = {.count = 1, .reusable = true}, SHIFT(210),
  [59] = {.count = 1, .reusable = true}, SHIFT(208),
  [61] = {.count = 1, .reusable = true}, SHIFT(207),
  [63] = {.count = 1, .reusable = true}, SHIFT(206),
  [65] = {.count = 1, .reusable = true}, SHIFT(205),
  [67] = {.count = 1, .reusable = true}, SHIFT(204),
  [69] = {.count = 1, .reusable = true}, SHIFT(203),
  [71] = {.count = 1, .reusable = true}, SHIFT(201),
  [73] = {.count = 1, .reusable = true}, SHIFT(199),
  [75] = {.count = 1, .reusable = false}, SHIFT(155),
  [77] = {.count = 1, .reusable = false}, SHIFT(73),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [83] = {.count = 1, .reusable = true}, SHIFT(73),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 3),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [181] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [183] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(126),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 4),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 4),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [194] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [196] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 2),
  [208] = {.count = 1, .reusable = true}, SHIFT(116),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [212] = {.count = 1, .reusable = true}, SHIFT(126),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 1),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [218] = {.count = 1, .reusable = true}, SHIFT(35),
  [220] = {.count = 1, .reusable = true}, SHIFT(17),
  [222] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2), SHIFT_REPEAT(116),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [229] = {.count = 1, .reusable = true}, SHIFT(26),
  [231] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(95),
  [234] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [236] = {.count = 1, .reusable = true}, SHIFT(149),
  [238] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2), SHIFT_REPEAT(19),
  [243] = {.count = 1, .reusable = true}, SHIFT(92),
  [245] = {.count = 1, .reusable = true}, SHIFT(213),
  [247] = {.count = 1, .reusable = true}, SHIFT(95),
  [249] = {.count = 1, .reusable = true}, SHIFT(217),
  [251] = {.count = 1, .reusable = true}, SHIFT(74),
  [253] = {.count = 1, .reusable = true}, SHIFT(129),
  [255] = {.count = 1, .reusable = true}, SHIFT(232),
  [257] = {.count = 1, .reusable = true}, SHIFT(168),
  [259] = {.count = 1, .reusable = true}, SHIFT(154),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(92),
  [264] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_slot_identifier, 1),
  [268] = {.count = 1, .reusable = true}, SHIFT(135),
  [270] = {.count = 1, .reusable = true}, SHIFT(60),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(74),
  [275] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [277] = {.count = 1, .reusable = true}, SHIFT(188),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [283] = {.count = 1, .reusable = true}, SHIFT(42),
  [285] = {.count = 1, .reusable = true}, SHIFT(150),
  [287] = {.count = 1, .reusable = true}, SHIFT(140),
  [289] = {.count = 1, .reusable = true}, SHIFT(113),
  [291] = {.count = 1, .reusable = true}, SHIFT(19),
  [293] = {.count = 1, .reusable = true}, SHIFT(185),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [297] = {.count = 1, .reusable = true}, SHIFT(18),
  [299] = {.count = 1, .reusable = true}, SHIFT(100),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [303] = {.count = 1, .reusable = true}, SHIFT(143),
  [305] = {.count = 1, .reusable = true}, SHIFT(91),
  [307] = {.count = 1, .reusable = true}, SHIFT(211),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [311] = {.count = 1, .reusable = true}, SHIFT(7),
  [313] = {.count = 1, .reusable = true}, SHIFT(52),
  [315] = {.count = 1, .reusable = true}, SHIFT(164),
  [317] = {.count = 1, .reusable = true}, SHIFT(178),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [321] = {.count = 1, .reusable = true}, SHIFT(27),
  [323] = {.count = 1, .reusable = true}, SHIFT(152),
  [325] = {.count = 1, .reusable = true}, SHIFT(69),
  [327] = {.count = 1, .reusable = true}, SHIFT(87),
  [329] = {.count = 1, .reusable = true}, SHIFT(132),
  [331] = {.count = 1, .reusable = true}, SHIFT(131),
  [333] = {.count = 1, .reusable = true}, SHIFT(30),
  [335] = {.count = 1, .reusable = true}, SHIFT(189),
  [337] = {.count = 1, .reusable = true}, SHIFT(51),
  [339] = {.count = 1, .reusable = true}, SHIFT(75),
  [341] = {.count = 1, .reusable = true}, SHIFT(115),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [345] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [347] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [353] = {.count = 1, .reusable = true}, SHIFT(109),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [357] = {.count = 1, .reusable = true}, SHIFT(193),
  [359] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [361] = {.count = 1, .reusable = true}, SHIFT(218),
  [363] = {.count = 1, .reusable = true}, SHIFT(180),
  [365] = {.count = 1, .reusable = true}, SHIFT(9),
  [367] = {.count = 1, .reusable = true}, SHIFT(32),
  [369] = {.count = 1, .reusable = true}, SHIFT(20),
  [371] = {.count = 1, .reusable = true}, SHIFT(112),
  [373] = {.count = 1, .reusable = true}, SHIFT(157),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [389] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [393] = {.count = 1, .reusable = true}, SHIFT(33),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_free_text_no_end_bracket, 1),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [399] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 1),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [403] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_free_text, 1),
  [411] = {.count = 1, .reusable = true}, SHIFT(127),
  [413] = {.count = 1, .reusable = true}, SHIFT(155),
  [415] = {.count = 1, .reusable = true}, SHIFT(107),
  [417] = {.count = 1, .reusable = true}, SHIFT(11),
  [419] = {.count = 1, .reusable = true}, SHIFT(169),
  [421] = {.count = 1, .reusable = true}, SHIFT(105),
  [423] = {.count = 1, .reusable = true}, SHIFT(29),
  [425] = {.count = 1, .reusable = true}, SHIFT(37),
  [427] = {.count = 1, .reusable = true}, SHIFT(40),
  [429] = {.count = 1, .reusable = true}, SHIFT(21),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 3),
  [433] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [435] = {.count = 1, .reusable = true}, SHIFT(85),
  [437] = {.count = 1, .reusable = true}, SHIFT(82),
  [439] = {.count = 1, .reusable = true}, SHIFT(78),
  [441] = {.count = 1, .reusable = true}, SHIFT(65),
  [443] = {.count = 1, .reusable = true}, SHIFT(195),
  [445] = {.count = 1, .reusable = true}, SHIFT(22),
  [447] = {.count = 1, .reusable = true}, SHIFT(23),
  [449] = {.count = 1, .reusable = true}, SHIFT(138),
  [451] = {.count = 1, .reusable = true}, SHIFT(24),
  [453] = {.count = 1, .reusable = true}, SHIFT(25),
  [455] = {.count = 1, .reusable = true}, SHIFT(158),
  [457] = {.count = 1, .reusable = true}, SHIFT(83),
  [459] = {.count = 1, .reusable = true}, SHIFT(167),
  [461] = {.count = 1, .reusable = true}, SHIFT(45),
  [463] = {.count = 1, .reusable = true}, SHIFT(44),
  [465] = {.count = 1, .reusable = true}, SHIFT(86),
  [467] = {.count = 1, .reusable = true}, SHIFT(28),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [471] = {.count = 1, .reusable = true}, SHIFT(209),
  [473] = {.count = 1, .reusable = true}, SHIFT(166),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [477] = {.count = 1, .reusable = true}, SHIFT(98),
  [479] = {.count = 1, .reusable = true}, SHIFT(174),
  [481] = {.count = 1, .reusable = false}, SHIFT(242),
  [483] = {.count = 1, .reusable = true}, SHIFT(34),
  [485] = {.count = 1, .reusable = true}, SHIFT(183),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 1),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [491] = {.count = 1, .reusable = true}, SHIFT(36),
  [493] = {.count = 1, .reusable = true}, SHIFT(43),
  [495] = {.count = 1, .reusable = true}, SHIFT(47),
  [497] = {.count = 1, .reusable = true}, SHIFT(223),
  [499] = {.count = 1, .reusable = true}, SHIFT(88),
  [501] = {.count = 1, .reusable = true}, SHIFT(133),
  [503] = {.count = 1, .reusable = true}, SHIFT(48),
  [505] = {.count = 1, .reusable = true}, SHIFT(49),
  [507] = {.count = 1, .reusable = true}, SHIFT(4),
  [509] = {.count = 1, .reusable = true}, SHIFT(84),
  [511] = {.count = 1, .reusable = true}, SHIFT(134),
  [513] = {.count = 1, .reusable = true}, SHIFT(77),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [517] = {.count = 1, .reusable = true}, SHIFT(136),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_free_text_no_colon, 1),
  [521] = {.count = 1, .reusable = true}, SHIFT(104),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [525] = {.count = 1, .reusable = true}, SHIFT(81),
  [527] = {.count = 1, .reusable = true}, SHIFT(190),
  [529] = {.count = 1, .reusable = true}, SHIFT(6),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [533] = {.count = 1, .reusable = false}, SHIFT(14),
  [535] = {.count = 1, .reusable = true}, SHIFT(13),
  [537] = {.count = 1, .reusable = true}, SHIFT(41),
  [539] = {.count = 1, .reusable = true}, SHIFT(96),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [543] = {.count = 1, .reusable = true}, SHIFT(39),
  [545] = {.count = 1, .reusable = true}, SHIFT(38),
  [547] = {.count = 1, .reusable = true}, SHIFT(5),
  [549] = {.count = 1, .reusable = true}, SHIFT(97),
  [551] = {.count = 1, .reusable = true}, SHIFT(119),
  [553] = {.count = 1, .reusable = true}, SHIFT(63),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [557] = {.count = 1, .reusable = true}, SHIFT(117),
  [559] = {.count = 1, .reusable = true}, SHIFT(110),
  [561] = {.count = 1, .reusable = true}, SHIFT(118),
  [563] = {.count = 1, .reusable = true}, SHIFT(130),
  [565] = {.count = 1, .reusable = true}, SHIFT(141),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [569] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [571] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [575] = {.count = 1, .reusable = true}, SHIFT(241),
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
