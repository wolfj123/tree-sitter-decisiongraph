#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 239
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
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
  sym_node_reference = 51,
  sym_consider_node = 52,
  sym_slot_sub_node = 53,
  sym_consider_options_sub_node = 54,
  sym_consider_option_sub_node = 55,
  sym_else_sub_node = 56,
  sym_when_node = 57,
  sym_when_answer_sub_node = 58,
  sym_section_node = 59,
  sym_info_sub_node = 60,
  sym_continue_node = 61,
  sym_part_node = 62,
  sym_end_node = 63,
  sym_reject_node = 64,
  sym_set_node = 65,
  sym_assignment_slot = 66,
  sym_aggregate_assignment_slot = 67,
  sym_atomic_assignment_slot = 68,
  sym_slot_reference = 69,
  sym__slot_values = 70,
  sym_slot_value = 71,
  sym_slot_identifier = 72,
  sym_import_node = 73,
  sym_decision_graph_name = 74,
  sym_node_id = 75,
  sym_node_id_value = 76,
  sym_comment = 77,
  aux_sym_decision_graph_repeat1 = 78,
  aux_sym_terms_sub_node_repeat1 = 79,
  aux_sym_answers_sub_node_repeat1 = 80,
  aux_sym_consider_options_sub_node_repeat1 = 81,
  aux_sym_when_node_repeat1 = 82,
  aux_sym_slot_reference_repeat1 = 83,
  aux_sym__slot_values_repeat1 = 84,
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
          (lookahead < '.' || '>' < lookahead) &&
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
          (lookahead < '.' || '>' < lookahead) &&
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
  [28] = {.lex_state = 8, .external_lex_state = 1},
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
  [40] = {.lex_state = 8, .external_lex_state = 1},
  [41] = {.lex_state = 8, .external_lex_state = 1},
  [42] = {.lex_state = 83, .external_lex_state = 1},
  [43] = {.lex_state = 83, .external_lex_state = 1},
  [44] = {.lex_state = 83, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 83, .external_lex_state = 1},
  [47] = {.lex_state = 83, .external_lex_state = 1},
  [48] = {.lex_state = 83, .external_lex_state = 1},
  [49] = {.lex_state = 83, .external_lex_state = 1},
  [50] = {.lex_state = 83, .external_lex_state = 1},
  [51] = {.lex_state = 83, .external_lex_state = 1},
  [52] = {.lex_state = 83, .external_lex_state = 1},
  [53] = {.lex_state = 0, .external_lex_state = 1},
  [54] = {.lex_state = 83, .external_lex_state = 1},
  [55] = {.lex_state = 83, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 83, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 0, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 9, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 83, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 9, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 1},
  [71] = {.lex_state = 83, .external_lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 83, .external_lex_state = 1},
  [75] = {.lex_state = 0, .external_lex_state = 1},
  [76] = {.lex_state = 8, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 8, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 83, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 83, .external_lex_state = 1},
  [98] = {.lex_state = 8, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 9, .external_lex_state = 1},
  [101] = {.lex_state = 8, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 6, .external_lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 6, .external_lex_state = 1},
  [106] = {.lex_state = 0, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 8, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 6, .external_lex_state = 1},
  [114] = {.lex_state = 8, .external_lex_state = 1},
  [115] = {.lex_state = 0, .external_lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 0, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 6, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 6, .external_lex_state = 1},
  [125] = {.lex_state = 6, .external_lex_state = 1},
  [126] = {.lex_state = 0, .external_lex_state = 1},
  [127] = {.lex_state = 0, .external_lex_state = 1},
  [128] = {.lex_state = 0, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 6, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 6, .external_lex_state = 1},
  [133] = {.lex_state = 8, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 83, .external_lex_state = 1},
  [136] = {.lex_state = 6, .external_lex_state = 1},
  [137] = {.lex_state = 6, .external_lex_state = 1},
  [138] = {.lex_state = 9, .external_lex_state = 1},
  [139] = {.lex_state = 0, .external_lex_state = 1},
  [140] = {.lex_state = 0, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 0, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 9, .external_lex_state = 1},
  [146] = {.lex_state = 6, .external_lex_state = 1},
  [147] = {.lex_state = 6, .external_lex_state = 1},
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
  [174] = {.lex_state = 83, .external_lex_state = 1},
  [175] = {.lex_state = 0, .external_lex_state = 1},
  [176] = {.lex_state = 0, .external_lex_state = 1},
  [177] = {.lex_state = 83, .external_lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 83, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 0, .external_lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 1, .external_lex_state = 1},
  [188] = {.lex_state = 0, .external_lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 83, .external_lex_state = 1},
  [191] = {.lex_state = 0, .external_lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 83, .external_lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 1},
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
  [236] = {-1},
  [237] = {-1},
  [238] = {.lex_state = 204},
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
    [sym_source_file] = STATE(235),
    [sym_decision_graph] = STATE(234),
    [sym__top_level_node] = STATE(25),
    [sym_todo_node] = STATE(47),
    [sym_ask_node] = STATE(47),
    [sym_call_node] = STATE(47),
    [sym_consider_node] = STATE(47),
    [sym_when_node] = STATE(47),
    [sym_section_node] = STATE(47),
    [sym_continue_node] = STATE(47),
    [sym_part_node] = STATE(47),
    [sym_end_node] = STATE(47),
    [sym_reject_node] = STATE(47),
    [sym_set_node] = STATE(47),
    [sym_import_node] = STATE(47),
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
    STATE(25), 1,
      sym__top_level_node,
    STATE(2), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(47), 12,
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
    STATE(25), 1,
      sym__top_level_node,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_DASH_DASH_RBRACK,
    STATE(47), 12,
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
    STATE(8), 1,
      sym_info_sub_node,
    STATE(25), 1,
      sym__top_level_node,
    STATE(172), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(10), 1,
      sym_info_sub_node,
    STATE(25), 1,
      sym__top_level_node,
    STATE(189), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(25), 1,
      sym__top_level_node,
    STATE(195), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(25), 1,
      sym__top_level_node,
    STATE(171), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(25), 1,
      sym__top_level_node,
    STATE(159), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(25), 1,
      sym__top_level_node,
    STATE(198), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(25), 1,
      sym__top_level_node,
    STATE(172), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(25), 1,
      sym__top_level_node,
    STATE(226), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(25), 1,
      sym__top_level_node,
    STATE(233), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(3), 1,
      aux_sym_decision_graph_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(25), 1,
      sym__top_level_node,
    STATE(232), 1,
      sym_decision_graph,
    STATE(47), 12,
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
    STATE(55), 1,
      sym_slot_identifier,
    STATE(87), 1,
      sym_atomic_assignment_slot,
    STATE(88), 1,
      sym_aggregate_assignment_slot,
    STATE(102), 1,
      sym_assignment_slot,
    STATE(135), 1,
      sym_slot_reference,
  [633] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(18), 1,
      sym_comment,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(85), 1,
      sym_assignment_slot,
    STATE(87), 1,
      sym_atomic_assignment_slot,
    STATE(88), 1,
      sym_aggregate_assignment_slot,
    STATE(135), 1,
      sym_slot_reference,
  [661] = 5,
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
  [681] = 5,
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
  [701] = 5,
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
  [721] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    ACTIONS(89), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [741] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [761] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [781] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(103), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [801] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(107), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    ACTIONS(105), 5,
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
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [841] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(28), 1,
      sym_comment,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(87), 1,
      sym_atomic_assignment_slot,
    STATE(88), 1,
      sym_aggregate_assignment_slot,
    STATE(99), 1,
      sym_assignment_slot,
    STATE(135), 1,
      sym_slot_reference,
  [869] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(115), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [889] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [909] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [929] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    ACTIONS(125), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [949] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(131), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [969] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [989] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(139), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(137), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1009] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(141), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1029] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1049] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_comment,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1069] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(155), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1089] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(40), 1,
      sym_comment,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(87), 1,
      sym_atomic_assignment_slot,
    STATE(88), 1,
      sym_aggregate_assignment_slot,
    STATE(127), 1,
      sym_assignment_slot,
    STATE(135), 1,
      sym_slot_reference,
  [1117] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(41), 1,
      sym_comment,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(87), 1,
      sym_atomic_assignment_slot,
    STATE(88), 1,
      sym_aggregate_assignment_slot,
    STATE(102), 1,
      sym_assignment_slot,
    STATE(135), 1,
      sym_slot_reference,
  [1145] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(159), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1165] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1185] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1205] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    STATE(45), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(169), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [1225] = 5,
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
  [1245] = 5,
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
  [1265] = 5,
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
  [1285] = 5,
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
  [1305] = 5,
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
  [1325] = 5,
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
  [1345] = 5,
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
  [1365] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym__slot_values_repeat1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1386] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(54), 2,
      sym_comment,
      aux_sym_slot_reference_repeat1,
    ACTIONS(206), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1405] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    STATE(55), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_slot_reference_repeat1,
    ACTIONS(211), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1426] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      aux_sym__slot_values_repeat1,
    STATE(56), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1447] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(213), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      aux_sym_slot_reference_repeat1,
    STATE(57), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1468] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(58), 1,
      sym_comment,
    ACTIONS(219), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1485] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_when_node_repeat1,
    STATE(117), 1,
      sym_when_answer_sub_node,
    STATE(158), 1,
      sym_else_sub_node,
  [1510] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(60), 1,
      sym_comment,
    ACTIONS(169), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1527] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(223), 1,
      anon_sym_LBRACE,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_when_node_repeat1,
    STATE(117), 1,
      sym_when_answer_sub_node,
    STATE(176), 1,
      sym_else_sub_node,
  [1552] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(106), 1,
      sym_answer_sub_node,
  [1574] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      aux_sym_decision_graph_name_token1,
    STATE(63), 1,
      sym_comment,
    STATE(148), 1,
      sym_decision_graph_name,
    STATE(167), 1,
      sym_node_reference,
    STATE(191), 1,
      sym_node_id_value,
  [1596] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      sym_term_sub_node,
    STATE(64), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1616] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(238), 1,
      anon_sym_terms,
    ACTIONS(240), 1,
      anon_sym_answers,
    STATE(65), 1,
      sym_comment,
    STATE(154), 1,
      sym_node_id,
  [1638] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(126), 1,
      sym_term_sub_node,
  [1660] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(126), 1,
      sym_term_sub_node,
  [1682] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      aux_sym_decision_graph_name_token1,
    STATE(68), 1,
      sym_comment,
    STATE(148), 1,
      sym_decision_graph_name,
    STATE(191), 1,
      sym_node_id_value,
    STATE(192), 1,
      sym_node_reference,
  [1704] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(111), 1,
      sym_consider_option_sub_node,
  [1726] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(252), 1,
      anon_sym_RBRACK,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_when_answer_sub_node,
    STATE(70), 2,
      sym_comment,
      aux_sym_when_node_repeat1,
  [1746] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(71), 1,
      sym_comment,
    ACTIONS(257), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1762] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      sym_answer_sub_node,
    STATE(72), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1782] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(73), 1,
      sym_comment,
    STATE(126), 1,
      sym_term_sub_node,
  [1804] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(74), 1,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1820] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_consider_option_sub_node,
    STATE(75), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1840] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(271), 1,
      anon_sym_LBRACE,
    ACTIONS(273), 1,
      aux_sym_slot_value_token1,
    STATE(56), 1,
      sym_slot_value,
    STATE(76), 1,
      sym_comment,
    STATE(84), 1,
      sym__slot_values,
  [1862] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(242), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(73), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(126), 1,
      sym_term_sub_node,
  [1884] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(111), 1,
      sym_consider_option_sub_node,
  [1903] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(79), 1,
      sym_comment,
    STATE(93), 1,
      aux_sym__slot_values_repeat1,
  [1922] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_comment,
    STATE(180), 1,
      sym_else_sub_node,
  [1941] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(81), 1,
      sym_comment,
    ACTIONS(281), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1956] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      aux_sym_when_node_repeat1,
    STATE(82), 1,
      sym_comment,
    STATE(117), 1,
      sym_when_answer_sub_node,
  [1975] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(83), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1990] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(84), 1,
      sym_comment,
    ACTIONS(287), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2005] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(85), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2020] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      aux_sym_when_node_repeat1,
    STATE(86), 1,
      sym_comment,
    STATE(117), 1,
      sym_when_answer_sub_node,
  [2039] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(87), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2054] = 4,
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
  [2069] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(55), 1,
      sym_slot_identifier,
    STATE(89), 1,
      sym_comment,
    STATE(168), 1,
      sym_slot_reference,
  [2088] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(227), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(90), 1,
      sym_comment,
    STATE(106), 1,
      sym_answer_sub_node,
  [2107] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_comment,
    STATE(142), 1,
      sym_terms_sub_node,
    STATE(157), 1,
      sym_answers_sub_node,
  [2126] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(295), 1,
      anon_sym_title,
    STATE(92), 1,
      sym_comment,
    STATE(174), 1,
      sym_node_id,
  [2145] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      aux_sym__slot_values_repeat1,
    STATE(93), 1,
      sym_comment,
  [2164] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(94), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2179] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_comment,
    STATE(151), 1,
      sym_else_sub_node,
  [2198] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_comment,
    STATE(118), 1,
      sym_terms_sub_node,
    STATE(181), 1,
      sym_answers_sub_node,
  [2217] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(303), 1,
      anon_sym_text,
    STATE(97), 1,
      sym_comment,
    STATE(182), 1,
      sym_node_id,
  [2236] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(273), 1,
      aux_sym_slot_value_token1,
    STATE(83), 1,
      sym_slot_value,
    STATE(98), 1,
      sym_comment,
  [2252] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      sym_comment,
  [2268] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(309), 1,
      aux_sym_decision_graph_name_token1,
    STATE(100), 1,
      sym_comment,
    STATE(161), 1,
      sym_node_id_value,
  [2284] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(273), 1,
      aux_sym_slot_value_token1,
    STATE(60), 1,
      sym_slot_value,
    STATE(101), 1,
      sym_comment,
  [2300] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym_comment,
  [2316] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(313), 1,
      anon_sym_COLON,
    ACTIONS(315), 1,
      sym_free_text,
    STATE(103), 1,
      sym_comment,
  [2332] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(104), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2346] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(319), 1,
      sym_free_text,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_comment,
  [2362] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(106), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2376] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(107), 1,
      sym_comment,
  [2392] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(108), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2406] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(333), 1,
      anon_sym_GT,
    STATE(109), 1,
      sym_comment,
  [2422] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(273), 1,
      aux_sym_slot_value_token1,
    STATE(110), 1,
      sym_comment,
    STATE(217), 1,
      sym_slot_value,
  [2438] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(111), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2452] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(112), 1,
      sym_comment,
    ACTIONS(337), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2466] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    ACTIONS(341), 1,
      sym_free_text,
    STATE(113), 1,
      sym_comment,
  [2482] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(75), 1,
      aux_sym_slot_value_token1,
    STATE(74), 1,
      sym_slot_identifier,
    STATE(114), 1,
      sym_comment,
  [2498] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(115), 1,
      sym_comment,
  [2514] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_text_sub_node,
    STATE(116), 1,
      sym_comment,
  [2530] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(117), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2544] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(118), 1,
      sym_comment,
    STATE(157), 1,
      sym_answers_sub_node,
  [2560] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(119), 1,
      sym_comment,
    ACTIONS(353), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2574] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_consider_options_sub_node,
    STATE(120), 1,
      sym_comment,
  [2590] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(357), 1,
      sym_free_text,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_comment,
  [2606] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(6), 1,
      sym_node_id,
    STATE(122), 1,
      sym_comment,
  [2622] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(355), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_consider_options_sub_node,
    STATE(123), 1,
      sym_comment,
  [2638] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(361), 1,
      sym_free_text,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym_comment,
  [2654] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(365), 1,
      anon_sym_RBRACK,
    ACTIONS(367), 1,
      sym_free_text,
    STATE(125), 1,
      sym_comment,
  [2670] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(126), 1,
      sym_comment,
    ACTIONS(369), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2684] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      sym_comment,
  [2700] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(128), 1,
      sym_comment,
    ACTIONS(373), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2714] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_slot_sub_node,
    STATE(129), 1,
      sym_comment,
  [2730] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(377), 1,
      sym_free_text,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      sym_comment,
  [2746] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    ACTIONS(381), 1,
      anon_sym_LT,
    STATE(131), 1,
      sym_comment,
  [2762] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
    ACTIONS(385), 1,
      sym_free_text,
    STATE(132), 1,
      sym_comment,
  [2778] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(273), 1,
      aux_sym_slot_value_token1,
    STATE(79), 1,
      sym_slot_value,
    STATE(133), 1,
      sym_comment,
  [2794] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_text_sub_node,
    STATE(134), 1,
      sym_comment,
  [2810] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(387), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(389), 1,
      anon_sym_EQ,
    STATE(135), 1,
      sym_comment,
  [2826] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    ACTIONS(393), 1,
      sym_free_text,
    STATE(136), 1,
      sym_comment,
  [2842] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(397), 1,
      sym_free_text,
    STATE(137), 1,
      sym_comment,
  [2858] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(399), 1,
      aux_sym_decision_graph_name_token1,
    STATE(138), 1,
      sym_comment,
    STATE(211), 1,
      sym_decision_graph_name,
  [2874] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(139), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2888] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(403), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(140), 1,
      sym_comment,
  [2904] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(141), 1,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2918] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym_comment,
    STATE(179), 1,
      sym_answers_sub_node,
  [2934] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(143), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2948] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_slot_sub_node,
    STATE(144), 1,
      sym_comment,
  [2964] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(309), 1,
      aux_sym_decision_graph_name_token1,
    STATE(145), 1,
      sym_comment,
    STATE(215), 1,
      sym_node_id_value,
  [2980] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(411), 1,
      sym_free_text,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      sym_comment,
  [2996] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(415), 1,
      sym_free_text,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_comment,
  [3012] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(419), 1,
      anon_sym_GT,
    STATE(148), 1,
      sym_comment,
  [3025] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(421), 1,
      anon_sym_COLON,
    STATE(149), 1,
      sym_comment,
  [3038] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(423), 1,
      anon_sym_else,
    STATE(150), 1,
      sym_comment,
  [3051] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_comment,
  [3064] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(425), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_comment,
  [3077] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(427), 1,
      anon_sym_COLON,
    STATE(153), 1,
      sym_comment,
  [3090] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(429), 1,
      anon_sym_terms,
    STATE(154), 1,
      sym_comment,
  [3103] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(240), 1,
      anon_sym_answers,
    STATE(155), 1,
      sym_comment,
  [3116] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(431), 1,
      anon_sym_COLON,
    STATE(156), 1,
      sym_comment,
  [3129] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_comment,
  [3142] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      sym_comment,
  [3155] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
    STATE(159), 1,
      sym_comment,
  [3168] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(439), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_comment,
  [3181] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(441), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_comment,
  [3194] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_comment,
  [3207] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_comment,
  [3220] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(445), 1,
      anon_sym_COLON,
    STATE(164), 1,
      sym_comment,
  [3233] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(447), 1,
      anon_sym_COLON,
    STATE(165), 1,
      sym_comment,
  [3246] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(449), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym_comment,
  [3259] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(451), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_comment,
  [3272] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(168), 1,
      sym_comment,
  [3285] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(455), 1,
      anon_sym_RBRACK,
    STATE(169), 1,
      sym_comment,
  [3298] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      sym_comment,
  [3311] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_comment,
  [3324] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_comment,
  [3337] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      sym_comment,
  [3350] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(463), 1,
      anon_sym_title,
    STATE(174), 1,
      sym_comment,
  [3363] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(465), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym_comment,
  [3376] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_comment,
  [3389] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(467), 1,
      anon_sym_options,
    STATE(177), 1,
      sym_comment,
  [3402] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(469), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym_comment,
  [3415] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      sym_comment,
  [3428] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      sym_comment,
  [3441] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym_comment,
  [3454] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(477), 1,
      anon_sym_text,
    STATE(182), 1,
      sym_comment,
  [3467] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(479), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_comment,
  [3480] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(481), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      sym_comment,
  [3493] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(483), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
  [3506] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(485), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_comment,
  [3519] = 4,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(487), 1,
      sym_file_path,
    ACTIONS(489), 1,
      anon_sym_LT_DASH_DASH,
    STATE(187), 1,
      sym_comment,
  [3532] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym_comment,
  [3545] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      sym_comment,
  [3558] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(493), 1,
      anon_sym_slot,
    STATE(190), 1,
      sym_comment,
  [3571] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_comment,
  [3584] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      sym_comment,
  [3597] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(499), 1,
      anon_sym_LBRACE,
    STATE(193), 1,
      sym_comment,
  [3610] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(339), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      sym_comment,
  [3623] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(501), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(195), 1,
      sym_comment,
  [3636] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(503), 1,
      anon_sym_COLON,
    STATE(196), 1,
      sym_comment,
  [3649] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(505), 1,
      anon_sym_COLON,
    STATE(197), 1,
      sym_comment,
  [3662] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(507), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      sym_comment,
  [3675] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      sym_comment,
  [3688] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      sym_comment,
  [3701] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      sym_comment,
  [3714] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(515), 1,
      anon_sym_COLON,
    STATE(202), 1,
      sym_comment,
  [3727] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(517), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_comment,
  [3740] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(519), 1,
      anon_sym_COLON,
    STATE(204), 1,
      sym_comment,
  [3753] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(521), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_comment,
  [3766] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(523), 1,
      anon_sym_COLON,
    STATE(206), 1,
      sym_comment,
  [3779] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(525), 1,
      anon_sym_LBRACE,
    STATE(207), 1,
      sym_comment,
  [3792] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(527), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym_comment,
  [3805] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym_comment,
  [3818] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(531), 1,
      anon_sym_LBRACE,
    STATE(210), 1,
      sym_comment,
  [3831] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(533), 1,
      anon_sym_COLON,
    STATE(211), 1,
      sym_comment,
  [3844] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(333), 1,
      anon_sym_COLON,
    STATE(212), 1,
      sym_comment,
  [3857] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(535), 1,
      anon_sym_COLON,
    STATE(213), 1,
      sym_comment,
  [3870] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(214), 1,
      sym_comment,
  [3883] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(539), 1,
      anon_sym_LT,
    STATE(215), 1,
      sym_comment,
  [3896] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(216), 1,
      sym_comment,
  [3909] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(543), 1,
      anon_sym_COLON,
    STATE(217), 1,
      sym_comment,
  [3922] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym_comment,
  [3935] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      sym_comment,
  [3948] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(549), 1,
      anon_sym_RBRACK,
    STATE(220), 1,
      sym_comment,
  [3961] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_comment,
  [3974] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(553), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym_comment,
  [3987] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_comment,
  [4000] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(555), 1,
      anon_sym_COLON,
    STATE(224), 1,
      sym_comment,
  [4013] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(557), 1,
      anon_sym_COLON,
    STATE(225), 1,
      sym_comment,
  [4026] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(226), 1,
      sym_comment,
  [4039] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(561), 1,
      anon_sym_COLON,
    STATE(227), 1,
      sym_comment,
  [4052] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(563), 1,
      anon_sym_LBRACE,
    STATE(228), 1,
      sym_comment,
  [4065] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(565), 1,
      anon_sym_COLON,
    STATE(229), 1,
      sym_comment,
  [4078] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(567), 1,
      anon_sym_COLON,
    STATE(230), 1,
      sym_comment,
  [4091] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4104] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_comment,
  [4117] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    STATE(233), 1,
      sym_comment,
  [4130] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(575), 1,
      ts_builtin_sym_end,
    STATE(234), 1,
      sym_comment,
  [4143] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(577), 1,
      ts_builtin_sym_end,
    STATE(235), 1,
      sym_comment,
  [4156] = 1,
    ACTIONS(579), 1,
      ts_builtin_sym_end,
  [4160] = 1,
    ACTIONS(581), 1,
      ts_builtin_sym_end,
  [4164] = 1,
    ACTIONS(583), 1,
      aux_sym_comment_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
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
  [SMALL_STATE(19)] = 661,
  [SMALL_STATE(20)] = 681,
  [SMALL_STATE(21)] = 701,
  [SMALL_STATE(22)] = 721,
  [SMALL_STATE(23)] = 741,
  [SMALL_STATE(24)] = 761,
  [SMALL_STATE(25)] = 781,
  [SMALL_STATE(26)] = 801,
  [SMALL_STATE(27)] = 821,
  [SMALL_STATE(28)] = 841,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 889,
  [SMALL_STATE(31)] = 909,
  [SMALL_STATE(32)] = 929,
  [SMALL_STATE(33)] = 949,
  [SMALL_STATE(34)] = 969,
  [SMALL_STATE(35)] = 989,
  [SMALL_STATE(36)] = 1009,
  [SMALL_STATE(37)] = 1029,
  [SMALL_STATE(38)] = 1049,
  [SMALL_STATE(39)] = 1069,
  [SMALL_STATE(40)] = 1089,
  [SMALL_STATE(41)] = 1117,
  [SMALL_STATE(42)] = 1145,
  [SMALL_STATE(43)] = 1165,
  [SMALL_STATE(44)] = 1185,
  [SMALL_STATE(45)] = 1205,
  [SMALL_STATE(46)] = 1225,
  [SMALL_STATE(47)] = 1245,
  [SMALL_STATE(48)] = 1265,
  [SMALL_STATE(49)] = 1285,
  [SMALL_STATE(50)] = 1305,
  [SMALL_STATE(51)] = 1325,
  [SMALL_STATE(52)] = 1345,
  [SMALL_STATE(53)] = 1365,
  [SMALL_STATE(54)] = 1386,
  [SMALL_STATE(55)] = 1405,
  [SMALL_STATE(56)] = 1426,
  [SMALL_STATE(57)] = 1447,
  [SMALL_STATE(58)] = 1468,
  [SMALL_STATE(59)] = 1485,
  [SMALL_STATE(60)] = 1510,
  [SMALL_STATE(61)] = 1527,
  [SMALL_STATE(62)] = 1552,
  [SMALL_STATE(63)] = 1574,
  [SMALL_STATE(64)] = 1596,
  [SMALL_STATE(65)] = 1616,
  [SMALL_STATE(66)] = 1638,
  [SMALL_STATE(67)] = 1660,
  [SMALL_STATE(68)] = 1682,
  [SMALL_STATE(69)] = 1704,
  [SMALL_STATE(70)] = 1726,
  [SMALL_STATE(71)] = 1746,
  [SMALL_STATE(72)] = 1762,
  [SMALL_STATE(73)] = 1782,
  [SMALL_STATE(74)] = 1804,
  [SMALL_STATE(75)] = 1820,
  [SMALL_STATE(76)] = 1840,
  [SMALL_STATE(77)] = 1862,
  [SMALL_STATE(78)] = 1884,
  [SMALL_STATE(79)] = 1903,
  [SMALL_STATE(80)] = 1922,
  [SMALL_STATE(81)] = 1941,
  [SMALL_STATE(82)] = 1956,
  [SMALL_STATE(83)] = 1975,
  [SMALL_STATE(84)] = 1990,
  [SMALL_STATE(85)] = 2005,
  [SMALL_STATE(86)] = 2020,
  [SMALL_STATE(87)] = 2039,
  [SMALL_STATE(88)] = 2054,
  [SMALL_STATE(89)] = 2069,
  [SMALL_STATE(90)] = 2088,
  [SMALL_STATE(91)] = 2107,
  [SMALL_STATE(92)] = 2126,
  [SMALL_STATE(93)] = 2145,
  [SMALL_STATE(94)] = 2164,
  [SMALL_STATE(95)] = 2179,
  [SMALL_STATE(96)] = 2198,
  [SMALL_STATE(97)] = 2217,
  [SMALL_STATE(98)] = 2236,
  [SMALL_STATE(99)] = 2252,
  [SMALL_STATE(100)] = 2268,
  [SMALL_STATE(101)] = 2284,
  [SMALL_STATE(102)] = 2300,
  [SMALL_STATE(103)] = 2316,
  [SMALL_STATE(104)] = 2332,
  [SMALL_STATE(105)] = 2346,
  [SMALL_STATE(106)] = 2362,
  [SMALL_STATE(107)] = 2376,
  [SMALL_STATE(108)] = 2392,
  [SMALL_STATE(109)] = 2406,
  [SMALL_STATE(110)] = 2422,
  [SMALL_STATE(111)] = 2438,
  [SMALL_STATE(112)] = 2452,
  [SMALL_STATE(113)] = 2466,
  [SMALL_STATE(114)] = 2482,
  [SMALL_STATE(115)] = 2498,
  [SMALL_STATE(116)] = 2514,
  [SMALL_STATE(117)] = 2530,
  [SMALL_STATE(118)] = 2544,
  [SMALL_STATE(119)] = 2560,
  [SMALL_STATE(120)] = 2574,
  [SMALL_STATE(121)] = 2590,
  [SMALL_STATE(122)] = 2606,
  [SMALL_STATE(123)] = 2622,
  [SMALL_STATE(124)] = 2638,
  [SMALL_STATE(125)] = 2654,
  [SMALL_STATE(126)] = 2670,
  [SMALL_STATE(127)] = 2684,
  [SMALL_STATE(128)] = 2700,
  [SMALL_STATE(129)] = 2714,
  [SMALL_STATE(130)] = 2730,
  [SMALL_STATE(131)] = 2746,
  [SMALL_STATE(132)] = 2762,
  [SMALL_STATE(133)] = 2778,
  [SMALL_STATE(134)] = 2794,
  [SMALL_STATE(135)] = 2810,
  [SMALL_STATE(136)] = 2826,
  [SMALL_STATE(137)] = 2842,
  [SMALL_STATE(138)] = 2858,
  [SMALL_STATE(139)] = 2874,
  [SMALL_STATE(140)] = 2888,
  [SMALL_STATE(141)] = 2904,
  [SMALL_STATE(142)] = 2918,
  [SMALL_STATE(143)] = 2934,
  [SMALL_STATE(144)] = 2948,
  [SMALL_STATE(145)] = 2964,
  [SMALL_STATE(146)] = 2980,
  [SMALL_STATE(147)] = 2996,
  [SMALL_STATE(148)] = 3012,
  [SMALL_STATE(149)] = 3025,
  [SMALL_STATE(150)] = 3038,
  [SMALL_STATE(151)] = 3051,
  [SMALL_STATE(152)] = 3064,
  [SMALL_STATE(153)] = 3077,
  [SMALL_STATE(154)] = 3090,
  [SMALL_STATE(155)] = 3103,
  [SMALL_STATE(156)] = 3116,
  [SMALL_STATE(157)] = 3129,
  [SMALL_STATE(158)] = 3142,
  [SMALL_STATE(159)] = 3155,
  [SMALL_STATE(160)] = 3168,
  [SMALL_STATE(161)] = 3181,
  [SMALL_STATE(162)] = 3194,
  [SMALL_STATE(163)] = 3207,
  [SMALL_STATE(164)] = 3220,
  [SMALL_STATE(165)] = 3233,
  [SMALL_STATE(166)] = 3246,
  [SMALL_STATE(167)] = 3259,
  [SMALL_STATE(168)] = 3272,
  [SMALL_STATE(169)] = 3285,
  [SMALL_STATE(170)] = 3298,
  [SMALL_STATE(171)] = 3311,
  [SMALL_STATE(172)] = 3324,
  [SMALL_STATE(173)] = 3337,
  [SMALL_STATE(174)] = 3350,
  [SMALL_STATE(175)] = 3363,
  [SMALL_STATE(176)] = 3376,
  [SMALL_STATE(177)] = 3389,
  [SMALL_STATE(178)] = 3402,
  [SMALL_STATE(179)] = 3415,
  [SMALL_STATE(180)] = 3428,
  [SMALL_STATE(181)] = 3441,
  [SMALL_STATE(182)] = 3454,
  [SMALL_STATE(183)] = 3467,
  [SMALL_STATE(184)] = 3480,
  [SMALL_STATE(185)] = 3493,
  [SMALL_STATE(186)] = 3506,
  [SMALL_STATE(187)] = 3519,
  [SMALL_STATE(188)] = 3532,
  [SMALL_STATE(189)] = 3545,
  [SMALL_STATE(190)] = 3558,
  [SMALL_STATE(191)] = 3571,
  [SMALL_STATE(192)] = 3584,
  [SMALL_STATE(193)] = 3597,
  [SMALL_STATE(194)] = 3610,
  [SMALL_STATE(195)] = 3623,
  [SMALL_STATE(196)] = 3636,
  [SMALL_STATE(197)] = 3649,
  [SMALL_STATE(198)] = 3662,
  [SMALL_STATE(199)] = 3675,
  [SMALL_STATE(200)] = 3688,
  [SMALL_STATE(201)] = 3701,
  [SMALL_STATE(202)] = 3714,
  [SMALL_STATE(203)] = 3727,
  [SMALL_STATE(204)] = 3740,
  [SMALL_STATE(205)] = 3753,
  [SMALL_STATE(206)] = 3766,
  [SMALL_STATE(207)] = 3779,
  [SMALL_STATE(208)] = 3792,
  [SMALL_STATE(209)] = 3805,
  [SMALL_STATE(210)] = 3818,
  [SMALL_STATE(211)] = 3831,
  [SMALL_STATE(212)] = 3844,
  [SMALL_STATE(213)] = 3857,
  [SMALL_STATE(214)] = 3870,
  [SMALL_STATE(215)] = 3883,
  [SMALL_STATE(216)] = 3896,
  [SMALL_STATE(217)] = 3909,
  [SMALL_STATE(218)] = 3922,
  [SMALL_STATE(219)] = 3935,
  [SMALL_STATE(220)] = 3948,
  [SMALL_STATE(221)] = 3961,
  [SMALL_STATE(222)] = 3974,
  [SMALL_STATE(223)] = 3987,
  [SMALL_STATE(224)] = 4000,
  [SMALL_STATE(225)] = 4013,
  [SMALL_STATE(226)] = 4026,
  [SMALL_STATE(227)] = 4039,
  [SMALL_STATE(228)] = 4052,
  [SMALL_STATE(229)] = 4065,
  [SMALL_STATE(230)] = 4078,
  [SMALL_STATE(231)] = 4091,
  [SMALL_STATE(232)] = 4104,
  [SMALL_STATE(233)] = 4117,
  [SMALL_STATE(234)] = 4130,
  [SMALL_STATE(235)] = 4143,
  [SMALL_STATE(236)] = 4156,
  [SMALL_STATE(237)] = 4160,
  [SMALL_STATE(238)] = 4164,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(238),
  [5] = {.count = 1, .reusable = true}, SHIFT(236),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(122),
  [11] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [13] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [16] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(122),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [21] = {.count = 1, .reusable = true}, SHIFT(92),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [27] = {.count = 1, .reusable = true}, SHIFT(230),
  [29] = {.count = 1, .reusable = true}, SHIFT(229),
  [31] = {.count = 1, .reusable = true}, SHIFT(227),
  [33] = {.count = 1, .reusable = true}, SHIFT(145),
  [35] = {.count = 1, .reusable = true}, SHIFT(225),
  [37] = {.count = 1, .reusable = true}, SHIFT(224),
  [39] = {.count = 1, .reusable = true}, SHIFT(222),
  [41] = {.count = 1, .reusable = true}, SHIFT(221),
  [43] = {.count = 1, .reusable = true}, SHIFT(219),
  [45] = {.count = 1, .reusable = true}, SHIFT(218),
  [47] = {.count = 1, .reusable = true}, SHIFT(216),
  [49] = {.count = 1, .reusable = true}, SHIFT(138),
  [51] = {.count = 1, .reusable = true}, SHIFT(208),
  [53] = {.count = 1, .reusable = true}, SHIFT(206),
  [55] = {.count = 1, .reusable = true}, SHIFT(205),
  [57] = {.count = 1, .reusable = true}, SHIFT(204),
  [59] = {.count = 1, .reusable = true}, SHIFT(203),
  [61] = {.count = 1, .reusable = true}, SHIFT(202),
  [63] = {.count = 1, .reusable = true}, SHIFT(201),
  [65] = {.count = 1, .reusable = true}, SHIFT(199),
  [67] = {.count = 1, .reusable = true}, SHIFT(197),
  [69] = {.count = 1, .reusable = true}, SHIFT(196),
  [71] = {.count = 1, .reusable = false}, SHIFT(153),
  [73] = {.count = 1, .reusable = false}, SHIFT(71),
  [75] = {.count = 1, .reusable = true}, SHIFT(71),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [103] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [107] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [109] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 4),
  [111] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 4),
  [113] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [115] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [123] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 3),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 3),
  [153] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [155] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(101),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [204] = {.count = 1, .reusable = true}, SHIFT(101),
  [206] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2), SHIFT_REPEAT(114),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 1),
  [213] = {.count = 1, .reusable = true}, SHIFT(114),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 2),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [221] = {.count = 1, .reusable = true}, SHIFT(34),
  [223] = {.count = 1, .reusable = true}, SHIFT(17),
  [225] = {.count = 1, .reusable = true}, SHIFT(46),
  [227] = {.count = 1, .reusable = true}, SHIFT(103),
  [229] = {.count = 1, .reusable = true}, SHIFT(214),
  [231] = {.count = 1, .reusable = true}, SHIFT(109),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(137),
  [236] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(149),
  [240] = {.count = 1, .reusable = true}, SHIFT(152),
  [242] = {.count = 1, .reusable = true}, SHIFT(137),
  [244] = {.count = 1, .reusable = true}, SHIFT(186),
  [246] = {.count = 1, .reusable = true}, SHIFT(210),
  [248] = {.count = 1, .reusable = true}, SHIFT(110),
  [250] = {.count = 1, .reusable = true}, SHIFT(139),
  [252] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2),
  [254] = {.count = 2, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2), SHIFT_REPEAT(41),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_slot_identifier, 1),
  [259] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(103),
  [262] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [264] = {.count = 1, .reusable = true}, SHIFT(228),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(110),
  [269] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [271] = {.count = 1, .reusable = true}, SHIFT(133),
  [273] = {.count = 1, .reusable = true}, SHIFT(58),
  [275] = {.count = 1, .reusable = true}, SHIFT(94),
  [277] = {.count = 1, .reusable = true}, SHIFT(49),
  [279] = {.count = 1, .reusable = true}, SHIFT(150),
  [281] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [283] = {.count = 1, .reusable = true}, SHIFT(41),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [287] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [291] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [293] = {.count = 1, .reusable = true}, SHIFT(65),
  [295] = {.count = 1, .reusable = true}, SHIFT(175),
  [297] = {.count = 1, .reusable = true}, SHIFT(81),
  [299] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [301] = {.count = 1, .reusable = true}, SHIFT(35),
  [303] = {.count = 1, .reusable = true}, SHIFT(185),
  [305] = {.count = 1, .reusable = true}, SHIFT(20),
  [307] = {.count = 1, .reusable = true}, SHIFT(18),
  [309] = {.count = 1, .reusable = true}, SHIFT(131),
  [311] = {.count = 1, .reusable = true}, SHIFT(7),
  [313] = {.count = 1, .reusable = true}, SHIFT(11),
  [315] = {.count = 1, .reusable = true}, SHIFT(213),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [319] = {.count = 1, .reusable = true}, SHIFT(200),
  [321] = {.count = 1, .reusable = true}, SHIFT(115),
  [323] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [339] = {.count = 1, .reusable = true}, SHIFT(30),
  [341] = {.count = 1, .reusable = true}, SHIFT(169),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [347] = {.count = 1, .reusable = true}, SHIFT(97),
  [349] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 1),
  [351] = {.count = 1, .reusable = true}, SHIFT(155),
  [353] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [355] = {.count = 1, .reusable = true}, SHIFT(177),
  [357] = {.count = 1, .reusable = true}, SHIFT(223),
  [359] = {.count = 1, .reusable = true}, SHIFT(143),
  [361] = {.count = 1, .reusable = true}, SHIFT(162),
  [363] = {.count = 1, .reusable = true}, SHIFT(163),
  [365] = {.count = 1, .reusable = true}, SHIFT(31),
  [367] = {.count = 1, .reusable = true}, SHIFT(188),
  [369] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [371] = {.count = 1, .reusable = true}, SHIFT(52),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [375] = {.count = 1, .reusable = true}, SHIFT(190),
  [377] = {.count = 1, .reusable = true}, SHIFT(173),
  [379] = {.count = 1, .reusable = true}, SHIFT(107),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [383] = {.count = 1, .reusable = true}, SHIFT(51),
  [385] = {.count = 1, .reusable = true}, SHIFT(160),
  [387] = {.count = 1, .reusable = true}, SHIFT(76),
  [389] = {.count = 1, .reusable = true}, SHIFT(98),
  [391] = {.count = 1, .reusable = true}, SHIFT(50),
  [393] = {.count = 1, .reusable = true}, SHIFT(194),
  [395] = {.count = 1, .reusable = true}, SHIFT(121),
  [397] = {.count = 1, .reusable = true}, SHIFT(209),
  [399] = {.count = 1, .reusable = true}, SHIFT(212),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [409] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [411] = {.count = 1, .reusable = true}, SHIFT(231),
  [413] = {.count = 1, .reusable = true}, SHIFT(141),
  [415] = {.count = 1, .reusable = true}, SHIFT(184),
  [417] = {.count = 1, .reusable = true}, SHIFT(183),
  [419] = {.count = 1, .reusable = true}, SHIFT(100),
  [421] = {.count = 1, .reusable = true}, SHIFT(66),
  [423] = {.count = 1, .reusable = true}, SHIFT(153),
  [425] = {.count = 1, .reusable = true}, SHIFT(90),
  [427] = {.count = 1, .reusable = true}, SHIFT(9),
  [429] = {.count = 1, .reusable = true}, SHIFT(166),
  [431] = {.count = 1, .reusable = true}, SHIFT(105),
  [433] = {.count = 1, .reusable = true}, SHIFT(42),
  [435] = {.count = 1, .reusable = true}, SHIFT(39),
  [437] = {.count = 1, .reusable = true}, SHIFT(33),
  [439] = {.count = 1, .reusable = true}, SHIFT(21),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 3),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [445] = {.count = 1, .reusable = true}, SHIFT(147),
  [447] = {.count = 1, .reusable = true}, SHIFT(78),
  [449] = {.count = 1, .reusable = true}, SHIFT(77),
  [451] = {.count = 1, .reusable = true}, SHIFT(22),
  [453] = {.count = 1, .reusable = true}, SHIFT(193),
  [455] = {.count = 1, .reusable = true}, SHIFT(23),
  [457] = {.count = 1, .reusable = true}, SHIFT(24),
  [459] = {.count = 1, .reusable = true}, SHIFT(112),
  [461] = {.count = 1, .reusable = true}, SHIFT(32),
  [463] = {.count = 1, .reusable = true}, SHIFT(156),
  [465] = {.count = 1, .reusable = true}, SHIFT(130),
  [467] = {.count = 1, .reusable = true}, SHIFT(165),
  [469] = {.count = 1, .reusable = true}, SHIFT(89),
  [471] = {.count = 1, .reusable = true}, SHIFT(44),
  [473] = {.count = 1, .reusable = true}, SHIFT(43),
  [475] = {.count = 1, .reusable = true}, SHIFT(36),
  [477] = {.count = 1, .reusable = true}, SHIFT(164),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [481] = {.count = 1, .reusable = true}, SHIFT(207),
  [483] = {.count = 1, .reusable = true}, SHIFT(124),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [487] = {.count = 1, .reusable = true}, SHIFT(170),
  [489] = {.count = 1, .reusable = false}, SHIFT(238),
  [491] = {.count = 1, .reusable = true}, SHIFT(48),
  [493] = {.count = 1, .reusable = true}, SHIFT(178),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_node_reference, 1),
  [497] = {.count = 1, .reusable = true}, SHIFT(19),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [501] = {.count = 1, .reusable = true}, SHIFT(29),
  [503] = {.count = 1, .reusable = true}, SHIFT(28),
  [505] = {.count = 1, .reusable = true}, SHIFT(132),
  [507] = {.count = 1, .reusable = true}, SHIFT(220),
  [509] = {.count = 1, .reusable = true}, SHIFT(27),
  [511] = {.count = 1, .reusable = true}, SHIFT(140),
  [513] = {.count = 1, .reusable = true}, SHIFT(26),
  [515] = {.count = 1, .reusable = true}, SHIFT(4),
  [517] = {.count = 1, .reusable = true}, SHIFT(82),
  [519] = {.count = 1, .reusable = true}, SHIFT(144),
  [521] = {.count = 1, .reusable = true}, SHIFT(63),
  [523] = {.count = 1, .reusable = true}, SHIFT(116),
  [525] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [527] = {.count = 1, .reusable = true}, SHIFT(113),
  [529] = {.count = 1, .reusable = true}, SHIFT(146),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [533] = {.count = 1, .reusable = true}, SHIFT(187),
  [535] = {.count = 1, .reusable = true}, SHIFT(13),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [539] = {.count = 1, .reusable = false}, SHIFT(14),
  [541] = {.count = 1, .reusable = true}, SHIFT(40),
  [543] = {.count = 1, .reusable = true}, SHIFT(12),
  [545] = {.count = 1, .reusable = true}, SHIFT(125),
  [547] = {.count = 1, .reusable = true}, SHIFT(38),
  [549] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [551] = {.count = 1, .reusable = true}, SHIFT(37),
  [553] = {.count = 1, .reusable = true}, SHIFT(5),
  [555] = {.count = 1, .reusable = true}, SHIFT(86),
  [557] = {.count = 1, .reusable = true}, SHIFT(129),
  [559] = {.count = 1, .reusable = true}, SHIFT(104),
  [561] = {.count = 1, .reusable = true}, SHIFT(68),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [565] = {.count = 1, .reusable = true}, SHIFT(134),
  [567] = {.count = 1, .reusable = true}, SHIFT(136),
  [569] = {.count = 1, .reusable = true}, SHIFT(108),
  [571] = {.count = 1, .reusable = true}, SHIFT(128),
  [573] = {.count = 1, .reusable = true}, SHIFT(119),
  [575] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [577] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [583] = {.count = 1, .reusable = true}, SHIFT(237),
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
