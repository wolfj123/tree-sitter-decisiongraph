#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 255
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_LBRACK = 1,
  anon_sym_todo = 2,
  anon_sym_COLON = 3,
  anon_sym_RBRACK = 4,
  sym_free_text = 5,
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
  sym_ask_node = 44,
  sym_text_sub_node = 45,
  sym_terms_sub_node = 46,
  sym_term_sub_node = 47,
  sym_answers_sub_node = 48,
  sym_answer_sub_node = 49,
  sym_call_node = 50,
  sym_consider_node = 51,
  sym_slot_sub_node = 52,
  sym_consider_options_sub_node = 53,
  sym_consider_option_sub_node = 54,
  sym_else_sub_node = 55,
  sym_when_node = 56,
  sym_when_answer_sub_node = 57,
  sym_section_node = 58,
  sym_info_sub_node = 59,
  sym_continue_node = 60,
  sym_part_node = 61,
  sym_end_node = 62,
  sym_reject_node = 63,
  sym_set_node = 64,
  sym_assignment_slot = 65,
  sym_aggregate_assignment_slot = 66,
  sym_atomic_assignment_slot = 67,
  sym_slot = 68,
  sym__slot_values = 69,
  sym_slot_value = 70,
  sym__slot_identifier = 71,
  sym_import_node = 72,
  sym_decision_graph_name = 73,
  sym_node_id = 74,
  sym_node_id_value = 75,
  sym_comment = 76,
  aux_sym_decision_graph_repeat1 = 77,
  aux_sym_terms_sub_node_repeat1 = 78,
  aux_sym_answers_sub_node_repeat1 = 79,
  aux_sym_consider_options_sub_node_repeat1 = 80,
  aux_sym_when_node_repeat1 = 81,
  aux_sym_slot_repeat1 = 82,
  aux_sym__slot_values_repeat1 = 83,
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
  [sym_ask_node] = "ask_node",
  [sym_text_sub_node] = "text_sub_node",
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
  [sym_slot] = "slot",
  [sym__slot_values] = "_slot_values",
  [sym_slot_value] = "slot_value",
  [sym__slot_identifier] = "_slot_identifier",
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
  [sym_ask_node] = sym_ask_node,
  [sym_text_sub_node] = sym_text_sub_node,
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
  [sym_slot] = sym_slot,
  [sym__slot_values] = sym__slot_values,
  [sym_slot_value] = sym_slot_value,
  [sym__slot_identifier] = sym__slot_identifier,
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
  [aux_sym_slot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__slot_values_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_answer = 1,
  field_answers = 2,
  field_graph = 3,
  field_id = 4,
  field_term = 5,
  field_terms = 6,
  field_text = 7,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_answer] = "answer",
  [field_answers] = "answers",
  [field_graph] = "graph",
  [field_id] = "id",
  [field_term] = "term",
  [field_terms] = "terms",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[17] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 1},
  [5] = {.index = 7, .length = 3},
  [6] = {.index = 10, .length = 1},
  [7] = {.index = 11, .length = 4},
  [8] = {.index = 15, .length = 2},
  [9] = {.index = 17, .length = 2},
  [10] = {.index = 19, .length = 1},
  [11] = {.index = 20, .length = 1},
  [12] = {.index = 21, .length = 2},
  [13] = {.index = 23, .length = 1},
  [14] = {.index = 24, .length = 1},
  [15] = {.index = 25, .length = 1},
  [16] = {.index = 26, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_id, 1},
  [1] =
    {field_answers, 4},
    {field_text, 3},
  [3] =
    {field_answers, 5},
    {field_terms, 4},
    {field_text, 3},
  [6] =
    {field_graph, 3},
  [7] =
    {field_answers, 5},
    {field_id, 1},
    {field_text, 4},
  [10] =
    {field_text, 3},
  [11] =
    {field_answers, 6},
    {field_id, 1},
    {field_terms, 5},
    {field_text, 4},
  [15] =
    {field_graph, 4},
    {field_id, 1},
  [17] =
    {field_id, 1},
    {field_text, 4},
  [19] =
    {field_terms, 3},
  [20] =
    {field_answers, 3},
  [21] =
    {field_id, 1},
    {field_terms, 4},
  [23] =
    {field_term, 2},
  [24] =
    {field_graph, 2},
  [25] =
    {field_term, 3},
  [26] =
    {field_answer, 1},
    {field_graph, 3},
};

