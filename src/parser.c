#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 240
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
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
  sym_free_text = 5,
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
  sym_ask_node = 45,
  sym_text_sub_node = 46,
  sym_terms_sub_node = 47,
  sym_term_sub_node = 48,
  sym_answers_sub_node = 49,
  sym_answer_sub_node = 50,
  sym_call_node = 51,
  sym_node_reference = 52,
  sym_consider_node = 53,
  sym_slot_sub_node = 54,
  sym_consider_options_sub_node = 55,
  sym_consider_option_sub_node = 56,
  sym_else_sub_node = 57,
  sym_when_node = 58,
  sym_when_answer_sub_node = 59,
  sym_section_node = 60,
  sym_info_sub_node = 61,
  sym_continue_node = 62,
  sym_part_node = 63,
  sym_end_node = 64,
  sym_reject_node = 65,
  sym_set_node = 66,
  sym_assignment_slot = 67,
  sym_aggregate_assignment_slot = 68,
  sym_atomic_assignment_slot = 69,
  sym_slot_reference = 70,
  sym__slot_values = 71,
  sym_slot_value = 72,
  sym_slot_identifier = 73,
  sym_import_node = 74,
  sym_decision_graph_name = 75,
  sym_node_id = 76,
  sym_node_id_value = 77,
  sym_comment = 78,
  aux_sym_decision_graph_repeat1 = 79,
  aux_sym_terms_sub_node_repeat1 = 80,
  aux_sym_answers_sub_node_repeat1 = 81,
  aux_sym_consider_options_sub_node_repeat1 = 82,
  aux_sym_when_node_repeat1 = 83,
  aux_sym_slot_reference_repeat1 = 84,
  aux_sym__slot_values_repeat1 = 85,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_todo] = "todo",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACK] = "]",
  [sym_free_text] = "free_text",
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
  [sym_free_text] = sym_free_text,
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
  [sym_free_text] = {
    .visible = true,
    .named = true,
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
      ACCEPT_TOKEN(sym_free_text);
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
  [22] = {.lex_state = 83, .external_lex_state = 1},
  [23] = {.lex_state = 83, .external_lex_state = 1},
  [24] = {.lex_state = 83, .external_lex_state = 1},
  [25] = {.lex_state = 83, .external_lex_state = 1},
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
  [39] = {.lex_state = 83, .external_lex_state = 1},
  [40] = {.lex_state = 83, .external_lex_state = 1},
  [41] = {.lex_state = 8, .external_lex_state = 1},
  [42] = {.lex_state = 83, .external_lex_state = 1},
  [43] = {.lex_state = 83, .external_lex_state = 1},
  [44] = {.lex_state = 83, .external_lex_state = 1},
  [45] = {.lex_state = 83, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 8, .external_lex_state = 1},
  [48] = {.lex_state = 83, .external_lex_state = 1},
  [49] = {.lex_state = 83, .external_lex_state = 1},
  [50] = {.lex_state = 83, .external_lex_state = 1},
  [51] = {.lex_state = 83, .external_lex_state = 1},
  [52] = {.lex_state = 8, .external_lex_state = 1},
  [53] = {.lex_state = 83, .external_lex_state = 1},
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 83, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 83, .external_lex_state = 1},
  [61] = {.lex_state = 0, .external_lex_state = 1},
  [62] = {.lex_state = 83, .external_lex_state = 1},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 10, .external_lex_state = 1},
  [70] = {.lex_state = 83, .external_lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 83, .external_lex_state = 1},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 8, .external_lex_state = 1},
  [75] = {.lex_state = 8, .external_lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 10, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 8, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 83, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 83, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 9, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 8, .external_lex_state = 1},
  [105] = {.lex_state = 9, .external_lex_state = 1},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 10, .external_lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 9, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 6, .external_lex_state = 1},
  [113] = {.lex_state = 8, .external_lex_state = 1},
  [114] = {.lex_state = 8, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 9, .external_lex_state = 1},
  [117] = {.lex_state = 9, .external_lex_state = 1},
  [118] = {.lex_state = 9, .external_lex_state = 1},
  [119] = {.lex_state = 10, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 0, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 9, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 9, .external_lex_state = 1},
  [133] = {.lex_state = 8, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 83, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 6, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 9, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 10, .external_lex_state = 1},
  [146] = {.lex_state = 0, .external_lex_state = 1},
  [147] = {.lex_state = 9, .external_lex_state = 1},
  [148] = {.lex_state = 0, .external_lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 83, .external_lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 1},
  [152] = {.lex_state = 0, .external_lex_state = 1},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 83, .external_lex_state = 1},
  [155] = {.lex_state = 83, .external_lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 0, .external_lex_state = 1},
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
  [175] = {.lex_state = 83, .external_lex_state = 1},
  [176] = {.lex_state = 0, .external_lex_state = 1},
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 83, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 83, .external_lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 1},
  [188] = {.lex_state = 1, .external_lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 0, .external_lex_state = 1},
  [191] = {.lex_state = 83, .external_lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 0, .external_lex_state = 1},
  [196] = {.lex_state = 83, .external_lex_state = 1},
  [197] = {.lex_state = 0, .external_lex_state = 1},
  [198] = {.lex_state = 0, .external_lex_state = 1},
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
  [237] = {-1},
  [238] = {-1},
  [239] = {.lex_state = 204},
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
    [sym_source_file] = STATE(236),
    [sym_decision_graph] = STATE(235),
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
    STATE(174), 1,
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
    STATE(190), 1,
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
    STATE(233), 1,
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
    STATE(227), 1,
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
    STATE(196), 1,
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
    STATE(171), 1,
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
    STATE(159), 1,
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
    STATE(174), 1,
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
    STATE(234), 1,
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
    STATE(58), 1,
      sym_slot_identifier,
    STATE(88), 1,
      sym_atomic_assignment_slot,
    STATE(89), 1,
      sym_aggregate_assignment_slot,
    STATE(99), 1,
      sym_assignment_slot,
    STATE(135), 1,
      sym_slot_reference,
  [639] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(18), 1,
      sym_comment,
    STATE(58), 1,
      sym_slot_identifier,
    STATE(80), 1,
      sym_assignment_slot,
    STATE(88), 1,
      sym_atomic_assignment_slot,
    STATE(89), 1,
      sym_aggregate_assignment_slot,
    STATE(135), 1,
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
  [927] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [947] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(137), 5,
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
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(141), 5,
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
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(145), 5,
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
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(149), 5,
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
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1047] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_comment,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1067] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1087] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1107] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(41), 1,
      sym_comment,
    STATE(58), 1,
      sym_slot_identifier,
    STATE(88), 1,
      sym_atomic_assignment_slot,
    STATE(89), 1,
      sym_aggregate_assignment_slot,
    STATE(135), 1,
      sym_slot_reference,
    STATE(136), 1,
      sym_assignment_slot,
  [1135] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(171), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1155] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1175] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(179), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1195] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_comment,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1215] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(46), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(185), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [1235] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(47), 1,
      sym_comment,
    STATE(58), 1,
      sym_slot_identifier,
    STATE(88), 1,
      sym_atomic_assignment_slot,
    STATE(89), 1,
      sym_aggregate_assignment_slot,
    STATE(123), 1,
      sym_assignment_slot,
    STATE(135), 1,
      sym_slot_reference,
  [1263] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(192), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym_comment,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1283] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym_comment,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1303] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_comment,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1323] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_comment,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1343] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(52), 1,
      sym_comment,
    STATE(58), 1,
      sym_slot_identifier,
    STATE(88), 1,
      sym_atomic_assignment_slot,
    STATE(89), 1,
      sym_aggregate_assignment_slot,
    STATE(99), 1,
      sym_assignment_slot,
    STATE(135), 1,
      sym_slot_reference,
  [1371] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
    STATE(60), 1,
      aux_sym_slot_reference_repeat1,
    ACTIONS(206), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1392] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_when_node_repeat1,
    STATE(139), 1,
      sym_when_answer_sub_node,
    STATE(177), 1,
      sym_else_sub_node,
  [1417] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym__slot_values_repeat1,
    STATE(55), 1,
      sym_comment,
    ACTIONS(214), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1438] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(56), 1,
      sym_comment,
    ACTIONS(185), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1455] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_when_node_repeat1,
    STATE(139), 1,
      sym_when_answer_sub_node,
    STATE(158), 1,
      sym_else_sub_node,
  [1480] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      aux_sym_slot_reference_repeat1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1501] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      aux_sym__slot_values_repeat1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(222), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1522] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(226), 1,
      anon_sym_SLASH,
    STATE(60), 2,
      sym_comment,
      aux_sym_slot_reference_repeat1,
    ACTIONS(224), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1541] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(61), 1,
      sym_comment,
    ACTIONS(229), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1558] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(62), 1,
      sym_comment,
    ACTIONS(224), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1574] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(134), 1,
      sym_term_sub_node,
  [1596] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(134), 1,
      sym_term_sub_node,
  [1618] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(63), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(65), 1,
      sym_comment,
    STATE(134), 1,
      sym_term_sub_node,
  [1640] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_comment,
    STATE(68), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(144), 1,
      sym_answer_sub_node,
  [1662] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_when_answer_sub_node,
    STATE(67), 2,
      sym_comment,
      aux_sym_when_node_repeat1,
  [1682] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      sym_answer_sub_node,
    STATE(68), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1702] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(253), 1,
      aux_sym_decision_graph_name_token1,
    STATE(69), 1,
      sym_comment,
    STATE(149), 1,
      sym_node_id_value,
    STATE(192), 1,
      sym_decision_graph_name,
    STATE(194), 1,
      sym_node_reference,
  [1724] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(255), 1,
      anon_sym_terms,
    ACTIONS(257), 1,
      anon_sym_answers,
    STATE(70), 1,
      sym_comment,
    STATE(154), 1,
      sym_node_id,
  [1746] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(134), 1,
      sym_term_sub_node,
  [1768] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(72), 1,
      sym_comment,
    ACTIONS(259), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1784] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(261), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_term_sub_node,
    STATE(73), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1804] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      aux_sym_slot_value_token1,
    STATE(59), 1,
      sym_slot_value,
    STATE(74), 1,
      sym_comment,
    STATE(91), 1,
      sym__slot_values,
  [1826] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      aux_sym_slot_value_token1,
    STATE(59), 1,
      sym_slot_value,
    STATE(75), 1,
      sym_comment,
    STATE(217), 1,
      sym__slot_values,
  [1848] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(103), 1,
      sym_consider_option_sub_node,
  [1870] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(253), 1,
      aux_sym_decision_graph_name_token1,
    STATE(77), 1,
      sym_comment,
    STATE(149), 1,
      sym_node_id_value,
    STATE(169), 1,
      sym_node_reference,
    STATE(192), 1,
      sym_decision_graph_name,
  [1892] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym_consider_option_sub_node,
    STATE(78), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1912] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(58), 1,
      sym_slot_identifier,
    STATE(79), 1,
      sym_comment,
    STATE(168), 1,
      sym_slot_reference,
  [1931] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(80), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1946] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_comment,
    STATE(111), 1,
      sym_terms_sub_node,
    STATE(182), 1,
      sym_answers_sub_node,
  [1965] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      aux_sym_when_node_repeat1,
    STATE(82), 1,
      sym_comment,
    STATE(139), 1,
      sym_when_answer_sub_node,
  [1984] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(285), 1,
      anon_sym_text,
    STATE(83), 1,
      sym_comment,
    STATE(185), 1,
      sym_node_id,
  [2003] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_comment,
    STATE(142), 1,
      sym_terms_sub_node,
    STATE(157), 1,
      sym_answers_sub_node,
  [2022] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(85), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2037] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(86), 1,
      sym_comment,
    STATE(103), 1,
      sym_consider_option_sub_node,
  [2056] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      aux_sym__slot_values_repeat1,
    STATE(87), 1,
      sym_comment,
  [2075] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(88), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2090] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(89), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2105] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(90), 1,
      sym_comment,
    STATE(144), 1,
      sym_answer_sub_node,
  [2124] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(91), 1,
      sym_comment,
    ACTIONS(293), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2139] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(92), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2154] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    ACTIONS(297), 1,
      anon_sym_title,
    STATE(93), 1,
      sym_comment,
    STATE(175), 1,
      sym_node_id,
  [2173] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_comment,
    STATE(151), 1,
      sym_else_sub_node,
  [2192] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      aux_sym_when_node_repeat1,
    STATE(95), 1,
      sym_comment,
    STATE(139), 1,
      sym_when_answer_sub_node,
  [2211] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(96), 1,
      sym_comment,
    ACTIONS(303), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2226] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(301), 1,
      anon_sym_LBRACE,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      sym_comment,
    STATE(180), 1,
      sym_else_sub_node,
  [2245] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(87), 1,
      aux_sym__slot_values_repeat1,
    STATE(98), 1,
      sym_comment,
  [2264] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(309), 1,
      anon_sym_COLON,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_comment,
  [2280] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(313), 1,
      sym_free_text,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(100), 1,
      sym_comment,
  [2296] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_comment,
    STATE(140), 1,
      sym_slot_sub_node,
  [2312] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(102), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2326] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(103), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2340] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(268), 1,
      aux_sym_slot_value_token1,
    STATE(56), 1,
      sym_slot_value,
    STATE(104), 1,
      sym_comment,
  [2356] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(323), 1,
      sym_free_text,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_comment,
  [2372] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(329), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(106), 1,
      sym_comment,
  [2388] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(331), 1,
      aux_sym_decision_graph_name_token1,
    STATE(107), 1,
      sym_comment,
    STATE(161), 1,
      sym_node_id_value,
  [2404] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(108), 1,
      sym_comment,
    ACTIONS(333), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2418] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    ACTIONS(337), 1,
      anon_sym_LT,
    STATE(109), 1,
      sym_comment,
  [2434] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    ACTIONS(341), 1,
      sym_free_text,
    STATE(110), 1,
      sym_comment,
  [2450] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym_comment,
    STATE(157), 1,
      sym_answers_sub_node,
  [2466] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(345), 1,
      anon_sym_COLON,
    ACTIONS(347), 1,
      sym_free_text_no_colon,
    STATE(112), 1,
      sym_comment,
  [2482] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(268), 1,
      aux_sym_slot_value_token1,
    STATE(92), 1,
      sym_slot_value,
    STATE(113), 1,
      sym_comment,
  [2498] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(62), 1,
      sym_slot_identifier,
    STATE(114), 1,
      sym_comment,
  [2514] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_text_sub_node,
    STATE(115), 1,
      sym_comment,
  [2530] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    ACTIONS(353), 1,
      sym_free_text,
    STATE(116), 1,
      sym_comment,
  [2546] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(355), 1,
      sym_free_text,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_comment,
  [2562] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    ACTIONS(361), 1,
      sym_free_text,
    STATE(118), 1,
      sym_comment,
  [2578] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(363), 1,
      aux_sym_decision_graph_name_token1,
    STATE(119), 1,
      sym_comment,
    STATE(212), 1,
      sym_decision_graph_name,
  [2594] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_consider_options_sub_node,
    STATE(120), 1,
      sym_comment,
  [2610] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(367), 1,
      anon_sym_LBRACK,
    ACTIONS(369), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(121), 1,
      sym_comment,
  [2626] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(37), 1,
      anon_sym_GT,
    STATE(8), 1,
      sym_node_id,
    STATE(122), 1,
      sym_comment,
  [2642] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_comment,
  [2658] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(124), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2672] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(125), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2686] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_slot_sub_node,
    STATE(126), 1,
      sym_comment,
  [2702] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(127), 1,
      sym_comment,
    ACTIONS(377), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2716] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(128), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2730] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(349), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_text_sub_node,
    STATE(129), 1,
      sym_comment,
  [2746] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      sym_free_text,
    ACTIONS(383), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_comment,
  [2762] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(387), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(131), 1,
      sym_comment,
  [2778] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    ACTIONS(391), 1,
      sym_free_text,
    STATE(132), 1,
      sym_comment,
  [2794] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(268), 1,
      aux_sym_slot_value_token1,
    STATE(98), 1,
      sym_slot_value,
    STATE(133), 1,
      sym_comment,
  [2810] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(134), 1,
      sym_comment,
    ACTIONS(393), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2824] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(395), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(397), 1,
      anon_sym_EQ,
    STATE(135), 1,
      sym_comment,
  [2840] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(311), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      sym_comment,
  [2856] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(137), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2870] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(403), 1,
      anon_sym_COLON,
    ACTIONS(405), 1,
      sym_free_text_no_colon,
    STATE(138), 1,
      sym_comment,
  [2886] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(139), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2900] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(365), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_consider_options_sub_node,
    STATE(140), 1,
      sym_comment,
  [2916] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(141), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2930] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(343), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_comment,
    STATE(179), 1,
      sym_answers_sub_node,
  [2946] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(411), 1,
      sym_free_text,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_comment,
  [2962] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(144), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2976] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(331), 1,
      aux_sym_decision_graph_name_token1,
    STATE(145), 1,
      sym_comment,
    STATE(216), 1,
      sym_node_id_value,
  [2992] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(146), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3006] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(419), 1,
      sym_free_text,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_comment,
  [3022] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(335), 1,
      anon_sym_RBRACK,
    ACTIONS(423), 1,
      anon_sym_GT,
    STATE(148), 1,
      sym_comment,
  [3038] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(425), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_comment,
  [3051] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(427), 1,
      anon_sym_else,
    STATE(150), 1,
      sym_comment,
  [3064] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_comment,
  [3077] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(429), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_comment,
  [3090] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(431), 1,
      anon_sym_COLON,
    STATE(153), 1,
      sym_comment,
  [3103] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(433), 1,
      anon_sym_terms,
    STATE(154), 1,
      sym_comment,
  [3116] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(257), 1,
      anon_sym_answers,
    STATE(155), 1,
      sym_comment,
  [3129] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(435), 1,
      anon_sym_COLON,
    STATE(156), 1,
      sym_comment,
  [3142] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_comment,
  [3155] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      sym_comment,
  [3168] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
  [3181] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_comment,
  [3194] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_comment,
  [3207] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_comment,
  [3220] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_comment,
  [3233] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(449), 1,
      anon_sym_COLON,
    STATE(164), 1,
      sym_comment,
  [3246] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(451), 1,
      anon_sym_COLON,
    STATE(165), 1,
      sym_comment,
  [3259] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(453), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym_comment,
  [3272] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(455), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_comment,
  [3285] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_comment,
  [3298] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(459), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_comment,
  [3311] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      sym_comment,
  [3324] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_comment,
  [3337] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(465), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_comment,
  [3350] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      sym_comment,
  [3363] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(467), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_comment,
  [3376] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(469), 1,
      anon_sym_title,
    STATE(175), 1,
      sym_comment,
  [3389] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(471), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym_comment,
  [3402] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      sym_comment,
  [3415] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(473), 1,
      anon_sym_options,
    STATE(178), 1,
      sym_comment,
  [3428] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_comment,
  [3441] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      sym_comment,
  [3454] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(479), 1,
      anon_sym_COLON,
    STATE(181), 1,
      sym_comment,
  [3467] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      sym_comment,
  [3480] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(483), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_comment,
  [3493] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym_comment,
  [3506] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(487), 1,
      anon_sym_text,
    STATE(185), 1,
      sym_comment,
  [3519] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_comment,
  [3532] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(491), 1,
      anon_sym_COLON,
    STATE(187), 1,
      sym_comment,
  [3545] = 4,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(493), 1,
      sym_file_path,
    ACTIONS(495), 1,
      anon_sym_LT_DASH_DASH,
    STATE(188), 1,
      sym_comment,
  [3558] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym_comment,
  [3571] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      sym_comment,
  [3584] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(499), 1,
      anon_sym_slot,
    STATE(191), 1,
      sym_comment,
  [3597] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(501), 1,
      anon_sym_GT,
    STATE(192), 1,
      sym_comment,
  [3610] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(503), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_comment,
  [3623] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      sym_comment,
  [3636] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(389), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      sym_comment,
  [3649] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(507), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(196), 1,
      sym_comment,
  [3662] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(509), 1,
      anon_sym_COLON,
    STATE(197), 1,
      sym_comment,
  [3675] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_comment,
  [3688] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(513), 1,
      anon_sym_COLON,
    STATE(199), 1,
      sym_comment,
  [3701] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym_comment,
  [3714] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      sym_comment,
  [3727] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      sym_comment,
  [3740] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(521), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_comment,
  [3753] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(523), 1,
      anon_sym_COLON,
    STATE(204), 1,
      sym_comment,
  [3766] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(525), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_comment,
  [3779] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(527), 1,
      anon_sym_COLON,
    STATE(206), 1,
      sym_comment,
  [3792] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_comment,
  [3805] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(531), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym_comment,
  [3818] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(533), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym_comment,
  [3831] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(535), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_comment,
  [3844] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(537), 1,
      anon_sym_COLON,
    STATE(211), 1,
      sym_comment,
  [3857] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(539), 1,
      anon_sym_COLON,
    STATE(212), 1,
      sym_comment,
  [3870] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(213), 1,
      sym_comment,
  [3883] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(214), 1,
      sym_comment,
  [3896] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(423), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_comment,
  [3909] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(545), 1,
      anon_sym_LT,
    STATE(216), 1,
      sym_comment,
  [3922] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(547), 1,
      anon_sym_COLON,
    STATE(217), 1,
      sym_comment,
  [3935] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(549), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym_comment,
  [3948] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(551), 1,
      anon_sym_COLON,
    STATE(219), 1,
      sym_comment,
  [3961] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(553), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      sym_comment,
  [3974] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_comment,
  [3987] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(557), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym_comment,
  [4000] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_comment,
  [4013] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(559), 1,
      anon_sym_COLON,
    STATE(224), 1,
      sym_comment,
  [4026] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(561), 1,
      anon_sym_COLON,
    STATE(225), 1,
      sym_comment,
  [4039] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(563), 1,
      anon_sym_COLON,
    STATE(226), 1,
      sym_comment,
  [4052] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym_comment,
  [4065] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(565), 1,
      anon_sym_COLON,
    STATE(228), 1,
      sym_comment,
  [4078] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(567), 1,
      anon_sym_LBRACE,
    STATE(229), 1,
      sym_comment,
  [4091] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(569), 1,
      anon_sym_COLON,
    STATE(230), 1,
      sym_comment,
  [4104] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(571), 1,
      anon_sym_COLON,
    STATE(231), 1,
      sym_comment,
  [4117] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_comment,
  [4130] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
  [4143] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    STATE(234), 1,
      sym_comment,
  [4156] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
    STATE(235), 1,
      sym_comment,
  [4169] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
    STATE(236), 1,
      sym_comment,
  [4182] = 1,
    ACTIONS(583), 1,
      ts_builtin_sym_end,
  [4186] = 1,
    ACTIONS(585), 1,
      ts_builtin_sym_end,
  [4190] = 1,
    ACTIONS(587), 1,
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
  [SMALL_STATE(19)] = 667,
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
  [SMALL_STATE(33)] = 947,
  [SMALL_STATE(34)] = 967,
  [SMALL_STATE(35)] = 987,
  [SMALL_STATE(36)] = 1007,
  [SMALL_STATE(37)] = 1027,
  [SMALL_STATE(38)] = 1047,
  [SMALL_STATE(39)] = 1067,
  [SMALL_STATE(40)] = 1087,
  [SMALL_STATE(41)] = 1107,
  [SMALL_STATE(42)] = 1135,
  [SMALL_STATE(43)] = 1155,
  [SMALL_STATE(44)] = 1175,
  [SMALL_STATE(45)] = 1195,
  [SMALL_STATE(46)] = 1215,
  [SMALL_STATE(47)] = 1235,
  [SMALL_STATE(48)] = 1263,
  [SMALL_STATE(49)] = 1283,
  [SMALL_STATE(50)] = 1303,
  [SMALL_STATE(51)] = 1323,
  [SMALL_STATE(52)] = 1343,
  [SMALL_STATE(53)] = 1371,
  [SMALL_STATE(54)] = 1392,
  [SMALL_STATE(55)] = 1417,
  [SMALL_STATE(56)] = 1438,
  [SMALL_STATE(57)] = 1455,
  [SMALL_STATE(58)] = 1480,
  [SMALL_STATE(59)] = 1501,
  [SMALL_STATE(60)] = 1522,
  [SMALL_STATE(61)] = 1541,
  [SMALL_STATE(62)] = 1558,
  [SMALL_STATE(63)] = 1574,
  [SMALL_STATE(64)] = 1596,
  [SMALL_STATE(65)] = 1618,
  [SMALL_STATE(66)] = 1640,
  [SMALL_STATE(67)] = 1662,
  [SMALL_STATE(68)] = 1682,
  [SMALL_STATE(69)] = 1702,
  [SMALL_STATE(70)] = 1724,
  [SMALL_STATE(71)] = 1746,
  [SMALL_STATE(72)] = 1768,
  [SMALL_STATE(73)] = 1784,
  [SMALL_STATE(74)] = 1804,
  [SMALL_STATE(75)] = 1826,
  [SMALL_STATE(76)] = 1848,
  [SMALL_STATE(77)] = 1870,
  [SMALL_STATE(78)] = 1892,
  [SMALL_STATE(79)] = 1912,
  [SMALL_STATE(80)] = 1931,
  [SMALL_STATE(81)] = 1946,
  [SMALL_STATE(82)] = 1965,
  [SMALL_STATE(83)] = 1984,
  [SMALL_STATE(84)] = 2003,
  [SMALL_STATE(85)] = 2022,
  [SMALL_STATE(86)] = 2037,
  [SMALL_STATE(87)] = 2056,
  [SMALL_STATE(88)] = 2075,
  [SMALL_STATE(89)] = 2090,
  [SMALL_STATE(90)] = 2105,
  [SMALL_STATE(91)] = 2124,
  [SMALL_STATE(92)] = 2139,
  [SMALL_STATE(93)] = 2154,
  [SMALL_STATE(94)] = 2173,
  [SMALL_STATE(95)] = 2192,
  [SMALL_STATE(96)] = 2211,
  [SMALL_STATE(97)] = 2226,
  [SMALL_STATE(98)] = 2245,
  [SMALL_STATE(99)] = 2264,
  [SMALL_STATE(100)] = 2280,
  [SMALL_STATE(101)] = 2296,
  [SMALL_STATE(102)] = 2312,
  [SMALL_STATE(103)] = 2326,
  [SMALL_STATE(104)] = 2340,
  [SMALL_STATE(105)] = 2356,
  [SMALL_STATE(106)] = 2372,
  [SMALL_STATE(107)] = 2388,
  [SMALL_STATE(108)] = 2404,
  [SMALL_STATE(109)] = 2418,
  [SMALL_STATE(110)] = 2434,
  [SMALL_STATE(111)] = 2450,
  [SMALL_STATE(112)] = 2466,
  [SMALL_STATE(113)] = 2482,
  [SMALL_STATE(114)] = 2498,
  [SMALL_STATE(115)] = 2514,
  [SMALL_STATE(116)] = 2530,
  [SMALL_STATE(117)] = 2546,
  [SMALL_STATE(118)] = 2562,
  [SMALL_STATE(119)] = 2578,
  [SMALL_STATE(120)] = 2594,
  [SMALL_STATE(121)] = 2610,
  [SMALL_STATE(122)] = 2626,
  [SMALL_STATE(123)] = 2642,
  [SMALL_STATE(124)] = 2658,
  [SMALL_STATE(125)] = 2672,
  [SMALL_STATE(126)] = 2686,
  [SMALL_STATE(127)] = 2702,
  [SMALL_STATE(128)] = 2716,
  [SMALL_STATE(129)] = 2730,
  [SMALL_STATE(130)] = 2746,
  [SMALL_STATE(131)] = 2762,
  [SMALL_STATE(132)] = 2778,
  [SMALL_STATE(133)] = 2794,
  [SMALL_STATE(134)] = 2810,
  [SMALL_STATE(135)] = 2824,
  [SMALL_STATE(136)] = 2840,
  [SMALL_STATE(137)] = 2856,
  [SMALL_STATE(138)] = 2870,
  [SMALL_STATE(139)] = 2886,
  [SMALL_STATE(140)] = 2900,
  [SMALL_STATE(141)] = 2916,
  [SMALL_STATE(142)] = 2930,
  [SMALL_STATE(143)] = 2946,
  [SMALL_STATE(144)] = 2962,
  [SMALL_STATE(145)] = 2976,
  [SMALL_STATE(146)] = 2992,
  [SMALL_STATE(147)] = 3006,
  [SMALL_STATE(148)] = 3022,
  [SMALL_STATE(149)] = 3038,
  [SMALL_STATE(150)] = 3051,
  [SMALL_STATE(151)] = 3064,
  [SMALL_STATE(152)] = 3077,
  [SMALL_STATE(153)] = 3090,
  [SMALL_STATE(154)] = 3103,
  [SMALL_STATE(155)] = 3116,
  [SMALL_STATE(156)] = 3129,
  [SMALL_STATE(157)] = 3142,
  [SMALL_STATE(158)] = 3155,
  [SMALL_STATE(159)] = 3168,
  [SMALL_STATE(160)] = 3181,
  [SMALL_STATE(161)] = 3194,
  [SMALL_STATE(162)] = 3207,
  [SMALL_STATE(163)] = 3220,
  [SMALL_STATE(164)] = 3233,
  [SMALL_STATE(165)] = 3246,
  [SMALL_STATE(166)] = 3259,
  [SMALL_STATE(167)] = 3272,
  [SMALL_STATE(168)] = 3285,
  [SMALL_STATE(169)] = 3298,
  [SMALL_STATE(170)] = 3311,
  [SMALL_STATE(171)] = 3324,
  [SMALL_STATE(172)] = 3337,
  [SMALL_STATE(173)] = 3350,
  [SMALL_STATE(174)] = 3363,
  [SMALL_STATE(175)] = 3376,
  [SMALL_STATE(176)] = 3389,
  [SMALL_STATE(177)] = 3402,
  [SMALL_STATE(178)] = 3415,
  [SMALL_STATE(179)] = 3428,
  [SMALL_STATE(180)] = 3441,
  [SMALL_STATE(181)] = 3454,
  [SMALL_STATE(182)] = 3467,
  [SMALL_STATE(183)] = 3480,
  [SMALL_STATE(184)] = 3493,
  [SMALL_STATE(185)] = 3506,
  [SMALL_STATE(186)] = 3519,
  [SMALL_STATE(187)] = 3532,
  [SMALL_STATE(188)] = 3545,
  [SMALL_STATE(189)] = 3558,
  [SMALL_STATE(190)] = 3571,
  [SMALL_STATE(191)] = 3584,
  [SMALL_STATE(192)] = 3597,
  [SMALL_STATE(193)] = 3610,
  [SMALL_STATE(194)] = 3623,
  [SMALL_STATE(195)] = 3636,
  [SMALL_STATE(196)] = 3649,
  [SMALL_STATE(197)] = 3662,
  [SMALL_STATE(198)] = 3675,
  [SMALL_STATE(199)] = 3688,
  [SMALL_STATE(200)] = 3701,
  [SMALL_STATE(201)] = 3714,
  [SMALL_STATE(202)] = 3727,
  [SMALL_STATE(203)] = 3740,
  [SMALL_STATE(204)] = 3753,
  [SMALL_STATE(205)] = 3766,
  [SMALL_STATE(206)] = 3779,
  [SMALL_STATE(207)] = 3792,
  [SMALL_STATE(208)] = 3805,
  [SMALL_STATE(209)] = 3818,
  [SMALL_STATE(210)] = 3831,
  [SMALL_STATE(211)] = 3844,
  [SMALL_STATE(212)] = 3857,
  [SMALL_STATE(213)] = 3870,
  [SMALL_STATE(214)] = 3883,
  [SMALL_STATE(215)] = 3896,
  [SMALL_STATE(216)] = 3909,
  [SMALL_STATE(217)] = 3922,
  [SMALL_STATE(218)] = 3935,
  [SMALL_STATE(219)] = 3948,
  [SMALL_STATE(220)] = 3961,
  [SMALL_STATE(221)] = 3974,
  [SMALL_STATE(222)] = 3987,
  [SMALL_STATE(223)] = 4000,
  [SMALL_STATE(224)] = 4013,
  [SMALL_STATE(225)] = 4026,
  [SMALL_STATE(226)] = 4039,
  [SMALL_STATE(227)] = 4052,
  [SMALL_STATE(228)] = 4065,
  [SMALL_STATE(229)] = 4078,
  [SMALL_STATE(230)] = 4091,
  [SMALL_STATE(231)] = 4104,
  [SMALL_STATE(232)] = 4117,
  [SMALL_STATE(233)] = 4130,
  [SMALL_STATE(234)] = 4143,
  [SMALL_STATE(235)] = 4156,
  [SMALL_STATE(236)] = 4169,
  [SMALL_STATE(237)] = 4182,
  [SMALL_STATE(238)] = 4186,
  [SMALL_STATE(239)] = 4190,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(239),
  [5] = {.count = 1, .reusable = true}, SHIFT(237),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(122),
  [11] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [13] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [16] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(122),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(93),
  [23] = {.count = 1, .reusable = true}, SHIFT(102),
  [25] = {.count = 1, .reusable = true}, SHIFT(146),
  [27] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [31] = {.count = 1, .reusable = true}, SHIFT(231),
  [33] = {.count = 1, .reusable = true}, SHIFT(230),
  [35] = {.count = 1, .reusable = true}, SHIFT(228),
  [37] = {.count = 1, .reusable = true}, SHIFT(145),
  [39] = {.count = 1, .reusable = true}, SHIFT(226),
  [41] = {.count = 1, .reusable = true}, SHIFT(225),
  [43] = {.count = 1, .reusable = true}, SHIFT(224),
  [45] = {.count = 1, .reusable = true}, SHIFT(222),
  [47] = {.count = 1, .reusable = true}, SHIFT(221),
  [49] = {.count = 1, .reusable = true}, SHIFT(219),
  [51] = {.count = 1, .reusable = true}, SHIFT(218),
  [53] = {.count = 1, .reusable = true}, SHIFT(119),
  [55] = {.count = 1, .reusable = true}, SHIFT(211),
  [57] = {.count = 1, .reusable = true}, SHIFT(208),
  [59] = {.count = 1, .reusable = true}, SHIFT(206),
  [61] = {.count = 1, .reusable = true}, SHIFT(205),
  [63] = {.count = 1, .reusable = true}, SHIFT(204),
  [65] = {.count = 1, .reusable = true}, SHIFT(203),
  [67] = {.count = 1, .reusable = true}, SHIFT(202),
  [69] = {.count = 1, .reusable = true}, SHIFT(201),
  [71] = {.count = 1, .reusable = true}, SHIFT(199),
  [73] = {.count = 1, .reusable = true}, SHIFT(197),
  [75] = {.count = 1, .reusable = false}, SHIFT(153),
  [77] = {.count = 1, .reusable = false}, SHIFT(72),
  [79] = {.count = 1, .reusable = true}, SHIFT(72),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
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
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [177] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [179] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [185] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(104),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 4),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [198] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [200] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 2),
  [208] = {.count = 1, .reusable = true}, SHIFT(114),
  [210] = {.count = 1, .reusable = true}, SHIFT(35),
  [212] = {.count = 1, .reusable = true}, SHIFT(17),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [216] = {.count = 1, .reusable = true}, SHIFT(104),
  [218] = {.count = 1, .reusable = true}, SHIFT(26),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 1),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [224] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2),
  [226] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2), SHIFT_REPEAT(114),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [231] = {.count = 1, .reusable = true}, SHIFT(112),
  [233] = {.count = 1, .reusable = true}, SHIFT(229),
  [235] = {.count = 1, .reusable = true}, SHIFT(186),
  [237] = {.count = 1, .reusable = true}, SHIFT(210),
  [239] = {.count = 1, .reusable = true}, SHIFT(138),
  [241] = {.count = 1, .reusable = true}, SHIFT(214),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2),
  [245] = {.count = 2, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2), SHIFT_REPEAT(52),
  [248] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(138),
  [251] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [253] = {.count = 1, .reusable = true}, SHIFT(148),
  [255] = {.count = 1, .reusable = true}, SHIFT(166),
  [257] = {.count = 1, .reusable = true}, SHIFT(152),
  [259] = {.count = 1, .reusable = true}, REDUCE(sym_slot_identifier, 1),
  [261] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(112),
  [264] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [266] = {.count = 1, .reusable = true}, SHIFT(133),
  [268] = {.count = 1, .reusable = true}, SHIFT(61),
  [270] = {.count = 1, .reusable = true}, SHIFT(75),
  [272] = {.count = 1, .reusable = true}, SHIFT(127),
  [274] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(75),
  [277] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [279] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [281] = {.count = 1, .reusable = true}, SHIFT(70),
  [283] = {.count = 1, .reusable = true}, SHIFT(52),
  [285] = {.count = 1, .reusable = true}, SHIFT(187),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [289] = {.count = 1, .reusable = true}, SHIFT(96),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [293] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [295] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [297] = {.count = 1, .reusable = true}, SHIFT(176),
  [299] = {.count = 1, .reusable = true}, SHIFT(27),
  [301] = {.count = 1, .reusable = true}, SHIFT(150),
  [303] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [305] = {.count = 1, .reusable = true}, SHIFT(30),
  [307] = {.count = 1, .reusable = true}, SHIFT(85),
  [309] = {.count = 1, .reusable = true}, SHIFT(9),
  [311] = {.count = 1, .reusable = true}, SHIFT(18),
  [313] = {.count = 1, .reusable = true}, SHIFT(162),
  [315] = {.count = 1, .reusable = true}, SHIFT(163),
  [317] = {.count = 1, .reusable = true}, SHIFT(191),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [321] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [323] = {.count = 1, .reusable = true}, SHIFT(200),
  [325] = {.count = 1, .reusable = true}, SHIFT(121),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [331] = {.count = 1, .reusable = true}, SHIFT(109),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [335] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [337] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [339] = {.count = 1, .reusable = true}, SHIFT(19),
  [341] = {.count = 1, .reusable = true}, SHIFT(189),
  [343] = {.count = 1, .reusable = true}, SHIFT(155),
  [345] = {.count = 1, .reusable = true}, SHIFT(117),
  [347] = {.count = 1, .reusable = true}, SHIFT(209),
  [349] = {.count = 1, .reusable = true}, SHIFT(83),
  [351] = {.count = 1, .reusable = true}, SHIFT(51),
  [353] = {.count = 1, .reusable = true}, SHIFT(195),
  [355] = {.count = 1, .reusable = true}, SHIFT(223),
  [357] = {.count = 1, .reusable = true}, SHIFT(141),
  [359] = {.count = 1, .reusable = true}, SHIFT(33),
  [361] = {.count = 1, .reusable = true}, SHIFT(160),
  [363] = {.count = 1, .reusable = true}, SHIFT(215),
  [365] = {.count = 1, .reusable = true}, SHIFT(178),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [371] = {.count = 1, .reusable = true}, SHIFT(20),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [381] = {.count = 1, .reusable = true}, SHIFT(173),
  [383] = {.count = 1, .reusable = true}, SHIFT(106),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [389] = {.count = 1, .reusable = true}, SHIFT(42),
  [391] = {.count = 1, .reusable = true}, SHIFT(170),
  [393] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [395] = {.count = 1, .reusable = true}, SHIFT(74),
  [397] = {.count = 1, .reusable = true}, SHIFT(113),
  [399] = {.count = 1, .reusable = true}, SHIFT(32),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [403] = {.count = 1, .reusable = true}, SHIFT(7),
  [405] = {.count = 1, .reusable = true}, SHIFT(213),
  [407] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 1),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [411] = {.count = 1, .reusable = true}, SHIFT(232),
  [413] = {.count = 1, .reusable = true}, SHIFT(125),
  [415] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 3),
  [419] = {.count = 1, .reusable = true}, SHIFT(184),
  [421] = {.count = 1, .reusable = true}, SHIFT(183),
  [423] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [425] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 1),
  [427] = {.count = 1, .reusable = true}, SHIFT(153),
  [429] = {.count = 1, .reusable = true}, SHIFT(90),
  [431] = {.count = 1, .reusable = true}, SHIFT(11),
  [433] = {.count = 1, .reusable = true}, SHIFT(167),
  [435] = {.count = 1, .reusable = true}, SHIFT(105),
  [437] = {.count = 1, .reusable = true}, SHIFT(29),
  [439] = {.count = 1, .reusable = true}, SHIFT(37),
  [441] = {.count = 1, .reusable = true}, SHIFT(40),
  [443] = {.count = 1, .reusable = true}, SHIFT(21),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 3),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [449] = {.count = 1, .reusable = true}, SHIFT(147),
  [451] = {.count = 1, .reusable = true}, SHIFT(86),
  [453] = {.count = 1, .reusable = true}, SHIFT(64),
  [455] = {.count = 1, .reusable = true}, SHIFT(65),
  [457] = {.count = 1, .reusable = true}, SHIFT(193),
  [459] = {.count = 1, .reusable = true}, SHIFT(22),
  [461] = {.count = 1, .reusable = true}, SHIFT(23),
  [463] = {.count = 1, .reusable = true}, SHIFT(124),
  [465] = {.count = 1, .reusable = true}, SHIFT(24),
  [467] = {.count = 1, .reusable = true}, SHIFT(25),
  [469] = {.count = 1, .reusable = true}, SHIFT(156),
  [471] = {.count = 1, .reusable = true}, SHIFT(130),
  [473] = {.count = 1, .reusable = true}, SHIFT(165),
  [475] = {.count = 1, .reusable = true}, SHIFT(45),
  [477] = {.count = 1, .reusable = true}, SHIFT(44),
  [479] = {.count = 1, .reusable = true}, SHIFT(79),
  [481] = {.count = 1, .reusable = true}, SHIFT(28),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [485] = {.count = 1, .reusable = true}, SHIFT(207),
  [487] = {.count = 1, .reusable = true}, SHIFT(164),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [491] = {.count = 1, .reusable = true}, SHIFT(100),
  [493] = {.count = 1, .reusable = true}, SHIFT(172),
  [495] = {.count = 1, .reusable = false}, SHIFT(239),
  [497] = {.count = 1, .reusable = true}, SHIFT(34),
  [499] = {.count = 1, .reusable = true}, SHIFT(181),
  [501] = {.count = 1, .reusable = true}, SHIFT(107),
  [503] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [505] = {.count = 1, .reusable = true}, SHIFT(36),
  [507] = {.count = 1, .reusable = true}, SHIFT(43),
  [509] = {.count = 1, .reusable = true}, SHIFT(47),
  [511] = {.count = 1, .reusable = true}, SHIFT(220),
  [513] = {.count = 1, .reusable = true}, SHIFT(118),
  [515] = {.count = 1, .reusable = true}, SHIFT(131),
  [517] = {.count = 1, .reusable = true}, SHIFT(48),
  [519] = {.count = 1, .reusable = true}, SHIFT(49),
  [521] = {.count = 1, .reusable = true}, SHIFT(4),
  [523] = {.count = 1, .reusable = true}, SHIFT(82),
  [525] = {.count = 1, .reusable = true}, SHIFT(126),
  [527] = {.count = 1, .reusable = true}, SHIFT(77),
  [529] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [531] = {.count = 1, .reusable = true}, SHIFT(129),
  [533] = {.count = 1, .reusable = true}, SHIFT(143),
  [535] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [537] = {.count = 1, .reusable = true}, SHIFT(132),
  [539] = {.count = 1, .reusable = true}, SHIFT(188),
  [541] = {.count = 1, .reusable = true}, SHIFT(6),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [545] = {.count = 1, .reusable = false}, SHIFT(14),
  [547] = {.count = 1, .reusable = true}, SHIFT(13),
  [549] = {.count = 1, .reusable = true}, SHIFT(41),
  [551] = {.count = 1, .reusable = true}, SHIFT(110),
  [553] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [555] = {.count = 1, .reusable = true}, SHIFT(39),
  [557] = {.count = 1, .reusable = true}, SHIFT(38),
  [559] = {.count = 1, .reusable = true}, SHIFT(5),
  [561] = {.count = 1, .reusable = true}, SHIFT(95),
  [563] = {.count = 1, .reusable = true}, SHIFT(101),
  [565] = {.count = 1, .reusable = true}, SHIFT(69),
  [567] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [569] = {.count = 1, .reusable = true}, SHIFT(115),
  [571] = {.count = 1, .reusable = true}, SHIFT(116),
  [573] = {.count = 1, .reusable = true}, SHIFT(108),
  [575] = {.count = 1, .reusable = true}, SHIFT(128),
  [577] = {.count = 1, .reusable = true}, SHIFT(137),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [581] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [587] = {.count = 1, .reusable = true}, SHIFT(238),
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
