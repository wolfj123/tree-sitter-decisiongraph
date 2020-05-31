#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 242
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_LBRACK = 1,
  anon_sym_todo = 2,
  anon_sym_COLON = 3,
  anon_sym_RBRACK = 4,
  aux_sym_free_text_token1 = 5,
  sym_free_text_no_colon = 6,
  anon_sym_ask = 7,
  anon_sym_LBRACE = 8,
  anon_sym_text = 9,
  anon_sym_RBRACE = 10,
  anon_sym_terms = 11,
  anon_sym_answers = 12,
  anon_sym_call = 13,
  anon_sym_GT = 14,
  anon_sym_consider = 15,
  anon_sym_slot = 16,
  anon_sym_options = 17,
  anon_sym_else = 18,
  anon_sym_when = 19,
  anon_sym_section = 20,
  anon_sym_title = 21,
  anon_sym_continue = 22,
  anon_sym_LBRACK_DASH_DASH = 23,
  anon_sym_DASH_DASH_RBRACK = 24,
  anon_sym_end = 25,
  anon_sym_reject = 26,
  anon_sym_set = 27,
  anon_sym_SEMI = 28,
  anon_sym_PLUS_EQ = 29,
  anon_sym_EQ = 30,
  anon_sym_SLASH = 31,
  anon_sym_COMMA = 32,
  aux_sym_slot_value_token1 = 33,
  anon_sym_POUNDimport = 34,
  sym_file_path = 35,
  aux_sym_decision_graph_name_token1 = 36,
  anon_sym_LT = 37,
  anon_sym_LT_DASH_DASH = 38,
  aux_sym_comment_token1 = 39,
  sym__comment_block = 40,
  sym_source_file = 41,
  sym_decision_graph = 42,
  sym__top_level_node = 43,
  sym_todo_node = 44,
  sym_free_text = 45,
  sym_free_text_no_end_bracket = 46,
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
  [sym_free_text_no_colon] = "free_text_no_colon",
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
  [sym_free_text_no_colon] = sym_free_text_no_colon,
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
  [sym_free_text_no_colon] = {
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
  [sym_free_text] = {
    .visible = true,
    .named = true,
  },
  [sym_free_text_no_end_bracket] = {
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
      if (eof) ADVANCE(84);
      if (lookahead == '#') ADVANCE(30);
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
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '<') ADVANCE(2);
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
          lookahead == 8217) ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(73);
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
          (lookahead < '.' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\\') ADVANCE(73);
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
          (lookahead < '.' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          lookahead != '|' &&
          lookahead != '}') ADVANCE(138);
      END_STATE();
    case 9:
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
          lookahead == 65279) SKIP(9)
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~' ||
          lookahead == 8217) ADVANCE(90);
      END_STATE();
    case 10:
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(201);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(131);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(123);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 35:
      if (lookahead == 'j') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'k') ADVANCE(92);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 55:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(42);
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 74:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 75:
      if (lookahead == 'w') ADVANCE(26);
      END_STATE();
    case 76:
      if (lookahead == '{') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 77:
      if (lookahead == '}') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
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
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '#') ADVANCE(30);
      if (lookahead == '+') ADVANCE(11);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '/') ADVANCE(133);
      if (lookahead == '<') ADVANCE(2);
      if (lookahead == '=') ADVANCE(132);
      if (lookahead == '>') ADVANCE(104);
      if (lookahead == '[') ADVANCE(85);
      if (lookahead == ']') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(43);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(55);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == 's') ADVANCE(20);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'w') ADVANCE(29);
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
      ACCEPT_TOKEN(aux_sym_free_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= ';') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~' ||
          lookahead == 8217) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_free_text_no_colon);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(91);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '9') ||
          lookahead == ';' ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~' ||
          lookahead == 8217) ADVANCE(91);
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
      if (lookahead == '\\') ADVANCE(73);
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
      if (lookahead == '\\') ADVANCE(73);
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
          lookahead != '/' &&
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
      if (lookahead == '\\') ADVANCE(73);
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
          lookahead != '/' &&
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
      if (lookahead == '\\') ADVANCE(73);
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
          lookahead != '/' &&
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
      if (lookahead == '\\') ADVANCE(73);
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
          lookahead == ' ') ADVANCE(78);
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
  [18] = {.lex_state = 8, .external_lex_state = 1},
  [19] = {.lex_state = 83, .external_lex_state = 1},
  [20] = {.lex_state = 83, .external_lex_state = 1},
  [21] = {.lex_state = 83, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 8, .external_lex_state = 1},
  [24] = {.lex_state = 83, .external_lex_state = 1},
  [25] = {.lex_state = 83, .external_lex_state = 1},
  [26] = {.lex_state = 83, .external_lex_state = 1},
  [27] = {.lex_state = 83, .external_lex_state = 1},
  [28] = {.lex_state = 83, .external_lex_state = 1},
  [29] = {.lex_state = 83, .external_lex_state = 1},
  [30] = {.lex_state = 8, .external_lex_state = 1},
  [31] = {.lex_state = 83, .external_lex_state = 1},
  [32] = {.lex_state = 83, .external_lex_state = 1},
  [33] = {.lex_state = 83, .external_lex_state = 1},
  [34] = {.lex_state = 83, .external_lex_state = 1},
  [35] = {.lex_state = 83, .external_lex_state = 1},
  [36] = {.lex_state = 83, .external_lex_state = 1},
  [37] = {.lex_state = 83, .external_lex_state = 1},
  [38] = {.lex_state = 8, .external_lex_state = 1},
  [39] = {.lex_state = 83, .external_lex_state = 1},
  [40] = {.lex_state = 83, .external_lex_state = 1},
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
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 83, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 83, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 0, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 10, .external_lex_state = 1},
  [64] = {.lex_state = 8, .external_lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 1},
  [71] = {.lex_state = 8, .external_lex_state = 1},
  [72] = {.lex_state = 83, .external_lex_state = 1},
  [73] = {.lex_state = 83, .external_lex_state = 1},
  [74] = {.lex_state = 83, .external_lex_state = 1},
  [75] = {.lex_state = 10, .external_lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 9, .external_lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 9, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 9, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 9, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 9, .external_lex_state = 1},
  [91] = {.lex_state = 8, .external_lex_state = 1},
  [92] = {.lex_state = 9, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 9, .external_lex_state = 1},
  [95] = {.lex_state = 9, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 9, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 83, .external_lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 83, .external_lex_state = 1},
  [106] = {.lex_state = 9, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
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
  [123] = {.lex_state = 10, .external_lex_state = 1},
  [124] = {.lex_state = 10, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 10, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 6, .external_lex_state = 1},
  [135] = {.lex_state = 0, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 6, .external_lex_state = 1},
  [138] = {.lex_state = 8, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 83, .external_lex_state = 1},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 8, .external_lex_state = 1},
  [148] = {.lex_state = 0, .external_lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 1},
  [152] = {.lex_state = 1, .external_lex_state = 1},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 83, .external_lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 1},
  [158] = {.lex_state = 0, .external_lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 1},
  [160] = {.lex_state = 0, .external_lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 83, .external_lex_state = 1},
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
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 0, .external_lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 1},
  [188] = {.lex_state = 83, .external_lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 0, .external_lex_state = 1},
  [191] = {.lex_state = 0, .external_lex_state = 1},
  [192] = {.lex_state = 83, .external_lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 1},
  [197] = {.lex_state = 83, .external_lex_state = 1},
  [198] = {.lex_state = 83, .external_lex_state = 1},
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
  [226] = {.lex_state = 83, .external_lex_state = 1},
  [227] = {.lex_state = 0, .external_lex_state = 1},
  [228] = {.lex_state = 0, .external_lex_state = 1},
  [229] = {.lex_state = 0, .external_lex_state = 1},
  [230] = {.lex_state = 0, .external_lex_state = 1},
  [231] = {.lex_state = 83, .external_lex_state = 1},
  [232] = {.lex_state = 0, .external_lex_state = 1},
  [233] = {.lex_state = 0, .external_lex_state = 1},
  [234] = {.lex_state = 0, .external_lex_state = 1},
  [235] = {.lex_state = 0, .external_lex_state = 1},
  [236] = {.lex_state = 0, .external_lex_state = 1},
  [237] = {.lex_state = 0, .external_lex_state = 1},
  [238] = {.lex_state = 0, .external_lex_state = 1},
  [239] = {.lex_state = 204},
  [240] = {-1},
  [241] = {-1},
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
    [sym_source_file] = STATE(228),
    [sym_decision_graph] = STATE(225),
    [sym__top_level_node] = STATE(43),
    [sym_todo_node] = STATE(42),
    [sym_ask_node] = STATE(42),
    [sym_call_node] = STATE(42),
    [sym_consider_node] = STATE(42),
    [sym_when_node] = STATE(42),
    [sym_section_node] = STATE(42),
    [sym_continue_node] = STATE(42),
    [sym_part_node] = STATE(42),
    [sym_end_node] = STATE(42),
    [sym_reject_node] = STATE(42),
    [sym_set_node] = STATE(42),
    [sym_import_node] = STATE(42),
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
    STATE(43), 1,
      sym__top_level_node,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(3), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(42), 12,
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
    STATE(8), 1,
      sym_info_sub_node,
    STATE(43), 1,
      sym__top_level_node,
    STATE(233), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(155), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(237), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(230), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(162), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(238), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(233), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(201), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(175), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(43), 1,
      sym__top_level_node,
    STATE(163), 1,
      sym_decision_graph,
    STATE(42), 12,
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
    STATE(53), 1,
      sym_slot_identifier,
    STATE(79), 1,
      sym_aggregate_assignment_slot,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(145), 1,
      sym_slot_reference,
    STATE(148), 1,
      sym_assignment_slot,
  [639] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(18), 1,
      sym_comment,
    STATE(53), 1,
      sym_slot_identifier,
    STATE(79), 1,
      sym_aggregate_assignment_slot,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(125), 1,
      sym_assignment_slot,
    STATE(145), 1,
      sym_slot_reference,
  [667] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(83), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_comment,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
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
      anon_sym_COMMA,
    STATE(22), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(93), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [747] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(23), 1,
      sym_comment,
    STATE(53), 1,
      sym_slot_identifier,
    STATE(79), 1,
      sym_aggregate_assignment_slot,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(96), 1,
      sym_assignment_slot,
    STATE(145), 1,
      sym_slot_reference,
  [775] = 5,
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
  [795] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [815] = 5,
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
  [835] = 5,
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
  [855] = 5,
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
  [875] = 5,
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
  [895] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(30), 1,
      sym_comment,
    STATE(53), 1,
      sym_slot_identifier,
    STATE(79), 1,
      sym_aggregate_assignment_slot,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(145), 1,
      sym_slot_reference,
    STATE(148), 1,
      sym_assignment_slot,
  [923] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(124), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [943] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [963] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(132), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(130), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [983] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(136), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(134), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1003] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1023] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1043] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1063] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(38), 1,
      sym_comment,
    STATE(53), 1,
      sym_slot_identifier,
    STATE(79), 1,
      sym_aggregate_assignment_slot,
    STATE(93), 1,
      sym_atomic_assignment_slot,
    STATE(145), 1,
      sym_slot_reference,
    STATE(146), 1,
      sym_assignment_slot,
  [1091] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(152), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1111] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1131] = 5,
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
  [1151] = 5,
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
  [1371] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
    STATE(57), 1,
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
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(54), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1413] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(55), 1,
      sym_comment,
    ACTIONS(214), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
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
    STATE(66), 1,
      aux_sym_when_node_repeat1,
    STATE(110), 1,
      sym_when_answer_sub_node,
    STATE(176), 1,
      sym_else_sub_node,
  [1455] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(57), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_slot_reference_repeat1,
    ACTIONS(220), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1476] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      sym_comment,
    STATE(66), 1,
      aux_sym_when_node_repeat1,
    STATE(110), 1,
      sym_when_answer_sub_node,
    STATE(161), 1,
      sym_else_sub_node,
  [1501] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(226), 1,
      anon_sym_SLASH,
    STATE(59), 2,
      sym_comment,
      aux_sym_slot_reference_repeat1,
    ACTIONS(224), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1520] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(60), 1,
      sym_comment,
    ACTIONS(93), 5,
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
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(54), 1,
      aux_sym__slot_values_repeat1,
    STATE(61), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
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
    STATE(67), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(136), 1,
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
    STATE(157), 1,
      sym_node_id_value,
    STATE(158), 1,
      sym_decision_graph_name,
    STATE(229), 1,
      sym_node_reference,
  [1602] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      aux_sym_slot_value_token1,
    STATE(61), 1,
      sym_slot_value,
    STATE(64), 1,
      sym_comment,
    STATE(107), 1,
      sym__slot_values,
  [1624] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      sym_consider_option_sub_node,
    STATE(65), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1644] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_when_answer_sub_node,
    STATE(66), 2,
      sym_comment,
      aux_sym_when_node_repeat1,
  [1664] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(136), 1,
      sym_term_sub_node,
  [1686] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(253), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(132), 1,
      sym_answer_sub_node,
    STATE(68), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1706] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
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
    STATE(65), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(70), 1,
      sym_comment,
    STATE(129), 1,
      sym_consider_option_sub_node,
  [1748] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(237), 1,
      anon_sym_LBRACE,
    ACTIONS(239), 1,
      aux_sym_slot_value_token1,
    STATE(61), 1,
      sym_slot_value,
    STATE(71), 1,
      sym_comment,
    STATE(220), 1,
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
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(269), 1,
      anon_sym_terms,
    ACTIONS(271), 1,
      anon_sym_answers,
    STATE(73), 1,
      sym_comment,
    STATE(198), 1,
      sym_node_id,
  [1808] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(74), 1,
      sym_comment,
    ACTIONS(224), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1824] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(235), 1,
      aux_sym_decision_graph_name_token1,
    STATE(75), 1,
      sym_comment,
    STATE(157), 1,
      sym_node_id_value,
    STATE(158), 1,
      sym_decision_graph_name,
    STATE(159), 1,
      sym_node_reference,
  [1846] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(132), 1,
      sym_answer_sub_node,
  [1868] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(136), 1,
      sym_term_sub_node,
  [1890] = 7,
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
    STATE(78), 1,
      sym_comment,
    STATE(136), 1,
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
  [1927] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      sym_comment,
    STATE(166), 1,
      sym_free_text,
  [1946] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(81), 1,
      sym_comment,
    STATE(129), 1,
      sym_consider_option_sub_node,
  [1965] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_comment,
    STATE(203), 1,
      sym_free_text_no_end_bracket,
  [1984] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      aux_sym_when_node_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(110), 1,
      sym_when_answer_sub_node,
  [2003] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_comment,
    STATE(98), 1,
      aux_sym__slot_values_repeat1,
  [2022] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_comment,
    STATE(154), 1,
      sym_free_text_no_end_bracket,
  [2041] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(289), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      aux_sym_when_node_repeat1,
    STATE(86), 1,
      sym_comment,
    STATE(110), 1,
      sym_when_answer_sub_node,
  [2060] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym_comment,
    STATE(221), 1,
      sym_free_text_no_end_bracket,
  [2079] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(88), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2094] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(89), 1,
      sym_comment,
    STATE(132), 1,
      sym_answer_sub_node,
  [2113] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(90), 1,
      sym_comment,
    STATE(177), 1,
      sym_free_text_no_end_bracket,
  [2132] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(53), 1,
      sym_slot_identifier,
    STATE(91), 1,
      sym_comment,
    STATE(172), 1,
      sym_slot_reference,
  [2151] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_comment,
    STATE(160), 1,
      sym_free_text_no_end_bracket,
  [2170] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(93), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2185] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(285), 1,
      aux_sym_free_text_token1,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      sym_comment,
    STATE(234), 1,
      sym_free_text_no_end_bracket,
  [2204] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_comment,
    STATE(187), 1,
      sym_free_text,
  [2223] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(96), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2238] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(97), 1,
      sym_comment,
    ACTIONS(309), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2253] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(98), 1,
      sym_comment,
  [2272] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_comment,
    STATE(143), 1,
      sym_terms_sub_node,
    STATE(151), 1,
      sym_answers_sub_node,
  [2291] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_comment,
    STATE(180), 1,
      sym_else_sub_node,
  [2310] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_comment,
    STATE(227), 1,
      sym_free_text,
  [2329] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      sym_comment,
    STATE(183), 1,
      sym_else_sub_node,
  [2348] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(323), 1,
      anon_sym_text,
    STATE(103), 1,
      sym_comment,
    STATE(192), 1,
      sym_node_id,
  [2367] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_comment,
    STATE(133), 1,
      sym_terms_sub_node,
    STATE(214), 1,
      sym_answers_sub_node,
  [2386] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(325), 1,
      anon_sym_title,
    STATE(105), 1,
      sym_comment,
    STATE(231), 1,
      sym_node_id,
  [2405] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      aux_sym_free_text_token1,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_comment,
    STATE(235), 1,
      sym_free_text,
  [2424] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(107), 1,
      sym_comment,
    ACTIONS(329), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2439] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(108), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2454] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(102), 1,
      sym_consider_options_sub_node,
    STATE(109), 1,
      sym_comment,
  [2470] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(110), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2484] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(111), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2498] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(112), 1,
      sym_comment,
    ACTIONS(339), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2512] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(113), 1,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2526] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(114), 1,
      sym_comment,
    ACTIONS(343), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2540] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(239), 1,
      aux_sym_slot_value_token1,
    STATE(88), 1,
      sym_slot_value,
    STATE(115), 1,
      sym_comment,
  [2556] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(74), 1,
      sym_slot_identifier,
    STATE(116), 1,
      sym_comment,
  [2572] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(117), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2586] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    STATE(13), 1,
      sym_node_id,
    STATE(118), 1,
      sym_comment,
  [2602] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(119), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2616] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(120), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2630] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(351), 1,
      anon_sym_LBRACK,
    ACTIONS(353), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(121), 1,
      sym_comment,
  [2646] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(122), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2660] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(357), 1,
      aux_sym_decision_graph_name_token1,
    STATE(123), 1,
      sym_comment,
    STATE(193), 1,
      sym_node_id_value,
  [2676] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(357), 1,
      aux_sym_decision_graph_name_token1,
    STATE(124), 1,
      sym_comment,
    STATE(194), 1,
      sym_node_id_value,
  [2692] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    STATE(125), 1,
      sym_comment,
  [2708] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(363), 1,
      anon_sym_LBRACK,
    ACTIONS(365), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(126), 1,
      sym_comment,
  [2724] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(127), 1,
      sym_comment,
    ACTIONS(367), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2738] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(369), 1,
      aux_sym_decision_graph_name_token1,
    STATE(128), 1,
      sym_comment,
    STATE(184), 1,
      sym_decision_graph_name,
  [2754] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(129), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2768] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_text_sub_node,
    STATE(130), 1,
      sym_comment,
  [2784] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    ACTIONS(377), 1,
      anon_sym_LT,
    STATE(131), 1,
      sym_comment,
  [2800] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(132), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2814] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_comment,
    STATE(151), 1,
      sym_answers_sub_node,
  [2830] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(383), 1,
      anon_sym_COLON,
    ACTIONS(385), 1,
      sym_free_text_no_colon,
    STATE(134), 1,
      sym_comment,
  [2846] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_comment,
    STATE(141), 1,
      sym_slot_sub_node,
  [2862] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(136), 1,
      sym_comment,
    ACTIONS(389), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2876] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(391), 1,
      anon_sym_COLON,
    ACTIONS(393), 1,
      sym_free_text_no_colon,
    STATE(137), 1,
      sym_comment,
  [2892] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(239), 1,
      aux_sym_slot_value_token1,
    STATE(60), 1,
      sym_slot_value,
    STATE(138), 1,
      sym_comment,
  [2908] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(395), 1,
      anon_sym_LBRACK,
    ACTIONS(397), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(139), 1,
      sym_comment,
  [2924] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(387), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_slot_sub_node,
    STATE(140), 1,
      sym_comment,
  [2940] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(333), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_consider_options_sub_node,
    STATE(141), 1,
      sym_comment,
  [2956] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(373), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_text_sub_node,
    STATE(142), 1,
      sym_comment,
  [2972] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_comment,
    STATE(182), 1,
      sym_answers_sub_node,
  [2988] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(375), 1,
      anon_sym_RBRACK,
    ACTIONS(399), 1,
      anon_sym_GT,
    STATE(144), 1,
      sym_comment,
  [3004] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(401), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(403), 1,
      anon_sym_EQ,
    STATE(145), 1,
      sym_comment,
  [3020] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      sym_comment,
  [3036] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(239), 1,
      aux_sym_slot_value_token1,
    STATE(84), 1,
      sym_slot_value,
    STATE(147), 1,
      sym_comment,
  [3052] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(361), 1,
      anon_sym_SEMI,
    ACTIONS(407), 1,
      anon_sym_COLON,
    STATE(148), 1,
      sym_comment,
  [3068] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(149), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [3082] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(411), 1,
      anon_sym_COLON,
    STATE(150), 1,
      sym_comment,
  [3095] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_comment,
  [3108] = 4,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(415), 1,
      sym_file_path,
    ACTIONS(417), 1,
      anon_sym_LT_DASH_DASH,
    STATE(152), 1,
      sym_comment,
  [3121] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(419), 1,
      anon_sym_COLON,
    STATE(153), 1,
      sym_comment,
  [3134] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(295), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_comment,
  [3147] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym_comment,
  [3160] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(423), 1,
      anon_sym_slot,
    STATE(156), 1,
      sym_comment,
  [3173] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_comment,
  [3186] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(427), 1,
      anon_sym_GT,
    STATE(158), 1,
      sym_comment,
  [3199] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(429), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
  [3212] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_comment,
  [3225] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_comment,
  [3238] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_comment,
  [3251] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(435), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(163), 1,
      sym_comment,
  [3264] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_comment,
  [3277] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_comment,
  [3290] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_comment,
  [3303] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(441), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_comment,
  [3316] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(443), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym_comment,
  [3329] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_comment,
  [3342] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(447), 1,
      anon_sym_COLON,
    STATE(170), 1,
      sym_comment,
  [3355] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_comment,
  [3368] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_comment,
  [3381] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(453), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_comment,
  [3394] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(455), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_comment,
  [3407] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(175), 1,
      sym_comment,
  [3420] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(222), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_comment,
  [3433] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym_comment,
  [3446] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(459), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym_comment,
  [3459] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(461), 1,
      anon_sym_COLON,
    STATE(179), 1,
      sym_comment,
  [3472] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      sym_comment,
  [3485] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(463), 1,
      anon_sym_COLON,
    STATE(181), 1,
      sym_comment,
  [3498] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      sym_comment,
  [3511] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_comment,
  [3524] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(469), 1,
      anon_sym_COLON,
    STATE(184), 1,
      sym_comment,
  [3537] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(399), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
  [3550] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(471), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_comment,
  [3563] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(187), 1,
      sym_comment,
  [3576] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(475), 1,
      anon_sym_else,
    STATE(188), 1,
      sym_comment,
  [3589] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_comment,
  [3602] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(479), 1,
      anon_sym_COLON,
    STATE(190), 1,
      sym_comment,
  [3615] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(481), 1,
      anon_sym_COLON,
    STATE(191), 1,
      sym_comment,
  [3628] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(483), 1,
      anon_sym_text,
    STATE(192), 1,
      sym_comment,
  [3641] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      sym_comment,
  [3654] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(487), 1,
      anon_sym_LT,
    STATE(194), 1,
      sym_comment,
  [3667] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(489), 1,
      anon_sym_COLON,
    STATE(195), 1,
      sym_comment,
  [3680] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_comment,
  [3693] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(271), 1,
      anon_sym_answers,
    STATE(197), 1,
      sym_comment,
  [3706] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(493), 1,
      anon_sym_terms,
    STATE(198), 1,
      sym_comment,
  [3719] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(495), 1,
      anon_sym_COLON,
    STATE(199), 1,
      sym_comment,
  [3732] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(497), 1,
      anon_sym_COLON,
    STATE(200), 1,
      sym_comment,
  [3745] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    STATE(201), 1,
      sym_comment,
  [3758] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(501), 1,
      anon_sym_COLON,
    STATE(202), 1,
      sym_comment,
  [3771] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      sym_comment,
  [3784] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(505), 1,
      anon_sym_COLON,
    STATE(204), 1,
      sym_comment,
  [3797] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(507), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_comment,
  [3810] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      sym_comment,
  [3823] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(511), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      sym_comment,
  [3836] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(513), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym_comment,
  [3849] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(515), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym_comment,
  [3862] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(517), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_comment,
  [3875] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(519), 1,
      anon_sym_COLON,
    STATE(211), 1,
      sym_comment,
  [3888] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(521), 1,
      anon_sym_COLON,
    STATE(212), 1,
      sym_comment,
  [3901] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(523), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym_comment,
  [3914] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    STATE(214), 1,
      sym_comment,
  [3927] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(527), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_comment,
  [3940] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(216), 1,
      sym_comment,
  [3953] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(217), 1,
      sym_comment,
  [3966] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(533), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym_comment,
  [3979] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(535), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym_comment,
  [3992] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(537), 1,
      anon_sym_COLON,
    STATE(220), 1,
      sym_comment,
  [4005] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_comment,
  [4018] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym_comment,
  [4031] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
  [4044] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(224), 1,
      sym_comment,
  [4057] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(547), 1,
      ts_builtin_sym_end,
    STATE(225), 1,
      sym_comment,
  [4070] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(549), 1,
      anon_sym_options,
    STATE(226), 1,
      sym_comment,
  [4083] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_comment,
  [4096] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(551), 1,
      ts_builtin_sym_end,
    STATE(228), 1,
      sym_comment,
  [4109] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym_comment,
  [4122] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(230), 1,
      sym_comment,
  [4135] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(555), 1,
      anon_sym_title,
    STATE(231), 1,
      sym_comment,
  [4148] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(557), 1,
      anon_sym_LBRACE,
    STATE(232), 1,
      sym_comment,
  [4161] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    STATE(233), 1,
      sym_comment,
  [4174] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(561), 1,
      anon_sym_RBRACK,
    STATE(234), 1,
      sym_comment,
  [4187] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    STATE(235), 1,
      sym_comment,
  [4200] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(236), 1,
      sym_comment,
  [4213] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
    STATE(237), 1,
      sym_comment,
  [4226] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_comment,
  [4239] = 1,
    ACTIONS(571), 1,
      aux_sym_comment_token1,
  [4243] = 1,
    ACTIONS(573), 1,
      ts_builtin_sym_end,
  [4247] = 1,
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
  [SMALL_STATE(19)] = 667,
  [SMALL_STATE(20)] = 687,
  [SMALL_STATE(21)] = 707,
  [SMALL_STATE(22)] = 727,
  [SMALL_STATE(23)] = 747,
  [SMALL_STATE(24)] = 775,
  [SMALL_STATE(25)] = 795,
  [SMALL_STATE(26)] = 815,
  [SMALL_STATE(27)] = 835,
  [SMALL_STATE(28)] = 855,
  [SMALL_STATE(29)] = 875,
  [SMALL_STATE(30)] = 895,
  [SMALL_STATE(31)] = 923,
  [SMALL_STATE(32)] = 943,
  [SMALL_STATE(33)] = 963,
  [SMALL_STATE(34)] = 983,
  [SMALL_STATE(35)] = 1003,
  [SMALL_STATE(36)] = 1023,
  [SMALL_STATE(37)] = 1043,
  [SMALL_STATE(38)] = 1063,
  [SMALL_STATE(39)] = 1091,
  [SMALL_STATE(40)] = 1111,
  [SMALL_STATE(41)] = 1131,
  [SMALL_STATE(42)] = 1151,
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
  [SMALL_STATE(54)] = 1392,
  [SMALL_STATE(55)] = 1413,
  [SMALL_STATE(56)] = 1430,
  [SMALL_STATE(57)] = 1455,
  [SMALL_STATE(58)] = 1476,
  [SMALL_STATE(59)] = 1501,
  [SMALL_STATE(60)] = 1520,
  [SMALL_STATE(61)] = 1537,
  [SMALL_STATE(62)] = 1558,
  [SMALL_STATE(63)] = 1580,
  [SMALL_STATE(64)] = 1602,
  [SMALL_STATE(65)] = 1624,
  [SMALL_STATE(66)] = 1644,
  [SMALL_STATE(67)] = 1664,
  [SMALL_STATE(68)] = 1686,
  [SMALL_STATE(69)] = 1706,
  [SMALL_STATE(70)] = 1726,
  [SMALL_STATE(71)] = 1748,
  [SMALL_STATE(72)] = 1770,
  [SMALL_STATE(73)] = 1786,
  [SMALL_STATE(74)] = 1808,
  [SMALL_STATE(75)] = 1824,
  [SMALL_STATE(76)] = 1846,
  [SMALL_STATE(77)] = 1868,
  [SMALL_STATE(78)] = 1890,
  [SMALL_STATE(79)] = 1912,
  [SMALL_STATE(80)] = 1927,
  [SMALL_STATE(81)] = 1946,
  [SMALL_STATE(82)] = 1965,
  [SMALL_STATE(83)] = 1984,
  [SMALL_STATE(84)] = 2003,
  [SMALL_STATE(85)] = 2022,
  [SMALL_STATE(86)] = 2041,
  [SMALL_STATE(87)] = 2060,
  [SMALL_STATE(88)] = 2079,
  [SMALL_STATE(89)] = 2094,
  [SMALL_STATE(90)] = 2113,
  [SMALL_STATE(91)] = 2132,
  [SMALL_STATE(92)] = 2151,
  [SMALL_STATE(93)] = 2170,
  [SMALL_STATE(94)] = 2185,
  [SMALL_STATE(95)] = 2204,
  [SMALL_STATE(96)] = 2223,
  [SMALL_STATE(97)] = 2238,
  [SMALL_STATE(98)] = 2253,
  [SMALL_STATE(99)] = 2272,
  [SMALL_STATE(100)] = 2291,
  [SMALL_STATE(101)] = 2310,
  [SMALL_STATE(102)] = 2329,
  [SMALL_STATE(103)] = 2348,
  [SMALL_STATE(104)] = 2367,
  [SMALL_STATE(105)] = 2386,
  [SMALL_STATE(106)] = 2405,
  [SMALL_STATE(107)] = 2424,
  [SMALL_STATE(108)] = 2439,
  [SMALL_STATE(109)] = 2454,
  [SMALL_STATE(110)] = 2470,
  [SMALL_STATE(111)] = 2484,
  [SMALL_STATE(112)] = 2498,
  [SMALL_STATE(113)] = 2512,
  [SMALL_STATE(114)] = 2526,
  [SMALL_STATE(115)] = 2540,
  [SMALL_STATE(116)] = 2556,
  [SMALL_STATE(117)] = 2572,
  [SMALL_STATE(118)] = 2586,
  [SMALL_STATE(119)] = 2602,
  [SMALL_STATE(120)] = 2616,
  [SMALL_STATE(121)] = 2630,
  [SMALL_STATE(122)] = 2646,
  [SMALL_STATE(123)] = 2660,
  [SMALL_STATE(124)] = 2676,
  [SMALL_STATE(125)] = 2692,
  [SMALL_STATE(126)] = 2708,
  [SMALL_STATE(127)] = 2724,
  [SMALL_STATE(128)] = 2738,
  [SMALL_STATE(129)] = 2754,
  [SMALL_STATE(130)] = 2768,
  [SMALL_STATE(131)] = 2784,
  [SMALL_STATE(132)] = 2800,
  [SMALL_STATE(133)] = 2814,
  [SMALL_STATE(134)] = 2830,
  [SMALL_STATE(135)] = 2846,
  [SMALL_STATE(136)] = 2862,
  [SMALL_STATE(137)] = 2876,
  [SMALL_STATE(138)] = 2892,
  [SMALL_STATE(139)] = 2908,
  [SMALL_STATE(140)] = 2924,
  [SMALL_STATE(141)] = 2940,
  [SMALL_STATE(142)] = 2956,
  [SMALL_STATE(143)] = 2972,
  [SMALL_STATE(144)] = 2988,
  [SMALL_STATE(145)] = 3004,
  [SMALL_STATE(146)] = 3020,
  [SMALL_STATE(147)] = 3036,
  [SMALL_STATE(148)] = 3052,
  [SMALL_STATE(149)] = 3068,
  [SMALL_STATE(150)] = 3082,
  [SMALL_STATE(151)] = 3095,
  [SMALL_STATE(152)] = 3108,
  [SMALL_STATE(153)] = 3121,
  [SMALL_STATE(154)] = 3134,
  [SMALL_STATE(155)] = 3147,
  [SMALL_STATE(156)] = 3160,
  [SMALL_STATE(157)] = 3173,
  [SMALL_STATE(158)] = 3186,
  [SMALL_STATE(159)] = 3199,
  [SMALL_STATE(160)] = 3212,
  [SMALL_STATE(161)] = 3225,
  [SMALL_STATE(162)] = 3238,
  [SMALL_STATE(163)] = 3251,
  [SMALL_STATE(164)] = 3264,
  [SMALL_STATE(165)] = 3277,
  [SMALL_STATE(166)] = 3290,
  [SMALL_STATE(167)] = 3303,
  [SMALL_STATE(168)] = 3316,
  [SMALL_STATE(169)] = 3329,
  [SMALL_STATE(170)] = 3342,
  [SMALL_STATE(171)] = 3355,
  [SMALL_STATE(172)] = 3368,
  [SMALL_STATE(173)] = 3381,
  [SMALL_STATE(174)] = 3394,
  [SMALL_STATE(175)] = 3407,
  [SMALL_STATE(176)] = 3420,
  [SMALL_STATE(177)] = 3433,
  [SMALL_STATE(178)] = 3446,
  [SMALL_STATE(179)] = 3459,
  [SMALL_STATE(180)] = 3472,
  [SMALL_STATE(181)] = 3485,
  [SMALL_STATE(182)] = 3498,
  [SMALL_STATE(183)] = 3511,
  [SMALL_STATE(184)] = 3524,
  [SMALL_STATE(185)] = 3537,
  [SMALL_STATE(186)] = 3550,
  [SMALL_STATE(187)] = 3563,
  [SMALL_STATE(188)] = 3576,
  [SMALL_STATE(189)] = 3589,
  [SMALL_STATE(190)] = 3602,
  [SMALL_STATE(191)] = 3615,
  [SMALL_STATE(192)] = 3628,
  [SMALL_STATE(193)] = 3641,
  [SMALL_STATE(194)] = 3654,
  [SMALL_STATE(195)] = 3667,
  [SMALL_STATE(196)] = 3680,
  [SMALL_STATE(197)] = 3693,
  [SMALL_STATE(198)] = 3706,
  [SMALL_STATE(199)] = 3719,
  [SMALL_STATE(200)] = 3732,
  [SMALL_STATE(201)] = 3745,
  [SMALL_STATE(202)] = 3758,
  [SMALL_STATE(203)] = 3771,
  [SMALL_STATE(204)] = 3784,
  [SMALL_STATE(205)] = 3797,
  [SMALL_STATE(206)] = 3810,
  [SMALL_STATE(207)] = 3823,
  [SMALL_STATE(208)] = 3836,
  [SMALL_STATE(209)] = 3849,
  [SMALL_STATE(210)] = 3862,
  [SMALL_STATE(211)] = 3875,
  [SMALL_STATE(212)] = 3888,
  [SMALL_STATE(213)] = 3901,
  [SMALL_STATE(214)] = 3914,
  [SMALL_STATE(215)] = 3927,
  [SMALL_STATE(216)] = 3940,
  [SMALL_STATE(217)] = 3953,
  [SMALL_STATE(218)] = 3966,
  [SMALL_STATE(219)] = 3979,
  [SMALL_STATE(220)] = 3992,
  [SMALL_STATE(221)] = 4005,
  [SMALL_STATE(222)] = 4018,
  [SMALL_STATE(223)] = 4031,
  [SMALL_STATE(224)] = 4044,
  [SMALL_STATE(225)] = 4057,
  [SMALL_STATE(226)] = 4070,
  [SMALL_STATE(227)] = 4083,
  [SMALL_STATE(228)] = 4096,
  [SMALL_STATE(229)] = 4109,
  [SMALL_STATE(230)] = 4122,
  [SMALL_STATE(231)] = 4135,
  [SMALL_STATE(232)] = 4148,
  [SMALL_STATE(233)] = 4161,
  [SMALL_STATE(234)] = 4174,
  [SMALL_STATE(235)] = 4187,
  [SMALL_STATE(236)] = 4200,
  [SMALL_STATE(237)] = 4213,
  [SMALL_STATE(238)] = 4226,
  [SMALL_STATE(239)] = 4239,
  [SMALL_STATE(240)] = 4243,
  [SMALL_STATE(241)] = 4247,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(239),
  [5] = {.count = 1, .reusable = true}, SHIFT(240),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(118),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(118),
  [21] = {.count = 1, .reusable = true}, SHIFT(105),
  [23] = {.count = 1, .reusable = true}, SHIFT(114),
  [25] = {.count = 1, .reusable = true}, SHIFT(119),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [31] = {.count = 1, .reusable = true}, SHIFT(219),
  [33] = {.count = 1, .reusable = true}, SHIFT(218),
  [35] = {.count = 1, .reusable = true}, SHIFT(215),
  [37] = {.count = 1, .reusable = true}, SHIFT(124),
  [39] = {.count = 1, .reusable = true}, SHIFT(211),
  [41] = {.count = 1, .reusable = true}, SHIFT(209),
  [43] = {.count = 1, .reusable = true}, SHIFT(208),
  [45] = {.count = 1, .reusable = true}, SHIFT(207),
  [47] = {.count = 1, .reusable = true}, SHIFT(206),
  [49] = {.count = 1, .reusable = true}, SHIFT(205),
  [51] = {.count = 1, .reusable = true}, SHIFT(204),
  [53] = {.count = 1, .reusable = true}, SHIFT(128),
  [55] = {.count = 1, .reusable = true}, SHIFT(181),
  [57] = {.count = 1, .reusable = true}, SHIFT(179),
  [59] = {.count = 1, .reusable = true}, SHIFT(178),
  [61] = {.count = 1, .reusable = true}, SHIFT(150),
  [63] = {.count = 1, .reusable = true}, SHIFT(174),
  [65] = {.count = 1, .reusable = true}, SHIFT(173),
  [67] = {.count = 1, .reusable = true}, SHIFT(171),
  [69] = {.count = 1, .reusable = true}, SHIFT(169),
  [71] = {.count = 1, .reusable = true}, SHIFT(168),
  [73] = {.count = 1, .reusable = true}, SHIFT(167),
  [75] = {.count = 1, .reusable = false}, SHIFT(195),
  [77] = {.count = 1, .reusable = false}, SHIFT(72),
  [79] = {.count = 1, .reusable = true}, SHIFT(72),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [93] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(138),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 4),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 4),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 3),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 3),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [166] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [168] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 1),
  [208] = {.count = 1, .reusable = true}, SHIFT(116),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [212] = {.count = 1, .reusable = true}, SHIFT(138),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [216] = {.count = 1, .reusable = true}, SHIFT(37),
  [218] = {.count = 1, .reusable = true}, SHIFT(17),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 2),
  [222] = {.count = 1, .reusable = true}, SHIFT(45),
  [224] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2), SHIFT_REPEAT(116),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [231] = {.count = 1, .reusable = true}, SHIFT(137),
  [233] = {.count = 1, .reusable = true}, SHIFT(213),
  [235] = {.count = 1, .reusable = true}, SHIFT(144),
  [237] = {.count = 1, .reusable = true}, SHIFT(147),
  [239] = {.count = 1, .reusable = true}, SHIFT(55),
  [241] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(71),
  [244] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [246] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2), SHIFT_REPEAT(30),
  [251] = {.count = 1, .reusable = true}, SHIFT(232),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(134),
  [256] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [258] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(137),
  [261] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [263] = {.count = 1, .reusable = true}, SHIFT(71),
  [265] = {.count = 1, .reusable = true}, SHIFT(122),
  [267] = {.count = 1, .reusable = true}, REDUCE(sym_slot_identifier, 1),
  [269] = {.count = 1, .reusable = true}, SHIFT(200),
  [271] = {.count = 1, .reusable = true}, SHIFT(199),
  [273] = {.count = 1, .reusable = true}, SHIFT(134),
  [275] = {.count = 1, .reusable = true}, SHIFT(217),
  [277] = {.count = 1, .reusable = true}, SHIFT(189),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [281] = {.count = 1, .reusable = true}, SHIFT(164),
  [283] = {.count = 1, .reusable = true}, SHIFT(165),
  [285] = {.count = 1, .reusable = true}, SHIFT(149),
  [287] = {.count = 1, .reusable = true}, SHIFT(126),
  [289] = {.count = 1, .reusable = true}, SHIFT(30),
  [291] = {.count = 1, .reusable = true}, SHIFT(97),
  [293] = {.count = 1, .reusable = true}, SHIFT(49),
  [295] = {.count = 1, .reusable = true}, SHIFT(39),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [299] = {.count = 1, .reusable = true}, SHIFT(139),
  [301] = {.count = 1, .reusable = true}, SHIFT(52),
  [303] = {.count = 1, .reusable = true}, SHIFT(27),
  [305] = {.count = 1, .reusable = true}, SHIFT(186),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [309] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [311] = {.count = 1, .reusable = true}, SHIFT(108),
  [313] = {.count = 1, .reusable = true}, SHIFT(73),
  [315] = {.count = 1, .reusable = true}, SHIFT(41),
  [317] = {.count = 1, .reusable = true}, SHIFT(188),
  [319] = {.count = 1, .reusable = true}, SHIFT(120),
  [321] = {.count = 1, .reusable = true}, SHIFT(44),
  [323] = {.count = 1, .reusable = true}, SHIFT(190),
  [325] = {.count = 1, .reusable = true}, SHIFT(222),
  [327] = {.count = 1, .reusable = true}, SHIFT(117),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [333] = {.count = 1, .reusable = true}, SHIFT(226),
  [335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 1),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [343] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 3),
  [349] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [357] = {.count = 1, .reusable = true}, SHIFT(131),
  [359] = {.count = 1, .reusable = true}, SHIFT(50),
  [361] = {.count = 1, .reusable = true}, SHIFT(23),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [367] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [369] = {.count = 1, .reusable = true}, SHIFT(185),
  [371] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [373] = {.count = 1, .reusable = true}, SHIFT(103),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [377] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [379] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [381] = {.count = 1, .reusable = true}, SHIFT(197),
  [383] = {.count = 1, .reusable = true}, SHIFT(7),
  [385] = {.count = 1, .reusable = true}, SHIFT(216),
  [387] = {.count = 1, .reusable = true}, SHIFT(156),
  [389] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [391] = {.count = 1, .reusable = true}, SHIFT(101),
  [393] = {.count = 1, .reusable = true}, SHIFT(212),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [401] = {.count = 1, .reusable = true}, SHIFT(64),
  [403] = {.count = 1, .reusable = true}, SHIFT(115),
  [405] = {.count = 1, .reusable = true}, SHIFT(47),
  [407] = {.count = 1, .reusable = true}, SHIFT(12),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_free_text_no_end_bracket, 1),
  [411] = {.count = 1, .reusable = true}, SHIFT(140),
  [413] = {.count = 1, .reusable = true}, SHIFT(46),
  [415] = {.count = 1, .reusable = true}, SHIFT(236),
  [417] = {.count = 1, .reusable = false}, SHIFT(239),
  [419] = {.count = 1, .reusable = true}, SHIFT(82),
  [421] = {.count = 1, .reusable = true}, SHIFT(34),
  [423] = {.count = 1, .reusable = true}, SHIFT(224),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 1),
  [427] = {.count = 1, .reusable = true}, SHIFT(123),
  [429] = {.count = 1, .reusable = true}, SHIFT(25),
  [431] = {.count = 1, .reusable = true}, SHIFT(19),
  [433] = {.count = 1, .reusable = true}, SHIFT(32),
  [435] = {.count = 1, .reusable = true}, SHIFT(29),
  [437] = {.count = 1, .reusable = true}, REDUCE(sym_free_text, 1),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [441] = {.count = 1, .reusable = true}, SHIFT(18),
  [443] = {.count = 1, .reusable = true}, SHIFT(87),
  [445] = {.count = 1, .reusable = true}, SHIFT(31),
  [447] = {.count = 1, .reusable = true}, SHIFT(62),
  [449] = {.count = 1, .reusable = true}, SHIFT(33),
  [451] = {.count = 1, .reusable = true}, SHIFT(196),
  [453] = {.count = 1, .reusable = true}, SHIFT(4),
  [455] = {.count = 1, .reusable = true}, SHIFT(83),
  [457] = {.count = 1, .reusable = true}, SHIFT(127),
  [459] = {.count = 1, .reusable = true}, SHIFT(63),
  [461] = {.count = 1, .reusable = true}, SHIFT(142),
  [463] = {.count = 1, .reusable = true}, SHIFT(94),
  [465] = {.count = 1, .reusable = true}, SHIFT(21),
  [467] = {.count = 1, .reusable = true}, SHIFT(20),
  [469] = {.count = 1, .reusable = true}, SHIFT(152),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [473] = {.count = 1, .reusable = true}, SHIFT(210),
  [475] = {.count = 1, .reusable = true}, SHIFT(195),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [479] = {.count = 1, .reusable = true}, SHIFT(80),
  [481] = {.count = 1, .reusable = true}, SHIFT(81),
  [483] = {.count = 1, .reusable = true}, SHIFT(202),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 3),
  [487] = {.count = 1, .reusable = false}, SHIFT(14),
  [489] = {.count = 1, .reusable = true}, SHIFT(11),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [493] = {.count = 1, .reusable = true}, SHIFT(170),
  [495] = {.count = 1, .reusable = true}, SHIFT(89),
  [497] = {.count = 1, .reusable = true}, SHIFT(77),
  [499] = {.count = 1, .reusable = true}, SHIFT(223),
  [501] = {.count = 1, .reusable = true}, SHIFT(95),
  [503] = {.count = 1, .reusable = true}, SHIFT(121),
  [505] = {.count = 1, .reusable = true}, SHIFT(38),
  [507] = {.count = 1, .reusable = true}, SHIFT(85),
  [509] = {.count = 1, .reusable = true}, SHIFT(36),
  [511] = {.count = 1, .reusable = true}, SHIFT(35),
  [513] = {.count = 1, .reusable = true}, SHIFT(5),
  [515] = {.count = 1, .reusable = true}, SHIFT(86),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [519] = {.count = 1, .reusable = true}, SHIFT(135),
  [521] = {.count = 1, .reusable = true}, SHIFT(106),
  [523] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [525] = {.count = 1, .reusable = true}, SHIFT(26),
  [527] = {.count = 1, .reusable = true}, SHIFT(75),
  [529] = {.count = 1, .reusable = true}, SHIFT(6),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [533] = {.count = 1, .reusable = true}, SHIFT(130),
  [535] = {.count = 1, .reusable = true}, SHIFT(92),
  [537] = {.count = 1, .reusable = true}, SHIFT(9),
  [539] = {.count = 1, .reusable = true}, SHIFT(51),
  [541] = {.count = 1, .reusable = true}, SHIFT(90),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [545] = {.count = 1, .reusable = true}, SHIFT(91),
  [547] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [549] = {.count = 1, .reusable = true}, SHIFT(191),
  [551] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [553] = {.count = 1, .reusable = true}, SHIFT(40),
  [555] = {.count = 1, .reusable = true}, SHIFT(153),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [559] = {.count = 1, .reusable = true}, SHIFT(48),
  [561] = {.count = 1, .reusable = true}, SHIFT(28),
  [563] = {.count = 1, .reusable = true}, SHIFT(113),
  [565] = {.count = 1, .reusable = true}, SHIFT(24),
  [567] = {.count = 1, .reusable = true}, SHIFT(112),
  [569] = {.count = 1, .reusable = true}, SHIFT(111),
  [571] = {.count = 1, .reusable = true}, SHIFT(241),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
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