static TSSymbol ts_alias_sequences[17][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(142);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == ';') ADVANCE(130);
      if (lookahead == '<') ADVANCE(202);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == 'r') ADVANCE(151);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(153);
      if (lookahead == 'w') ADVANCE(161);
      if (lookahead == '{') ADVANCE(94);
      if (lookahead == '}') ADVANCE(97);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
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
          lookahead == 65279) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(141);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(122);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == '}') ADVANCE(97);
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
          lookahead == '~') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(136);
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
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == '{') ADVANCE(94);
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
          lookahead != '.' &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(138);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 11:
      if (lookahead == ']') ADVANCE(123);
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
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(124);
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
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(120);
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
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(102);
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
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(86);
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
      if (lookahead == 'r') ADVANCE(105);
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
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(126);
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
      if (lookahead == '}') ADVANCE(138);
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
          lookahead != '|') ADVANCE(141);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
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
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(91);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(83)
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_todo);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ask);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_terms);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_terms);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_answers);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_answers);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_consider);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_slot);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 112:
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
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(138);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH_DASH);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'e') ADVANCE(112);
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
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(137);
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
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == 's') ADVANCE(135);
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
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(138);
      END_STATE();
    case 138:
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
          (lookahead < ':' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_POUNDimport);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '*' &&
          lookahead != '<' &&
          lookahead != '>' &&
          lookahead != '?' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '|') ADVANCE(141);
      END_STATE();
    case 141:
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
          lookahead != '|') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '-') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '=') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(174);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(198);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(147);
      if (lookahead == 'l') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(146);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'h') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'j') ADVANCE(155);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'k') ADVANCE(93);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead == 's') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(199);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == 'x') ADVANCE(195);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(163);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'u') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'w') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(205);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 83, .external_lex_state = 1},
  [3] = {.lex_state = 83, .external_lex_state = 1},
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
  [14] = {.lex_state = 83, .external_lex_state = 1},
  [15] = {.lex_state = 83, .external_lex_state = 1},
  [16] = {.lex_state = 83, .external_lex_state = 1},
  [17] = {.lex_state = 7, .external_lex_state = 1},
  [18] = {.lex_state = 83, .external_lex_state = 1},
  [19] = {.lex_state = 83, .external_lex_state = 1},
  [20] = {.lex_state = 83, .external_lex_state = 1},
  [21] = {.lex_state = 83, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 83, .external_lex_state = 1},
  [24] = {.lex_state = 83, .external_lex_state = 1},
  [25] = {.lex_state = 8, .external_lex_state = 1},
  [26] = {.lex_state = 83, .external_lex_state = 1},
  [27] = {.lex_state = 83, .external_lex_state = 1},
  [28] = {.lex_state = 83, .external_lex_state = 1},
  [29] = {.lex_state = 83, .external_lex_state = 1},
  [30] = {.lex_state = 83, .external_lex_state = 1},
  [31] = {.lex_state = 83, .external_lex_state = 1},
  [32] = {.lex_state = 83, .external_lex_state = 1},
  [33] = {.lex_state = 83, .external_lex_state = 1},
  [34] = {.lex_state = 83, .external_lex_state = 1},
  [35] = {.lex_state = 83, .external_lex_state = 1},
  [36] = {.lex_state = 83, .external_lex_state = 1},
  [37] = {.lex_state = 83, .external_lex_state = 1},
  [38] = {.lex_state = 83, .external_lex_state = 1},
  [39] = {.lex_state = 8, .external_lex_state = 1},
  [40] = {.lex_state = 8, .external_lex_state = 1},
  [41] = {.lex_state = 83, .external_lex_state = 1},
  [42] = {.lex_state = 83, .external_lex_state = 1},
  [43] = {.lex_state = 83, .external_lex_state = 1},
  [44] = {.lex_state = 83, .external_lex_state = 1},
  [45] = {.lex_state = 83, .external_lex_state = 1},
  [46] = {.lex_state = 83, .external_lex_state = 1},
  [47] = {.lex_state = 83, .external_lex_state = 1},
  [48] = {.lex_state = 83, .external_lex_state = 1},
  [49] = {.lex_state = 83, .external_lex_state = 1},
  [50] = {.lex_state = 83, .external_lex_state = 1},
  [51] = {.lex_state = 83, .external_lex_state = 1},
  [52] = {.lex_state = 83, .external_lex_state = 1},
  [53] = {.lex_state = 83, .external_lex_state = 1},
  [54] = {.lex_state = 83, .external_lex_state = 1},
  [55] = {.lex_state = 83, .external_lex_state = 1},
  [56] = {.lex_state = 83, .external_lex_state = 1},
  [57] = {.lex_state = 83, .external_lex_state = 1},
  [58] = {.lex_state = 83, .external_lex_state = 1},
  [59] = {.lex_state = 83, .external_lex_state = 1},
  [60] = {.lex_state = 8, .external_lex_state = 1},
  [61] = {.lex_state = 83, .external_lex_state = 1},
  [62] = {.lex_state = 83, .external_lex_state = 1},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 83, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 83, .external_lex_state = 1},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 0, .external_lex_state = 1},
  [75] = {.lex_state = 0, .external_lex_state = 1},
  [76] = {.lex_state = 8, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 83, .external_lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 83, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 9, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 8, .external_lex_state = 1},
  [92] = {.lex_state = 9, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 83, .external_lex_state = 1},
  [105] = {.lex_state = 83, .external_lex_state = 1},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 6, .external_lex_state = 1},
  [108] = {.lex_state = 9, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 0, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 8, .external_lex_state = 1},
  [117] = {.lex_state = 8, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 6, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 6, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 9, .external_lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 6, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 8, .external_lex_state = 1},
  [133] = {.lex_state = 9, .external_lex_state = 1},
  [134] = {.lex_state = 6, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 6, .external_lex_state = 1},
  [137] = {.lex_state = 6, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 6, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 6, .external_lex_state = 1},
  [145] = {.lex_state = 6, .external_lex_state = 1},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 6, .external_lex_state = 1},
  [148] = {.lex_state = 83, .external_lex_state = 1},
  [149] = {.lex_state = 8, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 1},
  [151] = {.lex_state = 8, .external_lex_state = 1},
  [152] = {.lex_state = 6, .external_lex_state = 1},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 9, .external_lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 0, .external_lex_state = 1},
  [164] = {.lex_state = 83, .external_lex_state = 1},
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
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 83, .external_lex_state = 1},
  [185] = {.lex_state = 0, .external_lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 1},
  [188] = {.lex_state = 0, .external_lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 0, .external_lex_state = 1},
  [191] = {.lex_state = 1, .external_lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 1},
  [197] = {.lex_state = 0, .external_lex_state = 1},
  [198] = {.lex_state = 0, .external_lex_state = 1},
  [199] = {.lex_state = 0, .external_lex_state = 1},
  [200] = {.lex_state = 0, .external_lex_state = 1},
  [201] = {.lex_state = 83, .external_lex_state = 1},
  [202] = {.lex_state = 0, .external_lex_state = 1},
  [203] = {.lex_state = 0, .external_lex_state = 1},
  [204] = {.lex_state = 0, .external_lex_state = 1},
  [205] = {.lex_state = 0, .external_lex_state = 1},
  [206] = {.lex_state = 0, .external_lex_state = 1},
  [207] = {.lex_state = 83, .external_lex_state = 1},
  [208] = {.lex_state = 83, .external_lex_state = 1},
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
  [221] = {.lex_state = 83, .external_lex_state = 1},
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
  [232] = {.lex_state = 83, .external_lex_state = 1},
  [233] = {.lex_state = 0, .external_lex_state = 1},
  [234] = {.lex_state = 0, .external_lex_state = 1},
  [235] = {.lex_state = 0, .external_lex_state = 1},
  [236] = {.lex_state = 0, .external_lex_state = 1},
  [237] = {.lex_state = 0, .external_lex_state = 1},
  [238] = {.lex_state = 0, .external_lex_state = 1},
  [239] = {.lex_state = 0, .external_lex_state = 1},
  [240] = {.lex_state = 0, .external_lex_state = 1},
  [241] = {.lex_state = 0, .external_lex_state = 1},
  [242] = {.lex_state = 0, .external_lex_state = 1},
  [243] = {.lex_state = 0, .external_lex_state = 1},
  [244] = {.lex_state = 0, .external_lex_state = 1},
  [245] = {.lex_state = 0, .external_lex_state = 1},
  [246] = {.lex_state = 0, .external_lex_state = 1},
  [247] = {.lex_state = 0, .external_lex_state = 1},
  [248] = {.lex_state = 0, .external_lex_state = 1},
  [249] = {.lex_state = 83, .external_lex_state = 1},
  [250] = {.lex_state = 0, .external_lex_state = 1},
  [251] = {.lex_state = 0, .external_lex_state = 1},
  [252] = {.lex_state = 204},
  [253] = {-1},
  [254] = {-1},
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
    [sym_source_file] = STATE(238),
    [sym_decision_graph] = STATE(235),
    [sym__top_level_node] = STATE(31),
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
    STATE(31), 1,
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
    STATE(31), 1,
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
    STATE(10), 1,
      sym_info_sub_node,
    STATE(31), 1,
      sym__top_level_node,
    STATE(186), 1,
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
    STATE(8), 1,
      sym_info_sub_node,
    STATE(31), 1,
      sym__top_level_node,
    STATE(237), 1,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(251), 1,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(250), 1,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(167), 1,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(180), 1,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(248), 1,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(242), 1,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(164), 1,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(211), 1,
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
  [602] = 10,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(71), 1,
      anon_sym_else,
    ACTIONS(73), 1,
      aux_sym_slot_value_token1,
    STATE(17), 1,
      sym_comment,
    STATE(68), 1,
      sym__slot_identifier,
    STATE(101), 1,
      sym_atomic_assignment_slot,
    STATE(102), 1,
      sym_aggregate_assignment_slot,
    STATE(111), 1,
      sym_assignment_slot,
    STATE(148), 1,
      sym_slot,
  [633] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(77), 1,
      anon_sym_LBRACK,
    STATE(18), 1,
      sym_comment,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [653] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(81), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [673] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    STATE(20), 1,
      sym_comment,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [693] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_comment,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [713] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(22), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(91), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [733] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [753] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(102), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [773] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(104), 1,
      aux_sym_slot_value_token1,
    STATE(25), 1,
      sym_comment,
    STATE(68), 1,
      sym__slot_identifier,
    STATE(101), 1,
      sym_atomic_assignment_slot,
    STATE(102), 1,
      sym_aggregate_assignment_slot,
    STATE(103), 1,
      sym_assignment_slot,
    STATE(148), 1,
      sym_slot,
  [801] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [821] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(112), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [841] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [861] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [881] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [901] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [921] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [941] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [961] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [981] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1001] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1021] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1041] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_comment,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1061] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(104), 1,
      aux_sym_slot_value_token1,
    STATE(39), 1,
      sym_comment,
    STATE(68), 1,
      sym__slot_identifier,
    STATE(101), 1,
      sym_atomic_assignment_slot,
    STATE(102), 1,
      sym_aggregate_assignment_slot,
    STATE(148), 1,
      sym_slot,
    STATE(150), 1,
      sym_assignment_slot,
  [1089] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(104), 1,
      aux_sym_slot_value_token1,
    STATE(40), 1,
      sym_comment,
    STATE(68), 1,
      sym__slot_identifier,
    STATE(101), 1,
      sym_atomic_assignment_slot,
    STATE(102), 1,
      sym_aggregate_assignment_slot,
    STATE(106), 1,
      sym_assignment_slot,
    STATE(148), 1,
      sym_slot,
  [1117] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_comment,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1137] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(164), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1157] = 5,
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
  [1177] = 5,
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
  [1197] = 5,
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
  [1217] = 5,
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
  [1237] = 5,
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
  [1257] = 5,
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
  [1277] = 5,
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
  [1297] = 5,
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
  [1317] = 5,
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
  [1337] = 5,
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
  [1357] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_comment,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1377] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym_comment,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1397] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      sym_comment,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1417] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    STATE(56), 1,
      sym_comment,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1437] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(224), 1,
      anon_sym_LBRACK,
    STATE(57), 1,
      sym_comment,
    ACTIONS(222), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1457] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_comment,
    ACTIONS(226), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1477] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(232), 1,
      anon_sym_LBRACK,
    STATE(59), 1,
      sym_comment,
    ACTIONS(230), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1497] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(104), 1,
      aux_sym_slot_value_token1,
    STATE(60), 1,
      sym_comment,
    STATE(68), 1,
      sym__slot_identifier,
    STATE(101), 1,
      sym_atomic_assignment_slot,
    STATE(102), 1,
      sym_aggregate_assignment_slot,
    STATE(111), 1,
      sym_assignment_slot,
    STATE(148), 1,
      sym_slot,
  [1525] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(236), 1,
      anon_sym_SLASH,
    STATE(61), 2,
      sym_comment,
      aux_sym_slot_repeat1,
    ACTIONS(234), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1544] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      aux_sym_slot_repeat1,
    STATE(62), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1565] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym__slot_values_repeat1,
    ACTIONS(243), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1586] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_when_node_repeat1,
    STATE(153), 1,
      sym_when_answer_sub_node,
    STATE(234), 1,
      sym_else_sub_node,
  [1611] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_RBRACK,
    STATE(65), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_when_node_repeat1,
    STATE(153), 1,
      sym_when_answer_sub_node,
    STATE(165), 1,
      sym_else_sub_node,
  [1636] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(66), 1,
      sym_comment,
    ACTIONS(91), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1653] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(67), 1,
      sym_comment,
    ACTIONS(253), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1674] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(241), 1,
      anon_sym_SLASH,
    STATE(62), 1,
      aux_sym_slot_repeat1,
    STATE(68), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1695] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(69), 1,
      sym_comment,
    ACTIONS(257), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1712] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_comment,
    STATE(77), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(135), 1,
      sym_answer_sub_node,
  [1734] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_comment,
    STATE(79), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(140), 1,
      sym_term_sub_node,
  [1756] = 4,
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
  [1772] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    STATE(153), 1,
      sym_when_answer_sub_node,
    STATE(73), 2,
      sym_comment,
      aux_sym_when_node_repeat1,
  [1792] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym_term_sub_node,
    STATE(74), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1812] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(131), 1,
      sym_consider_option_sub_node,
    STATE(75), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1832] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(284), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      aux_sym_slot_value_token1,
    STATE(63), 1,
      sym_slot_value,
    STATE(76), 1,
      sym_comment,
    STATE(96), 1,
      sym__slot_values,
  [1854] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_answer_sub_node,
    STATE(77), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1874] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(75), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(131), 1,
      sym_consider_option_sub_node,
  [1896] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(79), 1,
      sym_comment,
    STATE(140), 1,
      sym_term_sub_node,
  [1918] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(299), 1,
      anon_sym_terms,
    ACTIONS(301), 1,
      anon_sym_answers,
    STATE(80), 1,
      sym_comment,
    STATE(208), 1,
      sym_node_id,
  [1940] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(81), 1,
      sym_comment,
    STATE(140), 1,
      sym_term_sub_node,
  [1962] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(82), 1,
      sym_comment,
    ACTIONS(234), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1978] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(140), 1,
      sym_term_sub_node,
  [2000] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(84), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2015] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(309), 1,
      aux_sym_decision_graph_name_token1,
    STATE(85), 1,
      sym_comment,
    STATE(161), 1,
      sym_decision_graph_name,
    STATE(206), 1,
      sym_node_id_value,
  [2034] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(86), 1,
      sym_comment,
    STATE(135), 1,
      sym_answer_sub_node,
  [2053] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_comment,
    STATE(192), 1,
      sym_else_sub_node,
  [2072] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      aux_sym_when_node_repeat1,
    STATE(88), 1,
      sym_comment,
    STATE(153), 1,
      sym_when_answer_sub_node,
  [2091] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(89), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2106] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(315), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      aux_sym_when_node_repeat1,
    STATE(90), 1,
      sym_comment,
    STATE(153), 1,
      sym_when_answer_sub_node,
  [2125] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(104), 1,
      aux_sym_slot_value_token1,
    STATE(68), 1,
      sym__slot_identifier,
    STATE(91), 1,
      sym_comment,
    STATE(177), 1,
      sym_slot,
  [2144] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(309), 1,
      aux_sym_decision_graph_name_token1,
    STATE(92), 1,
      sym_comment,
    STATE(240), 1,
      sym_node_id_value,
    STATE(241), 1,
      sym_decision_graph_name,
  [2163] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_comment,
    STATE(158), 1,
      sym_terms_sub_node,
    STATE(162), 1,
      sym_answers_sub_node,
  [2182] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym__slot_values_repeat1,
  [2201] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(95), 1,
      sym_comment,
    STATE(131), 1,
      sym_consider_option_sub_node,
  [2220] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(96), 1,
      sym_comment,
    ACTIONS(323), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2235] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(97), 1,
      sym_comment,
    ACTIONS(325), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2250] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_comment,
    STATE(200), 1,
      sym_else_sub_node,
  [2269] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_comment,
    STATE(125), 1,
      sym_terms_sub_node,
    STATE(181), 1,
      sym_answers_sub_node,
  [2288] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(100), 1,
      sym_comment,
  [2307] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(101), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2322] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(102), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2337] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(103), 1,
      sym_comment,
    ACTIONS(333), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2352] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(335), 1,
      anon_sym_text,
    STATE(104), 1,
      sym_comment,
    STATE(221), 1,
      sym_node_id,
  [2371] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(337), 1,
      anon_sym_title,
    STATE(105), 1,
      sym_comment,
    STATE(249), 1,
      sym_node_id,
  [2390] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    STATE(106), 1,
      sym_comment,
  [2406] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(343), 1,
      sym_free_text,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(107), 1,
      sym_comment,
  [2422] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(347), 1,
      aux_sym_decision_graph_name_token1,
    STATE(108), 1,
      sym_comment,
    STATE(203), 1,
      sym_node_id_value,
  [2438] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(109), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2452] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(110), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2466] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(353), 1,
      anon_sym_COLON,
    STATE(111), 1,
      sym_comment,
  [2482] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(112), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2496] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(113), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2510] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(114), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2524] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(115), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2538] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(286), 1,
      aux_sym_slot_value_token1,
    STATE(84), 1,
      sym_slot_value,
    STATE(116), 1,
      sym_comment,
  [2554] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(104), 1,
      aux_sym_slot_value_token1,
    STATE(82), 1,
      sym__slot_identifier,
    STATE(117), 1,
      sym_comment,
  [2570] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(12), 1,
      sym_node_id,
    STATE(118), 1,
      sym_comment,
  [2586] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(363), 1,
      sym_free_text,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_comment,
  [2602] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(120), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2616] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(369), 1,
      anon_sym_LBRACK,
    ACTIONS(371), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(121), 1,
      sym_comment,
  [2632] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_consider_options_sub_node,
    STATE(122), 1,
      sym_comment,
  [2648] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(123), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2662] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(377), 1,
      sym_free_text,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym_comment,
  [2678] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(125), 1,
      sym_comment,
    STATE(205), 1,
      sym_answers_sub_node,
  [2694] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(347), 1,
      aux_sym_decision_graph_name_token1,
    STATE(126), 1,
      sym_comment,
    STATE(193), 1,
      sym_node_id_value,
  [2710] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(383), 1,
      anon_sym_LBRACK,
    ACTIONS(385), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(127), 1,
      sym_comment,
  [2726] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(387), 1,
      sym_free_text,
    ACTIONS(389), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      sym_comment,
  [2742] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(129), 1,
      sym_comment,
  [2758] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(130), 1,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2772] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(131), 1,
      sym_comment,
    ACTIONS(397), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2786] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(286), 1,
      aux_sym_slot_value_token1,
    STATE(132), 1,
      sym_comment,
    STATE(233), 1,
      sym_slot_value,
  [2802] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(399), 1,
      aux_sym_decision_graph_name_token1,
    STATE(133), 1,
      sym_comment,
    STATE(185), 1,
      sym_decision_graph_name,
  [2818] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(401), 1,
      anon_sym_RBRACK,
    ACTIONS(403), 1,
      sym_free_text,
    STATE(134), 1,
      sym_comment,
  [2834] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(135), 1,
      sym_comment,
    ACTIONS(405), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2848] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(407), 1,
      anon_sym_COLON,
    ACTIONS(409), 1,
      sym_free_text,
    STATE(136), 1,
      sym_comment,
  [2864] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(411), 1,
      anon_sym_RBRACK,
    ACTIONS(413), 1,
      sym_free_text,
    STATE(137), 1,
      sym_comment,
  [2880] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_text_sub_node,
    STATE(138), 1,
      sym_comment,
  [2896] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    STATE(122), 1,
      sym_slot_sub_node,
    STATE(139), 1,
      sym_comment,
  [2912] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(140), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2926] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(421), 1,
      anon_sym_COLON,
    ACTIONS(423), 1,
      sym_free_text,
    STATE(141), 1,
      sym_comment,
  [2942] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_text_sub_node,
    STATE(142), 1,
      sym_comment,
  [2958] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
    ACTIONS(427), 1,
      anon_sym_LT,
    STATE(143), 1,
      sym_comment,
  [2974] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    ACTIONS(431), 1,
      sym_free_text,
    STATE(144), 1,
      sym_comment,
  [2990] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(433), 1,
      sym_free_text,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(145), 1,
      sym_comment,
  [3006] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(417), 1,
      anon_sym_LBRACE,
    STATE(146), 1,
      sym_comment,
    STATE(154), 1,
      sym_slot_sub_node,
  [3022] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
    ACTIONS(439), 1,
      sym_free_text,
    STATE(147), 1,
      sym_comment,
  [3038] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(441), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(443), 1,
      anon_sym_EQ,
    STATE(148), 1,
      sym_comment,
  [3054] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(286), 1,
      aux_sym_slot_value_token1,
    STATE(94), 1,
      sym_slot_value,
    STATE(149), 1,
      sym_comment,
  [3070] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(341), 1,
      anon_sym_SEMI,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      sym_comment,
  [3086] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(286), 1,
      aux_sym_slot_value_token1,
    STATE(66), 1,
      sym_slot_value,
    STATE(151), 1,
      sym_comment,
  [3102] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(447), 1,
      sym_free_text,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    STATE(152), 1,
      sym_comment,
  [3118] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(153), 1,
      sym_comment,
    ACTIONS(451), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [3132] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_consider_options_sub_node,
    STATE(154), 1,
      sym_comment,
  [3148] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(155), 1,
      sym_comment,
  [3164] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(347), 1,
      aux_sym_decision_graph_name_token1,
    STATE(156), 1,
      sym_comment,
    STATE(190), 1,
      sym_node_id_value,
  [3180] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
    ACTIONS(457), 1,
      anon_sym_GT,
    STATE(157), 1,
      sym_comment,
  [3196] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_comment,
    STATE(188), 1,
      sym_answers_sub_node,
  [3212] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(459), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_comment,
  [3225] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(160), 1,
      sym_comment,
  [3238] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(463), 1,
      anon_sym_GT,
    STATE(161), 1,
      sym_comment,
  [3251] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_comment,
  [3264] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_comment,
  [3277] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(469), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(164), 1,
      sym_comment,
  [3290] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(165), 1,
      sym_comment,
  [3303] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(473), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym_comment,
  [3316] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_comment,
  [3329] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(477), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym_comment,
  [3342] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_comment,
  [3355] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      sym_comment,
  [3368] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    STATE(171), 1,
      sym_comment,
  [3381] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_comment,
  [3394] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(487), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_comment,
  [3407] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(489), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_comment,
  [3420] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(491), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym_comment,
  [3433] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(493), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym_comment,
  [3446] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym_comment,
  [3459] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(497), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym_comment,
  [3472] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(499), 1,
      anon_sym_COLON,
    STATE(179), 1,
      sym_comment,
  [3485] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(501), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      sym_comment,
  [3498] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym_comment,
  [3511] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      sym_comment,
  [3524] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(507), 1,
      anon_sym_COLON,
    STATE(183), 1,
      sym_comment,
  [3537] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(509), 1,
      anon_sym_slot,
    STATE(184), 1,
      sym_comment,
  [3550] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(511), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
  [3563] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_comment,
  [3576] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(457), 1,
      anon_sym_COLON,
    STATE(187), 1,
      sym_comment,
  [3589] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym_comment,
  [3602] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym_comment,
  [3615] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      sym_comment,
  [3628] = 4,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(521), 1,
      sym_file_path,
    ACTIONS(523), 1,
      anon_sym_LT_DASH_DASH,
    STATE(191), 1,
      sym_comment,
  [3641] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      sym_comment,
  [3654] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(527), 1,
      anon_sym_LT,
    STATE(193), 1,
      sym_comment,
  [3667] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(194), 1,
      sym_comment,
  [3680] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(195), 1,
      sym_comment,
  [3693] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_comment,
  [3706] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym_comment,
  [3719] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(537), 1,
      anon_sym_COLON,
    STATE(198), 1,
      sym_comment,
  [3732] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(539), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_comment,
  [3745] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      sym_comment,
  [3758] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(543), 1,
      anon_sym_else,
    STATE(201), 1,
      sym_comment,
  [3771] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(202), 1,
      sym_comment,
  [3784] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    STATE(203), 1,
      sym_comment,
  [3797] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(549), 1,
      anon_sym_COLON,
    STATE(204), 1,
      sym_comment,
  [3810] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      sym_comment,
  [3823] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      sym_comment,
  [3836] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(301), 1,
      anon_sym_answers,
    STATE(207), 1,
      sym_comment,
  [3849] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(555), 1,
      anon_sym_terms,
    STATE(208), 1,
      sym_comment,
  [3862] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(557), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym_comment,
  [3875] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(559), 1,
      anon_sym_COLON,
    STATE(210), 1,
      sym_comment,
  [3888] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(211), 1,
      sym_comment,
  [3901] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(563), 1,
      anon_sym_COLON,
    STATE(212), 1,
      sym_comment,
  [3914] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    STATE(213), 1,
      sym_comment,
  [3927] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(567), 1,
      anon_sym_COLON,
    STATE(214), 1,
      sym_comment,
  [3940] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(569), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_comment,
  [3953] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym_comment,
  [3966] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      sym_comment,
  [3979] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(575), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym_comment,
  [3992] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(577), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym_comment,
  [4005] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(579), 1,
      anon_sym_COLON,
    STATE(220), 1,
      sym_comment,
  [4018] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(581), 1,
      anon_sym_text,
    STATE(221), 1,
      sym_comment,
  [4031] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(583), 1,
      anon_sym_LBRACE,
    STATE(222), 1,
      sym_comment,
  [4044] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
  [4057] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(587), 1,
      anon_sym_COLON,
    STATE(224), 1,
      sym_comment,
  [4070] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(225), 1,
      sym_comment,
  [4083] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(591), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym_comment,
  [4096] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(593), 1,
      anon_sym_COLON,
    STATE(227), 1,
      sym_comment,
  [4109] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(595), 1,
      anon_sym_COLON,
    STATE(228), 1,
      sym_comment,
  [4122] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym_comment,
  [4135] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(599), 1,
      anon_sym_COLON,
    STATE(230), 1,
      sym_comment,
  [4148] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    STATE(231), 1,
      sym_comment,
  [4161] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(603), 1,
      anon_sym_options,
    STATE(232), 1,
      sym_comment,
  [4174] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(605), 1,
      anon_sym_COLON,
    STATE(233), 1,
      sym_comment,
  [4187] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(234), 1,
      sym_comment,
  [4200] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(609), 1,
      ts_builtin_sym_end,
    STATE(235), 1,
      sym_comment,
  [4213] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      sym_comment,
  [4226] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      sym_comment,
  [4239] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(615), 1,
      ts_builtin_sym_end,
    STATE(238), 1,
      sym_comment,
  [4252] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(617), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [4265] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    STATE(240), 1,
      sym_comment,
  [4278] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(621), 1,
      anon_sym_GT,
    STATE(241), 1,
      sym_comment,
  [4291] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_comment,
  [4304] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
    STATE(243), 1,
      sym_comment,
  [4317] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
    STATE(244), 1,
      sym_comment,
  [4330] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(629), 1,
      anon_sym_COLON,
    STATE(245), 1,
      sym_comment,
  [4343] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      sym_comment,
  [4356] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(633), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_comment,
  [4369] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(635), 1,
      anon_sym_RBRACK,
    STATE(248), 1,
      sym_comment,
  [4382] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(637), 1,
      anon_sym_title,
    STATE(249), 1,
      sym_comment,
  [4395] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    STATE(250), 1,
      sym_comment,
  [4408] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    STATE(251), 1,
      sym_comment,
  [4421] = 1,
    ACTIONS(643), 1,
      aux_sym_comment_token1,
  [4425] = 1,
    ACTIONS(645), 1,
      ts_builtin_sym_end,
  [4429] = 1,
    ACTIONS(647), 1,
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
  [SMALL_STATE(18)] = 633,
  [SMALL_STATE(19)] = 653,
  [SMALL_STATE(20)] = 673,
  [SMALL_STATE(21)] = 693,
  [SMALL_STATE(22)] = 713,
  [SMALL_STATE(23)] = 733,
  [SMALL_STATE(24)] = 753,
  [SMALL_STATE(25)] = 773,
  [SMALL_STATE(26)] = 801,
  [SMALL_STATE(27)] = 821,
  [SMALL_STATE(28)] = 841,
  [SMALL_STATE(29)] = 861,
  [SMALL_STATE(30)] = 881,
  [SMALL_STATE(31)] = 901,
  [SMALL_STATE(32)] = 921,
  [SMALL_STATE(33)] = 941,
  [SMALL_STATE(34)] = 961,
  [SMALL_STATE(35)] = 981,
  [SMALL_STATE(36)] = 1001,
  [SMALL_STATE(37)] = 1021,
  [SMALL_STATE(38)] = 1041,
  [SMALL_STATE(39)] = 1061,
  [SMALL_STATE(40)] = 1089,
  [SMALL_STATE(41)] = 1117,
  [SMALL_STATE(42)] = 1137,
  [SMALL_STATE(43)] = 1157,
  [SMALL_STATE(44)] = 1177,
  [SMALL_STATE(45)] = 1197,
  [SMALL_STATE(46)] = 1217,
  [SMALL_STATE(47)] = 1237,
  [SMALL_STATE(48)] = 1257,
  [SMALL_STATE(49)] = 1277,
  [SMALL_STATE(50)] = 1297,
  [SMALL_STATE(51)] = 1317,
  [SMALL_STATE(52)] = 1337,
  [SMALL_STATE(53)] = 1357,
  [SMALL_STATE(54)] = 1377,
  [SMALL_STATE(55)] = 1397,
  [SMALL_STATE(56)] = 1417,
  [SMALL_STATE(57)] = 1437,
  [SMALL_STATE(58)] = 1457,
  [SMALL_STATE(59)] = 1477,
  [SMALL_STATE(60)] = 1497,
  [SMALL_STATE(61)] = 1525,
  [SMALL_STATE(62)] = 1544,
  [SMALL_STATE(63)] = 1565,
  [SMALL_STATE(64)] = 1586,
  [SMALL_STATE(65)] = 1611,
  [SMALL_STATE(66)] = 1636,
  [SMALL_STATE(67)] = 1653,
  [SMALL_STATE(68)] = 1674,
  [SMALL_STATE(69)] = 1695,
  [SMALL_STATE(70)] = 1712,
  [SMALL_STATE(71)] = 1734,
  [SMALL_STATE(72)] = 1756,
  [SMALL_STATE(73)] = 1772,
  [SMALL_STATE(74)] = 1792,
  [SMALL_STATE(75)] = 1812,
  [SMALL_STATE(76)] = 1832,
  [SMALL_STATE(77)] = 1854,
  [SMALL_STATE(78)] = 1874,
  [SMALL_STATE(79)] = 1896,
  [SMALL_STATE(80)] = 1918,
  [SMALL_STATE(81)] = 1940,
  [SMALL_STATE(82)] = 1962,
  [SMALL_STATE(83)] = 1978,
  [SMALL_STATE(84)] = 2000,
  [SMALL_STATE(85)] = 2015,
  [SMALL_STATE(86)] = 2034,
  [SMALL_STATE(87)] = 2053,
  [SMALL_STATE(88)] = 2072,
  [SMALL_STATE(89)] = 2091,
  [SMALL_STATE(90)] = 2106,
  [SMALL_STATE(91)] = 2125,
  [SMALL_STATE(92)] = 2144,
  [SMALL_STATE(93)] = 2163,
  [SMALL_STATE(94)] = 2182,
  [SMALL_STATE(95)] = 2201,
  [SMALL_STATE(96)] = 2220,
  [SMALL_STATE(97)] = 2235,
  [SMALL_STATE(98)] = 2250,
  [SMALL_STATE(99)] = 2269,
  [SMALL_STATE(100)] = 2288,
  [SMALL_STATE(101)] = 2307,
  [SMALL_STATE(102)] = 2322,
  [SMALL_STATE(103)] = 2337,
  [SMALL_STATE(104)] = 2352,
  [SMALL_STATE(105)] = 2371,
  [SMALL_STATE(106)] = 2390,
  [SMALL_STATE(107)] = 2406,
  [SMALL_STATE(108)] = 2422,
  [SMALL_STATE(109)] = 2438,
  [SMALL_STATE(110)] = 2452,
  [SMALL_STATE(111)] = 2466,
  [SMALL_STATE(112)] = 2482,
  [SMALL_STATE(113)] = 2496,
  [SMALL_STATE(114)] = 2510,
  [SMALL_STATE(115)] = 2524,
  [SMALL_STATE(116)] = 2538,
  [SMALL_STATE(117)] = 2554,
  [SMALL_STATE(118)] = 2570,
  [SMALL_STATE(119)] = 2586,
  [SMALL_STATE(120)] = 2602,
  [SMALL_STATE(121)] = 2616,
  [SMALL_STATE(122)] = 2632,
  [SMALL_STATE(123)] = 2648,
  [SMALL_STATE(124)] = 2662,
  [SMALL_STATE(125)] = 2678,
  [SMALL_STATE(126)] = 2694,
  [SMALL_STATE(127)] = 2710,
  [SMALL_STATE(128)] = 2726,
  [SMALL_STATE(129)] = 2742,
  [SMALL_STATE(130)] = 2758,
  [SMALL_STATE(131)] = 2772,
  [SMALL_STATE(132)] = 2786,
  [SMALL_STATE(133)] = 2802,
  [SMALL_STATE(134)] = 2818,
  [SMALL_STATE(135)] = 2834,
  [SMALL_STATE(136)] = 2848,
  [SMALL_STATE(137)] = 2864,
  [SMALL_STATE(138)] = 2880,
  [SMALL_STATE(139)] = 2896,
  [SMALL_STATE(140)] = 2912,
  [SMALL_STATE(141)] = 2926,
  [SMALL_STATE(142)] = 2942,
  [SMALL_STATE(143)] = 2958,
  [SMALL_STATE(144)] = 2974,
  [SMALL_STATE(145)] = 2990,
  [SMALL_STATE(146)] = 3006,
  [SMALL_STATE(147)] = 3022,
  [SMALL_STATE(148)] = 3038,
  [SMALL_STATE(149)] = 3054,
  [SMALL_STATE(150)] = 3070,
  [SMALL_STATE(151)] = 3086,
  [SMALL_STATE(152)] = 3102,
  [SMALL_STATE(153)] = 3118,
  [SMALL_STATE(154)] = 3132,
  [SMALL_STATE(155)] = 3148,
  [SMALL_STATE(156)] = 3164,
  [SMALL_STATE(157)] = 3180,
  [SMALL_STATE(158)] = 3196,
  [SMALL_STATE(159)] = 3212,
  [SMALL_STATE(160)] = 3225,
  [SMALL_STATE(161)] = 3238,
  [SMALL_STATE(162)] = 3251,
  [SMALL_STATE(163)] = 3264,
  [SMALL_STATE(164)] = 3277,
  [SMALL_STATE(165)] = 3290,
  [SMALL_STATE(166)] = 3303,
  [SMALL_STATE(167)] = 3316,
  [SMALL_STATE(168)] = 3329,
  [SMALL_STATE(169)] = 3342,
  [SMALL_STATE(170)] = 3355,
  [SMALL_STATE(171)] = 3368,
  [SMALL_STATE(172)] = 3381,
  [SMALL_STATE(173)] = 3394,
  [SMALL_STATE(174)] = 3407,
  [SMALL_STATE(175)] = 3420,
  [SMALL_STATE(176)] = 3433,
  [SMALL_STATE(177)] = 3446,
  [SMALL_STATE(178)] = 3459,
  [SMALL_STATE(179)] = 3472,
  [SMALL_STATE(180)] = 3485,
  [SMALL_STATE(181)] = 3498,
  [SMALL_STATE(182)] = 3511,
  [SMALL_STATE(183)] = 3524,
  [SMALL_STATE(184)] = 3537,
  [SMALL_STATE(185)] = 3550,
  [SMALL_STATE(186)] = 3563,
  [SMALL_STATE(187)] = 3576,
  [SMALL_STATE(188)] = 3589,
  [SMALL_STATE(189)] = 3602,
  [SMALL_STATE(190)] = 3615,
  [SMALL_STATE(191)] = 3628,
  [SMALL_STATE(192)] = 3641,
  [SMALL_STATE(193)] = 3654,
  [SMALL_STATE(194)] = 3667,
  [SMALL_STATE(195)] = 3680,
  [SMALL_STATE(196)] = 3693,
  [SMALL_STATE(197)] = 3706,
  [SMALL_STATE(198)] = 3719,
  [SMALL_STATE(199)] = 3732,
  [SMALL_STATE(200)] = 3745,
  [SMALL_STATE(201)] = 3758,
  [SMALL_STATE(202)] = 3771,
  [SMALL_STATE(203)] = 3784,
  [SMALL_STATE(204)] = 3797,
  [SMALL_STATE(205)] = 3810,
  [SMALL_STATE(206)] = 3823,
  [SMALL_STATE(207)] = 3836,
  [SMALL_STATE(208)] = 3849,
  [SMALL_STATE(209)] = 3862,
  [SMALL_STATE(210)] = 3875,
  [SMALL_STATE(211)] = 3888,
  [SMALL_STATE(212)] = 3901,
  [SMALL_STATE(213)] = 3914,
  [SMALL_STATE(214)] = 3927,
  [SMALL_STATE(215)] = 3940,
  [SMALL_STATE(216)] = 3953,
  [SMALL_STATE(217)] = 3966,
  [SMALL_STATE(218)] = 3979,
  [SMALL_STATE(219)] = 3992,
  [SMALL_STATE(220)] = 4005,
  [SMALL_STATE(221)] = 4018,
  [SMALL_STATE(222)] = 4031,
  [SMALL_STATE(223)] = 4044,
  [SMALL_STATE(224)] = 4057,
  [SMALL_STATE(225)] = 4070,
  [SMALL_STATE(226)] = 4083,
  [SMALL_STATE(227)] = 4096,
  [SMALL_STATE(228)] = 4109,
  [SMALL_STATE(229)] = 4122,
  [SMALL_STATE(230)] = 4135,
  [SMALL_STATE(231)] = 4148,
  [SMALL_STATE(232)] = 4161,
  [SMALL_STATE(233)] = 4174,
  [SMALL_STATE(234)] = 4187,
  [SMALL_STATE(235)] = 4200,
  [SMALL_STATE(236)] = 4213,
  [SMALL_STATE(237)] = 4226,
  [SMALL_STATE(238)] = 4239,
  [SMALL_STATE(239)] = 4252,
  [SMALL_STATE(240)] = 4265,
  [SMALL_STATE(241)] = 4278,
  [SMALL_STATE(242)] = 4291,
  [SMALL_STATE(243)] = 4304,
  [SMALL_STATE(244)] = 4317,
  [SMALL_STATE(245)] = 4330,
  [SMALL_STATE(246)] = 4343,
  [SMALL_STATE(247)] = 4356,
  [SMALL_STATE(248)] = 4369,
  [SMALL_STATE(249)] = 4382,
  [SMALL_STATE(250)] = 4395,
  [SMALL_STATE(251)] = 4408,
  [SMALL_STATE(252)] = 4421,
  [SMALL_STATE(253)] = 4425,
  [SMALL_STATE(254)] = 4429,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(252),
  [5] = {.count = 1, .reusable = true}, SHIFT(253),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(118),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(118),
  [21] = {.count = 1, .reusable = true}, SHIFT(105),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [27] = {.count = 1, .reusable = true}, SHIFT(230),
  [29] = {.count = 1, .reusable = true}, SHIFT(227),
  [31] = {.count = 1, .reusable = true}, SHIFT(226),
  [33] = {.count = 1, .reusable = true}, SHIFT(126),
  [35] = {.count = 1, .reusable = true}, SHIFT(220),
  [37] = {.count = 1, .reusable = true}, SHIFT(219),
  [39] = {.count = 1, .reusable = true}, SHIFT(218),
  [41] = {.count = 1, .reusable = true}, SHIFT(217),
  [43] = {.count = 1, .reusable = true}, SHIFT(216),
  [45] = {.count = 1, .reusable = true}, SHIFT(215),
  [47] = {.count = 1, .reusable = true}, SHIFT(209),
  [49] = {.count = 1, .reusable = true}, SHIFT(133),
  [51] = {.count = 1, .reusable = true}, SHIFT(159),
  [53] = {.count = 1, .reusable = true}, SHIFT(179),
  [55] = {.count = 1, .reusable = true}, SHIFT(178),
  [57] = {.count = 1, .reusable = true}, SHIFT(176),
  [59] = {.count = 1, .reusable = true}, SHIFT(175),
  [61] = {.count = 1, .reusable = true}, SHIFT(173),
  [63] = {.count = 1, .reusable = true}, SHIFT(172),
  [65] = {.count = 1, .reusable = true}, SHIFT(169),
  [67] = {.count = 1, .reusable = true}, SHIFT(168),
  [69] = {.count = 1, .reusable = true}, SHIFT(166),
  [71] = {.count = 1, .reusable = false}, SHIFT(198),
  [73] = {.count = 1, .reusable = false}, SHIFT(72),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6, .production_id = 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6, .production_id = 1),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4, .production_id = 1),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4, .production_id = 1),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 8, .production_id = 8),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 8, .production_id = 8),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8, .production_id = 7),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8, .production_id = 7),
  [91] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [93] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(151),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5, .production_id = 1),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5, .production_id = 1),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [104] = {.count = 1, .reusable = true}, SHIFT(72),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5, .production_id = 1),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5, .production_id = 1),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7, .production_id = 1),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7, .production_id = 1),
  [126] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [128] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7, .production_id = 1),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7, .production_id = 1),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7, .production_id = 1),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7, .production_id = 1),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7, .production_id = 5),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7, .production_id = 5),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6, .production_id = 2),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6, .production_id = 2),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 7, .production_id = 4),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 7, .production_id = 4),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7, .production_id = 3),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7, .production_id = 3),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 4, .production_id = 1),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 4, .production_id = 1),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8, .production_id = 1),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8, .production_id = 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6, .production_id = 1),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6, .production_id = 1),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6, .production_id = 1),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6, .production_id = 1),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6, .production_id = 1),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6, .production_id = 1),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6, .production_id = 1),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6, .production_id = 1),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6, .production_id = 1),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6, .production_id = 1),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [224] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [234] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2),
  [236] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2), SHIFT_REPEAT(117),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 2),
  [241] = {.count = 1, .reusable = true}, SHIFT(117),
  [243] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [245] = {.count = 1, .reusable = true}, SHIFT(151),
  [247] = {.count = 1, .reusable = true}, SHIFT(24),
  [249] = {.count = 1, .reusable = true}, SHIFT(17),
  [251] = {.count = 1, .reusable = true}, SHIFT(50),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [255] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 1),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [259] = {.count = 1, .reusable = true}, SHIFT(136),
  [261] = {.count = 1, .reusable = true}, SHIFT(229),
  [263] = {.count = 1, .reusable = true}, SHIFT(141),
  [265] = {.count = 1, .reusable = true}, SHIFT(231),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym__slot_identifier, 1),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2),
  [271] = {.count = 2, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2), SHIFT_REPEAT(60),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(141),
  [277] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(132),
  [282] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [284] = {.count = 1, .reusable = true}, SHIFT(149),
  [286] = {.count = 1, .reusable = true}, SHIFT(69),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(136),
  [291] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [293] = {.count = 1, .reusable = true}, SHIFT(132),
  [295] = {.count = 1, .reusable = true}, SHIFT(123),
  [297] = {.count = 1, .reusable = true}, SHIFT(244),
  [299] = {.count = 1, .reusable = true}, SHIFT(212),
  [301] = {.count = 1, .reusable = true}, SHIFT(210),
  [303] = {.count = 1, .reusable = true}, SHIFT(225),
  [305] = {.count = 1, .reusable = true}, SHIFT(199),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [309] = {.count = 1, .reusable = true}, SHIFT(157),
  [311] = {.count = 1, .reusable = true}, SHIFT(33),
  [313] = {.count = 1, .reusable = true}, SHIFT(201),
  [315] = {.count = 1, .reusable = true}, SHIFT(60),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [319] = {.count = 1, .reusable = true}, SHIFT(80),
  [321] = {.count = 1, .reusable = true}, SHIFT(97),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [327] = {.count = 1, .reusable = true}, SHIFT(54),
  [329] = {.count = 1, .reusable = true}, SHIFT(89),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [335] = {.count = 1, .reusable = true}, SHIFT(204),
  [337] = {.count = 1, .reusable = true}, SHIFT(245),
  [339] = {.count = 1, .reusable = true}, SHIFT(47),
  [341] = {.count = 1, .reusable = true}, SHIFT(25),
  [343] = {.count = 1, .reusable = true}, SHIFT(196),
  [345] = {.count = 1, .reusable = true}, SHIFT(197),
  [347] = {.count = 1, .reusable = true}, SHIFT(143),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5, .production_id = 16),
  [353] = {.count = 1, .reusable = true}, SHIFT(9),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5, .production_id = 15),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4, .production_id = 14),
  [359] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4, .production_id = 13),
  [363] = {.count = 1, .reusable = true}, SHIFT(247),
  [365] = {.count = 1, .reusable = true}, SHIFT(114),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6, .production_id = 1),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6, .production_id = 1),
  [373] = {.count = 1, .reusable = true}, SHIFT(232),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [377] = {.count = 1, .reusable = true}, SHIFT(239),
  [379] = {.count = 1, .reusable = true}, SHIFT(120),
  [381] = {.count = 1, .reusable = true}, SHIFT(207),
  [383] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5, .production_id = 1),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5, .production_id = 1),
  [387] = {.count = 1, .reusable = true}, SHIFT(170),
  [389] = {.count = 1, .reusable = true}, SHIFT(171),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [397] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [399] = {.count = 1, .reusable = true}, SHIFT(187),
  [401] = {.count = 1, .reusable = true}, SHIFT(52),
  [403] = {.count = 1, .reusable = true}, SHIFT(163),
  [405] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [407] = {.count = 1, .reusable = true}, SHIFT(11),
  [409] = {.count = 1, .reusable = true}, SHIFT(228),
  [411] = {.count = 1, .reusable = true}, SHIFT(29),
  [413] = {.count = 1, .reusable = true}, SHIFT(223),
  [415] = {.count = 1, .reusable = true}, SHIFT(104),
  [417] = {.count = 1, .reusable = true}, SHIFT(184),
  [419] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [421] = {.count = 1, .reusable = true}, SHIFT(124),
  [423] = {.count = 1, .reusable = true}, SHIFT(224),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [427] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [429] = {.count = 1, .reusable = true}, SHIFT(23),
  [431] = {.count = 1, .reusable = true}, SHIFT(243),
  [433] = {.count = 1, .reusable = true}, SHIFT(182),
  [435] = {.count = 1, .reusable = true}, SHIFT(155),
  [437] = {.count = 1, .reusable = true}, SHIFT(59),
  [439] = {.count = 1, .reusable = true}, SHIFT(189),
  [441] = {.count = 1, .reusable = true}, SHIFT(76),
  [443] = {.count = 1, .reusable = true}, SHIFT(116),
  [445] = {.count = 1, .reusable = true}, SHIFT(26),
  [447] = {.count = 1, .reusable = true}, SHIFT(213),
  [449] = {.count = 1, .reusable = true}, SHIFT(127),
  [451] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 1),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [459] = {.count = 1, .reusable = true}, SHIFT(144),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [463] = {.count = 1, .reusable = true}, SHIFT(108),
  [465] = {.count = 1, .reusable = true}, SHIFT(34),
  [467] = {.count = 1, .reusable = true}, SHIFT(35),
  [469] = {.count = 1, .reusable = true}, SHIFT(38),
  [471] = {.count = 1, .reusable = true}, SHIFT(32),
  [473] = {.count = 1, .reusable = true}, SHIFT(40),
  [475] = {.count = 1, .reusable = true}, SHIFT(30),
  [477] = {.count = 1, .reusable = true}, SHIFT(137),
  [479] = {.count = 1, .reusable = true}, SHIFT(45),
  [481] = {.count = 1, .reusable = true}, SHIFT(195),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [485] = {.count = 1, .reusable = true}, SHIFT(19),
  [487] = {.count = 1, .reusable = true}, SHIFT(5),
  [489] = {.count = 1, .reusable = true}, SHIFT(71),
  [491] = {.count = 1, .reusable = true}, SHIFT(90),
  [493] = {.count = 1, .reusable = true}, SHIFT(139),
  [495] = {.count = 1, .reusable = true}, SHIFT(160),
  [497] = {.count = 1, .reusable = true}, SHIFT(92),
  [499] = {.count = 1, .reusable = true}, SHIFT(142),
  [501] = {.count = 1, .reusable = true}, SHIFT(130),
  [503] = {.count = 1, .reusable = true}, SHIFT(42),
  [505] = {.count = 1, .reusable = true}, SHIFT(129),
  [507] = {.count = 1, .reusable = true}, SHIFT(91),
  [509] = {.count = 1, .reusable = true}, SHIFT(183),
  [511] = {.count = 1, .reusable = true}, SHIFT(191),
  [513] = {.count = 1, .reusable = true}, SHIFT(53),
  [515] = {.count = 1, .reusable = true}, SHIFT(21),
  [517] = {.count = 1, .reusable = true}, SHIFT(28),
  [519] = {.count = 1, .reusable = true}, SHIFT(20),
  [521] = {.count = 1, .reusable = true}, SHIFT(246),
  [523] = {.count = 1, .reusable = false}, SHIFT(252),
  [525] = {.count = 1, .reusable = true}, SHIFT(46),
  [527] = {.count = 1, .reusable = false}, SHIFT(14),
  [529] = {.count = 1, .reusable = true}, SHIFT(152),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5, .production_id = 6),
  [533] = {.count = 1, .reusable = true}, SHIFT(222),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5, .production_id = 1),
  [537] = {.count = 1, .reusable = true}, SHIFT(13),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [541] = {.count = 1, .reusable = true}, SHIFT(41),
  [543] = {.count = 1, .reusable = true}, SHIFT(198),
  [545] = {.count = 1, .reusable = true}, SHIFT(95),
  [547] = {.count = 1, .reusable = true}, SHIFT(43),
  [549] = {.count = 1, .reusable = true}, SHIFT(128),
  [551] = {.count = 1, .reusable = true}, SHIFT(44),
  [553] = {.count = 1, .reusable = true}, SHIFT(27),
  [555] = {.count = 1, .reusable = true}, SHIFT(174),
  [557] = {.count = 1, .reusable = true}, SHIFT(39),
  [559] = {.count = 1, .reusable = true}, SHIFT(86),
  [561] = {.count = 1, .reusable = true}, SHIFT(236),
  [563] = {.count = 1, .reusable = true}, SHIFT(83),
  [565] = {.count = 1, .reusable = true}, SHIFT(121),
  [567] = {.count = 1, .reusable = true}, SHIFT(107),
  [569] = {.count = 1, .reusable = true}, SHIFT(147),
  [571] = {.count = 1, .reusable = true}, SHIFT(37),
  [573] = {.count = 1, .reusable = true}, SHIFT(36),
  [575] = {.count = 1, .reusable = true}, SHIFT(4),
  [577] = {.count = 1, .reusable = true}, SHIFT(88),
  [579] = {.count = 1, .reusable = true}, SHIFT(146),
  [581] = {.count = 1, .reusable = true}, SHIFT(214),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6, .production_id = 9),
  [585] = {.count = 1, .reusable = true}, SHIFT(48),
  [587] = {.count = 1, .reusable = true}, SHIFT(119),
  [589] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5, .production_id = 10),
  [591] = {.count = 1, .reusable = true}, SHIFT(85),
  [593] = {.count = 1, .reusable = true}, SHIFT(138),
  [595] = {.count = 1, .reusable = true}, SHIFT(7),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5, .production_id = 11),
  [599] = {.count = 1, .reusable = true}, SHIFT(134),
  [601] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5, .production_id = 1),
  [603] = {.count = 1, .reusable = true}, SHIFT(202),
  [605] = {.count = 1, .reusable = true}, SHIFT(6),
  [607] = {.count = 1, .reusable = true}, SHIFT(55),
  [609] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [613] = {.count = 1, .reusable = true}, SHIFT(49),
  [615] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [617] = {.count = 1, .reusable = true}, SHIFT(115),
  [619] = {.count = 1, .reusable = true}, SHIFT(18),
  [621] = {.count = 1, .reusable = true}, SHIFT(156),
  [623] = {.count = 1, .reusable = true}, SHIFT(113),
  [625] = {.count = 1, .reusable = true}, SHIFT(56),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6, .production_id = 12),
  [629] = {.count = 1, .reusable = true}, SHIFT(145),
  [631] = {.count = 1, .reusable = true}, SHIFT(57),
  [633] = {.count = 1, .reusable = true}, SHIFT(112),
  [635] = {.count = 1, .reusable = true}, SHIFT(58),
  [637] = {.count = 1, .reusable = true}, SHIFT(194),
  [639] = {.count = 1, .reusable = true}, SHIFT(110),
  [641] = {.count = 1, .reusable = true}, SHIFT(109),
  [643] = {.count = 1, .reusable = true}, SHIFT(254),
  [645] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [647] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
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
