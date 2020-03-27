#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 243
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
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
  sym_slot_reference = 68,
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
  aux_sym_slot_reference_repeat1 = 82,
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
  [sym_slot_reference] = "slot_reference",
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
  [19] = {.lex_state = 8, .external_lex_state = 1},
  [20] = {.lex_state = 83, .external_lex_state = 1},
  [21] = {.lex_state = 83, .external_lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 83, .external_lex_state = 1},
  [24] = {.lex_state = 83, .external_lex_state = 1},
  [25] = {.lex_state = 83, .external_lex_state = 1},
  [26] = {.lex_state = 83, .external_lex_state = 1},
  [27] = {.lex_state = 8, .external_lex_state = 1},
  [28] = {.lex_state = 83, .external_lex_state = 1},
  [29] = {.lex_state = 83, .external_lex_state = 1},
  [30] = {.lex_state = 83, .external_lex_state = 1},
  [31] = {.lex_state = 8, .external_lex_state = 1},
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
  [54] = {.lex_state = 83, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 83, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 83, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 83, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 8, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 83, .external_lex_state = 1},
  [71] = {.lex_state = 83, .external_lex_state = 1},
  [72] = {.lex_state = 83, .external_lex_state = 1},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 0, .external_lex_state = 1},
  [75] = {.lex_state = 0, .external_lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 0, .external_lex_state = 1},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 0, .external_lex_state = 1},
  [85] = {.lex_state = 8, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 9, .external_lex_state = 1},
  [88] = {.lex_state = 0, .external_lex_state = 1},
  [89] = {.lex_state = 9, .external_lex_state = 1},
  [90] = {.lex_state = 0, .external_lex_state = 1},
  [91] = {.lex_state = 0, .external_lex_state = 1},
  [92] = {.lex_state = 83, .external_lex_state = 1},
  [93] = {.lex_state = 0, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 83, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 0, .external_lex_state = 1},
  [98] = {.lex_state = 0, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 0, .external_lex_state = 1},
  [101] = {.lex_state = 0, .external_lex_state = 1},
  [102] = {.lex_state = 0, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 0, .external_lex_state = 1},
  [105] = {.lex_state = 0, .external_lex_state = 1},
  [106] = {.lex_state = 9, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 0, .external_lex_state = 1},
  [109] = {.lex_state = 0, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 6, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 8, .external_lex_state = 1},
  [115] = {.lex_state = 8, .external_lex_state = 1},
  [116] = {.lex_state = 0, .external_lex_state = 1},
  [117] = {.lex_state = 6, .external_lex_state = 1},
  [118] = {.lex_state = 9, .external_lex_state = 1},
  [119] = {.lex_state = 0, .external_lex_state = 1},
  [120] = {.lex_state = 0, .external_lex_state = 1},
  [121] = {.lex_state = 0, .external_lex_state = 1},
  [122] = {.lex_state = 0, .external_lex_state = 1},
  [123] = {.lex_state = 0, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 6, .external_lex_state = 1},
  [126] = {.lex_state = 8, .external_lex_state = 1},
  [127] = {.lex_state = 9, .external_lex_state = 1},
  [128] = {.lex_state = 6, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 6, .external_lex_state = 1},
  [131] = {.lex_state = 0, .external_lex_state = 1},
  [132] = {.lex_state = 0, .external_lex_state = 1},
  [133] = {.lex_state = 0, .external_lex_state = 1},
  [134] = {.lex_state = 6, .external_lex_state = 1},
  [135] = {.lex_state = 6, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 8, .external_lex_state = 1},
  [139] = {.lex_state = 83, .external_lex_state = 1},
  [140] = {.lex_state = 6, .external_lex_state = 1},
  [141] = {.lex_state = 0, .external_lex_state = 1},
  [142] = {.lex_state = 6, .external_lex_state = 1},
  [143] = {.lex_state = 6, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 9, .external_lex_state = 1},
  [146] = {.lex_state = 8, .external_lex_state = 1},
  [147] = {.lex_state = 0, .external_lex_state = 1},
  [148] = {.lex_state = 6, .external_lex_state = 1},
  [149] = {.lex_state = 6, .external_lex_state = 1},
  [150] = {.lex_state = 0, .external_lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 1},
  [152] = {.lex_state = 0, .external_lex_state = 1},
  [153] = {.lex_state = 83, .external_lex_state = 1},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 0, .external_lex_state = 1},
  [157] = {.lex_state = 83, .external_lex_state = 1},
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
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 0, .external_lex_state = 1},
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 0, .external_lex_state = 1},
  [186] = {.lex_state = 83, .external_lex_state = 1},
  [187] = {.lex_state = 0, .external_lex_state = 1},
  [188] = {.lex_state = 0, .external_lex_state = 1},
  [189] = {.lex_state = 1, .external_lex_state = 1},
  [190] = {.lex_state = 0, .external_lex_state = 1},
  [191] = {.lex_state = 0, .external_lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 1},
  [193] = {.lex_state = 0, .external_lex_state = 1},
  [194] = {.lex_state = 83, .external_lex_state = 1},
  [195] = {.lex_state = 83, .external_lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 1},
  [197] = {.lex_state = 0, .external_lex_state = 1},
  [198] = {.lex_state = 0, .external_lex_state = 1},
  [199] = {.lex_state = 0, .external_lex_state = 1},
  [200] = {.lex_state = 0, .external_lex_state = 1},
  [201] = {.lex_state = 0, .external_lex_state = 1},
  [202] = {.lex_state = 0, .external_lex_state = 1},
  [203] = {.lex_state = 83, .external_lex_state = 1},
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
  [230] = {.lex_state = 83, .external_lex_state = 1},
  [231] = {.lex_state = 0, .external_lex_state = 1},
  [232] = {.lex_state = 0, .external_lex_state = 1},
  [233] = {.lex_state = 0, .external_lex_state = 1},
  [234] = {.lex_state = 0, .external_lex_state = 1},
  [235] = {.lex_state = 0, .external_lex_state = 1},
  [236] = {.lex_state = 0, .external_lex_state = 1},
  [237] = {.lex_state = 83, .external_lex_state = 1},
  [238] = {.lex_state = 0, .external_lex_state = 1},
  [239] = {.lex_state = 0, .external_lex_state = 1},
  [240] = {.lex_state = 204},
  [241] = {-1},
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
    [sym_source_file] = STATE(227),
    [sym_decision_graph] = STATE(224),
    [sym__top_level_node] = STATE(40),
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
    STATE(40), 1,
      sym__top_level_node,
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
  [42] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(18), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(40), 1,
      sym__top_level_node,
    STATE(3), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(13), 4,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(10), 1,
      sym_info_sub_node,
    STATE(40), 1,
      sym__top_level_node,
    STATE(196), 1,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(8), 1,
      sym_info_sub_node,
    STATE(40), 1,
      sym__top_level_node,
    STATE(229), 1,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(40), 1,
      sym__top_level_node,
    STATE(239), 1,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(40), 1,
      sym__top_level_node,
    STATE(238), 1,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(40), 1,
      sym__top_level_node,
    STATE(162), 1,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(9), 1,
      sym_comment,
    STATE(40), 1,
      sym__top_level_node,
    STATE(174), 1,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(40), 1,
      sym__top_level_node,
    STATE(229), 1,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(40), 1,
      sym__top_level_node,
    STATE(231), 1,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(40), 1,
      sym__top_level_node,
    STATE(157), 1,
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
    STATE(2), 1,
      aux_sym_decision_graph_repeat1,
    STATE(13), 1,
      sym_comment,
    STATE(40), 1,
      sym__top_level_node,
    STATE(202), 1,
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
    STATE(63), 1,
      sym__slot_identifier,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(91), 1,
      sym_aggregate_assignment_slot,
    STATE(109), 1,
      sym_assignment_slot,
    STATE(139), 1,
      sym_slot_reference,
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
  [653] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(19), 1,
      sym_comment,
    STATE(63), 1,
      sym__slot_identifier,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(91), 1,
      sym_aggregate_assignment_slot,
    STATE(109), 1,
      sym_assignment_slot,
    STATE(139), 1,
      sym_slot_reference,
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
      anon_sym_COMMA,
    STATE(22), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(89), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [741] = 5,
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
  [761] = 5,
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
  [781] = 5,
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
  [821] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(27), 1,
      sym_comment,
    STATE(63), 1,
      sym__slot_identifier,
    STATE(81), 1,
      sym_assignment_slot,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(91), 1,
      sym_aggregate_assignment_slot,
    STATE(139), 1,
      sym_slot_reference,
  [849] = 5,
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
  [869] = 5,
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
  [889] = 5,
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
  [909] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(31), 1,
      sym_comment,
    STATE(63), 1,
      sym__slot_identifier,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(91), 1,
      sym_aggregate_assignment_slot,
    STATE(124), 1,
      sym_assignment_slot,
    STATE(139), 1,
      sym_slot_reference,
  [937] = 5,
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
  [957] = 5,
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
  [977] = 5,
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
  [997] = 5,
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
  [1017] = 5,
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
  [1037] = 5,
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
  [1057] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(38), 1,
      sym_comment,
    STATE(63), 1,
      sym__slot_identifier,
    STATE(90), 1,
      sym_atomic_assignment_slot,
    STATE(91), 1,
      sym_aggregate_assignment_slot,
    STATE(139), 1,
      sym_slot_reference,
    STATE(141), 1,
      sym_assignment_slot,
  [1085] = 5,
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
  [1105] = 5,
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
  [1125] = 5,
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
  [1145] = 5,
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
  [1165] = 5,
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
  [1185] = 5,
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
  [1205] = 5,
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
  [1365] = 5,
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
  [1385] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_LBRACK,
    STATE(54), 1,
      sym_comment,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
  [1405] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_when_node_repeat1,
    STATE(147), 1,
      sym_when_answer_sub_node,
    STATE(161), 1,
      sym_else_sub_node,
  [1430] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(212), 1,
      anon_sym_LBRACE,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      sym_comment,
    STATE(73), 1,
      aux_sym_when_node_repeat1,
    STATE(147), 1,
      sym_when_answer_sub_node,
    STATE(235), 1,
      sym_else_sub_node,
  [1455] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym__slot_values_repeat1,
    ACTIONS(216), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1476] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(222), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_slot_reference_repeat1,
    ACTIONS(220), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1497] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1518] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(60), 1,
      sym_comment,
    ACTIONS(226), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1535] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    STATE(61), 2,
      sym_comment,
      aux_sym_slot_reference_repeat1,
    ACTIONS(228), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1554] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(62), 1,
      sym_comment,
    ACTIONS(89), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1571] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(222), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      aux_sym_slot_reference_repeat1,
    STATE(63), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
  [1592] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_comment,
    STATE(69), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(129), 1,
      sym_answer_sub_node,
  [1614] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(239), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_term_sub_node,
    STATE(65), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1634] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_comment,
    STATE(75), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(123), 1,
      sym_consider_option_sub_node,
  [1656] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(133), 1,
      sym_term_sub_node,
  [1678] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    ACTIONS(254), 1,
      aux_sym_slot_value_token1,
    STATE(57), 1,
      sym_slot_value,
    STATE(68), 1,
      sym_comment,
    STATE(86), 1,
      sym__slot_values,
  [1700] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      sym_answer_sub_node,
    STATE(69), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1720] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(261), 1,
      anon_sym_terms,
    ACTIONS(263), 1,
      anon_sym_answers,
    STATE(70), 1,
      sym_comment,
    STATE(195), 1,
      sym_node_id,
  [1742] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(71), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1758] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(72), 1,
      sym_comment,
    ACTIONS(265), 4,
      anon_sym_RBRACE,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
  [1774] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(267), 1,
      anon_sym_RBRACK,
    ACTIONS(269), 1,
      anon_sym_LBRACE,
    STATE(147), 1,
      sym_when_answer_sub_node,
    STATE(73), 2,
      sym_comment,
      aux_sym_when_node_repeat1,
  [1794] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(74), 1,
      sym_comment,
    STATE(133), 1,
      sym_term_sub_node,
  [1816] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    ACTIONS(275), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      sym_consider_option_sub_node,
    STATE(75), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1836] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(76), 1,
      sym_comment,
    STATE(133), 1,
      sym_term_sub_node,
  [1858] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(133), 1,
      sym_term_sub_node,
  [1880] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      aux_sym_when_node_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(147), 1,
      sym_when_answer_sub_node,
  [1899] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(79), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1914] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(80), 1,
      sym_comment,
    STATE(123), 1,
      sym_consider_option_sub_node,
  [1933] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(81), 1,
      sym_comment,
    ACTIONS(285), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1948] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(235), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(82), 1,
      sym_comment,
    STATE(129), 1,
      sym_answer_sub_node,
  [1967] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      aux_sym_when_node_repeat1,
    STATE(83), 1,
      sym_comment,
    STATE(147), 1,
      sym_when_answer_sub_node,
  [1986] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym__slot_values_repeat1,
  [2005] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(63), 1,
      sym__slot_identifier,
    STATE(85), 1,
      sym_comment,
    STATE(151), 1,
      sym_slot_reference,
  [2024] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(86), 1,
      sym_comment,
    ACTIONS(289), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2039] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(291), 1,
      aux_sym_decision_graph_name_token1,
    STATE(87), 1,
      sym_comment,
    STATE(154), 1,
      sym_node_id_value,
    STATE(155), 1,
      sym_decision_graph_name,
  [2058] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_comment,
    STATE(184), 1,
      sym_else_sub_node,
  [2077] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(291), 1,
      aux_sym_decision_graph_name_token1,
    STATE(89), 1,
      sym_comment,
    STATE(211), 1,
      sym_node_id_value,
    STATE(213), 1,
      sym_decision_graph_name,
  [2096] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(90), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2111] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(91), 1,
      sym_comment,
    ACTIONS(297), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2126] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(299), 1,
      anon_sym_text,
    STATE(92), 1,
      sym_comment,
    STATE(203), 1,
      sym_node_id,
  [2145] = 4,
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
  [2160] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_comment,
    STATE(104), 1,
      sym_terms_sub_node,
    STATE(221), 1,
      sym_answers_sub_node,
  [2179] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(305), 1,
      anon_sym_title,
    STATE(95), 1,
      sym_comment,
    STATE(230), 1,
      sym_node_id,
  [2198] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(303), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_comment,
    STATE(150), 1,
      sym_terms_sub_node,
    STATE(193), 1,
      sym_answers_sub_node,
  [2217] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(97), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2232] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      sym_comment,
    STATE(181), 1,
      sym_else_sub_node,
  [2251] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(99), 1,
      sym_comment,
  [2270] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_consider_options_sub_node,
    STATE(100), 1,
      sym_comment,
  [2286] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(317), 1,
      anon_sym_GT,
    STATE(101), 1,
      sym_comment,
  [2302] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(102), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2316] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(103), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2330] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(104), 1,
      sym_comment,
    STATE(193), 1,
      sym_answers_sub_node,
  [2346] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(105), 1,
      sym_comment,
    ACTIONS(325), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2360] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(327), 1,
      aux_sym_decision_graph_name_token1,
    STATE(106), 1,
      sym_comment,
    STATE(192), 1,
      sym_node_id_value,
  [2376] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(107), 1,
      sym_comment,
    ACTIONS(329), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2390] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(108), 1,
      sym_comment,
    ACTIONS(331), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2404] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(333), 1,
      anon_sym_COLON,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    STATE(109), 1,
      sym_comment,
  [2420] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(12), 1,
      sym_node_id,
    STATE(110), 1,
      sym_comment,
  [2436] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(337), 1,
      sym_free_text,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_comment,
  [2452] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(112), 1,
      sym_comment,
    ACTIONS(341), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2466] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(113), 1,
      sym_comment,
  [2482] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(254), 1,
      aux_sym_slot_value_token1,
    STATE(79), 1,
      sym_slot_value,
    STATE(114), 1,
      sym_comment,
  [2498] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(79), 1,
      aux_sym_slot_value_token1,
    STATE(71), 1,
      sym__slot_identifier,
    STATE(115), 1,
      sym_comment,
  [2514] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(116), 1,
      sym_comment,
    ACTIONS(347), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2528] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(349), 1,
      sym_free_text,
    ACTIONS(351), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_comment,
  [2544] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(327), 1,
      aux_sym_decision_graph_name_token1,
    STATE(118), 1,
      sym_comment,
    STATE(185), 1,
      sym_node_id_value,
  [2560] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(353), 1,
      anon_sym_LBRACK,
    ACTIONS(355), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(119), 1,
      sym_comment,
  [2576] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(313), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_consider_options_sub_node,
    STATE(120), 1,
      sym_comment,
  [2592] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(121), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2606] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(120), 1,
      sym_slot_sub_node,
    STATE(122), 1,
      sym_comment,
  [2622] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(123), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2636] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(363), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      sym_comment,
  [2652] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(365), 1,
      sym_free_text,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(125), 1,
      sym_comment,
  [2668] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(254), 1,
      aux_sym_slot_value_token1,
    STATE(126), 1,
      sym_comment,
    STATE(222), 1,
      sym_slot_value,
  [2684] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(369), 1,
      aux_sym_decision_graph_name_token1,
    STATE(127), 1,
      sym_comment,
    STATE(173), 1,
      sym_decision_graph_name,
  [2700] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(371), 1,
      anon_sym_RBRACK,
    ACTIONS(373), 1,
      sym_free_text,
    STATE(128), 1,
      sym_comment,
  [2716] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(129), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2730] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(377), 1,
      anon_sym_COLON,
    ACTIONS(379), 1,
      sym_free_text,
    STATE(130), 1,
      sym_comment,
  [2746] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_text_sub_node,
    STATE(131), 1,
      sym_comment,
  [2762] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(381), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_text_sub_node,
    STATE(132), 1,
      sym_comment,
  [2778] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(133), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2792] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    ACTIONS(387), 1,
      sym_free_text,
    STATE(134), 1,
      sym_comment,
  [2808] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(389), 1,
      anon_sym_COLON,
    ACTIONS(391), 1,
      sym_free_text,
    STATE(135), 1,
      sym_comment,
  [2824] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    ACTIONS(393), 1,
      anon_sym_LT,
    STATE(136), 1,
      sym_comment,
  [2840] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(100), 1,
      sym_slot_sub_node,
    STATE(137), 1,
      sym_comment,
  [2856] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(254), 1,
      aux_sym_slot_value_token1,
    STATE(62), 1,
      sym_slot_value,
    STATE(138), 1,
      sym_comment,
  [2872] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(395), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(397), 1,
      anon_sym_EQ,
    STATE(139), 1,
      sym_comment,
  [2888] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(399), 1,
      anon_sym_RBRACK,
    ACTIONS(401), 1,
      sym_free_text,
    STATE(140), 1,
      sym_comment,
  [2904] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(335), 1,
      anon_sym_SEMI,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      sym_comment,
  [2920] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(405), 1,
      sym_free_text,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      sym_comment,
  [2936] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(409), 1,
      sym_free_text,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_comment,
  [2952] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(144), 1,
      sym_comment,
  [2968] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(327), 1,
      aux_sym_decision_graph_name_token1,
    STATE(145), 1,
      sym_comment,
    STATE(183), 1,
      sym_node_id_value,
  [2984] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(254), 1,
      aux_sym_slot_value_token1,
    STATE(84), 1,
      sym_slot_value,
    STATE(146), 1,
      sym_comment,
  [3000] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(147), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [3014] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(419), 1,
      sym_free_text,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(148), 1,
      sym_comment,
  [3030] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    ACTIONS(425), 1,
      sym_free_text,
    STATE(149), 1,
      sym_comment,
  [3046] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_comment,
    STATE(182), 1,
      sym_answers_sub_node,
  [3062] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_comment,
  [3075] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(429), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_comment,
  [3088] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(431), 1,
      anon_sym_slot,
    STATE(153), 1,
      sym_comment,
  [3101] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_comment,
  [3114] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(435), 1,
      anon_sym_GT,
    STATE(155), 1,
      sym_comment,
  [3127] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_comment,
  [3140] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(437), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(157), 1,
      sym_comment,
  [3153] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(439), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_comment,
  [3166] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(441), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_comment,
  [3179] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
    STATE(160), 1,
      sym_comment,
  [3192] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      sym_comment,
  [3205] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(447), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      sym_comment,
  [3218] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(449), 1,
      anon_sym_RBRACK,
    STATE(163), 1,
      sym_comment,
  [3231] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(451), 1,
      anon_sym_COLON,
    STATE(164), 1,
      sym_comment,
  [3244] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_comment,
  [3257] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_comment,
  [3270] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(455), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_comment,
  [3283] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(457), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym_comment,
  [3296] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(459), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_comment,
  [3309] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(461), 1,
      anon_sym_COLON,
    STATE(170), 1,
      sym_comment,
  [3322] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(463), 1,
      anon_sym_COLON,
    STATE(171), 1,
      sym_comment,
  [3335] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(465), 1,
      anon_sym_COLON,
    STATE(172), 1,
      sym_comment,
  [3348] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(467), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_comment,
  [3361] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      sym_comment,
  [3374] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(317), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym_comment,
  [3387] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      sym_comment,
  [3400] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(471), 1,
      anon_sym_COLON,
    STATE(177), 1,
      sym_comment,
  [3413] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(423), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      sym_comment,
  [3426] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(473), 1,
      anon_sym_COLON,
    STATE(179), 1,
      sym_comment,
  [3439] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(475), 1,
      anon_sym_COLON,
    STATE(180), 1,
      sym_comment,
  [3452] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym_comment,
  [3465] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      sym_comment,
  [3478] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym_comment,
  [3491] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_comment,
  [3504] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(483), 1,
      anon_sym_LT,
    STATE(185), 1,
      sym_comment,
  [3517] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(485), 1,
      anon_sym_else,
    STATE(186), 1,
      sym_comment,
  [3530] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_comment,
  [3543] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      sym_comment,
  [3556] = 4,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(491), 1,
      sym_file_path,
    ACTIONS(493), 1,
      anon_sym_LT_DASH_DASH,
    STATE(189), 1,
      sym_comment,
  [3569] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym_comment,
  [3582] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(497), 1,
      anon_sym_COLON,
    STATE(191), 1,
      sym_comment,
  [3595] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      sym_comment,
  [3608] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    STATE(193), 1,
      sym_comment,
  [3621] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(263), 1,
      anon_sym_answers,
    STATE(194), 1,
      sym_comment,
  [3634] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(503), 1,
      anon_sym_terms,
    STATE(195), 1,
      sym_comment,
  [3647] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      sym_comment,
  [3660] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(507), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym_comment,
  [3673] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(509), 1,
      anon_sym_COLON,
    STATE(198), 1,
      sym_comment,
  [3686] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(511), 1,
      anon_sym_COLON,
    STATE(199), 1,
      sym_comment,
  [3699] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(513), 1,
      anon_sym_COLON,
    STATE(200), 1,
      sym_comment,
  [3712] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    STATE(201), 1,
      sym_comment,
  [3725] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_comment,
  [3738] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(519), 1,
      anon_sym_text,
    STATE(203), 1,
      sym_comment,
  [3751] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      sym_comment,
  [3764] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(523), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_comment,
  [3777] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      sym_comment,
  [3790] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    STATE(207), 1,
      sym_comment,
  [3803] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(529), 1,
      anon_sym_COLON,
    STATE(208), 1,
      sym_comment,
  [3816] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(531), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym_comment,
  [3829] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(533), 1,
      anon_sym_COLON,
    STATE(210), 1,
      sym_comment,
  [3842] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      sym_comment,
  [3855] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(537), 1,
      anon_sym_LBRACE,
    STATE(212), 1,
      sym_comment,
  [3868] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(539), 1,
      anon_sym_GT,
    STATE(213), 1,
      sym_comment,
  [3881] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(541), 1,
      anon_sym_COLON,
    STATE(214), 1,
      sym_comment,
  [3894] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(543), 1,
      anon_sym_LBRACE,
    STATE(215), 1,
      sym_comment,
  [3907] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(545), 1,
      anon_sym_COLON,
    STATE(216), 1,
      sym_comment,
  [3920] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(547), 1,
      anon_sym_COLON,
    STATE(217), 1,
      sym_comment,
  [3933] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(549), 1,
      anon_sym_COLON,
    STATE(218), 1,
      sym_comment,
  [3946] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      sym_comment,
  [3959] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(553), 1,
      anon_sym_COLON,
    STATE(220), 1,
      sym_comment,
  [3972] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    STATE(221), 1,
      sym_comment,
  [3985] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(557), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym_comment,
  [3998] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(559), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      sym_comment,
  [4011] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_comment,
  [4024] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(563), 1,
      anon_sym_RBRACK,
    STATE(225), 1,
      sym_comment,
  [4037] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      sym_comment,
  [4050] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(567), 1,
      ts_builtin_sym_end,
    STATE(227), 1,
      sym_comment,
  [4063] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(228), 1,
      sym_comment,
  [4076] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(569), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      sym_comment,
  [4089] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(571), 1,
      anon_sym_title,
    STATE(230), 1,
      sym_comment,
  [4102] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(573), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4115] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(575), 1,
      anon_sym_COLON,
    STATE(232), 1,
      sym_comment,
  [4128] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    STATE(233), 1,
      sym_comment,
  [4141] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(579), 1,
      anon_sym_COLON,
    STATE(234), 1,
      sym_comment,
  [4154] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(210), 1,
      anon_sym_RBRACK,
    STATE(235), 1,
      sym_comment,
  [4167] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(236), 1,
      sym_comment,
  [4180] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(583), 1,
      anon_sym_options,
    STATE(237), 1,
      sym_comment,
  [4193] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(585), 1,
      anon_sym_RBRACE,
    STATE(238), 1,
      sym_comment,
  [4206] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_comment,
  [4219] = 1,
    ACTIONS(589), 1,
      aux_sym_comment_token1,
  [4223] = 1,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
  [4227] = 1,
    ACTIONS(593), 1,
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
  [SMALL_STATE(20)] = 681,
  [SMALL_STATE(21)] = 701,
  [SMALL_STATE(22)] = 721,
  [SMALL_STATE(23)] = 741,
  [SMALL_STATE(24)] = 761,
  [SMALL_STATE(25)] = 781,
  [SMALL_STATE(26)] = 801,
  [SMALL_STATE(27)] = 821,
  [SMALL_STATE(28)] = 849,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 889,
  [SMALL_STATE(31)] = 909,
  [SMALL_STATE(32)] = 937,
  [SMALL_STATE(33)] = 957,
  [SMALL_STATE(34)] = 977,
  [SMALL_STATE(35)] = 997,
  [SMALL_STATE(36)] = 1017,
  [SMALL_STATE(37)] = 1037,
  [SMALL_STATE(38)] = 1057,
  [SMALL_STATE(39)] = 1085,
  [SMALL_STATE(40)] = 1105,
  [SMALL_STATE(41)] = 1125,
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
  [SMALL_STATE(54)] = 1385,
  [SMALL_STATE(55)] = 1405,
  [SMALL_STATE(56)] = 1430,
  [SMALL_STATE(57)] = 1455,
  [SMALL_STATE(58)] = 1476,
  [SMALL_STATE(59)] = 1497,
  [SMALL_STATE(60)] = 1518,
  [SMALL_STATE(61)] = 1535,
  [SMALL_STATE(62)] = 1554,
  [SMALL_STATE(63)] = 1571,
  [SMALL_STATE(64)] = 1592,
  [SMALL_STATE(65)] = 1614,
  [SMALL_STATE(66)] = 1634,
  [SMALL_STATE(67)] = 1656,
  [SMALL_STATE(68)] = 1678,
  [SMALL_STATE(69)] = 1700,
  [SMALL_STATE(70)] = 1720,
  [SMALL_STATE(71)] = 1742,
  [SMALL_STATE(72)] = 1758,
  [SMALL_STATE(73)] = 1774,
  [SMALL_STATE(74)] = 1794,
  [SMALL_STATE(75)] = 1816,
  [SMALL_STATE(76)] = 1836,
  [SMALL_STATE(77)] = 1858,
  [SMALL_STATE(78)] = 1880,
  [SMALL_STATE(79)] = 1899,
  [SMALL_STATE(80)] = 1914,
  [SMALL_STATE(81)] = 1933,
  [SMALL_STATE(82)] = 1948,
  [SMALL_STATE(83)] = 1967,
  [SMALL_STATE(84)] = 1986,
  [SMALL_STATE(85)] = 2005,
  [SMALL_STATE(86)] = 2024,
  [SMALL_STATE(87)] = 2039,
  [SMALL_STATE(88)] = 2058,
  [SMALL_STATE(89)] = 2077,
  [SMALL_STATE(90)] = 2096,
  [SMALL_STATE(91)] = 2111,
  [SMALL_STATE(92)] = 2126,
  [SMALL_STATE(93)] = 2145,
  [SMALL_STATE(94)] = 2160,
  [SMALL_STATE(95)] = 2179,
  [SMALL_STATE(96)] = 2198,
  [SMALL_STATE(97)] = 2217,
  [SMALL_STATE(98)] = 2232,
  [SMALL_STATE(99)] = 2251,
  [SMALL_STATE(100)] = 2270,
  [SMALL_STATE(101)] = 2286,
  [SMALL_STATE(102)] = 2302,
  [SMALL_STATE(103)] = 2316,
  [SMALL_STATE(104)] = 2330,
  [SMALL_STATE(105)] = 2346,
  [SMALL_STATE(106)] = 2360,
  [SMALL_STATE(107)] = 2376,
  [SMALL_STATE(108)] = 2390,
  [SMALL_STATE(109)] = 2404,
  [SMALL_STATE(110)] = 2420,
  [SMALL_STATE(111)] = 2436,
  [SMALL_STATE(112)] = 2452,
  [SMALL_STATE(113)] = 2466,
  [SMALL_STATE(114)] = 2482,
  [SMALL_STATE(115)] = 2498,
  [SMALL_STATE(116)] = 2514,
  [SMALL_STATE(117)] = 2528,
  [SMALL_STATE(118)] = 2544,
  [SMALL_STATE(119)] = 2560,
  [SMALL_STATE(120)] = 2576,
  [SMALL_STATE(121)] = 2592,
  [SMALL_STATE(122)] = 2606,
  [SMALL_STATE(123)] = 2622,
  [SMALL_STATE(124)] = 2636,
  [SMALL_STATE(125)] = 2652,
  [SMALL_STATE(126)] = 2668,
  [SMALL_STATE(127)] = 2684,
  [SMALL_STATE(128)] = 2700,
  [SMALL_STATE(129)] = 2716,
  [SMALL_STATE(130)] = 2730,
  [SMALL_STATE(131)] = 2746,
  [SMALL_STATE(132)] = 2762,
  [SMALL_STATE(133)] = 2778,
  [SMALL_STATE(134)] = 2792,
  [SMALL_STATE(135)] = 2808,
  [SMALL_STATE(136)] = 2824,
  [SMALL_STATE(137)] = 2840,
  [SMALL_STATE(138)] = 2856,
  [SMALL_STATE(139)] = 2872,
  [SMALL_STATE(140)] = 2888,
  [SMALL_STATE(141)] = 2904,
  [SMALL_STATE(142)] = 2920,
  [SMALL_STATE(143)] = 2936,
  [SMALL_STATE(144)] = 2952,
  [SMALL_STATE(145)] = 2968,
  [SMALL_STATE(146)] = 2984,
  [SMALL_STATE(147)] = 3000,
  [SMALL_STATE(148)] = 3014,
  [SMALL_STATE(149)] = 3030,
  [SMALL_STATE(150)] = 3046,
  [SMALL_STATE(151)] = 3062,
  [SMALL_STATE(152)] = 3075,
  [SMALL_STATE(153)] = 3088,
  [SMALL_STATE(154)] = 3101,
  [SMALL_STATE(155)] = 3114,
  [SMALL_STATE(156)] = 3127,
  [SMALL_STATE(157)] = 3140,
  [SMALL_STATE(158)] = 3153,
  [SMALL_STATE(159)] = 3166,
  [SMALL_STATE(160)] = 3179,
  [SMALL_STATE(161)] = 3192,
  [SMALL_STATE(162)] = 3205,
  [SMALL_STATE(163)] = 3218,
  [SMALL_STATE(164)] = 3231,
  [SMALL_STATE(165)] = 3244,
  [SMALL_STATE(166)] = 3257,
  [SMALL_STATE(167)] = 3270,
  [SMALL_STATE(168)] = 3283,
  [SMALL_STATE(169)] = 3296,
  [SMALL_STATE(170)] = 3309,
  [SMALL_STATE(171)] = 3322,
  [SMALL_STATE(172)] = 3335,
  [SMALL_STATE(173)] = 3348,
  [SMALL_STATE(174)] = 3361,
  [SMALL_STATE(175)] = 3374,
  [SMALL_STATE(176)] = 3387,
  [SMALL_STATE(177)] = 3400,
  [SMALL_STATE(178)] = 3413,
  [SMALL_STATE(179)] = 3426,
  [SMALL_STATE(180)] = 3439,
  [SMALL_STATE(181)] = 3452,
  [SMALL_STATE(182)] = 3465,
  [SMALL_STATE(183)] = 3478,
  [SMALL_STATE(184)] = 3491,
  [SMALL_STATE(185)] = 3504,
  [SMALL_STATE(186)] = 3517,
  [SMALL_STATE(187)] = 3530,
  [SMALL_STATE(188)] = 3543,
  [SMALL_STATE(189)] = 3556,
  [SMALL_STATE(190)] = 3569,
  [SMALL_STATE(191)] = 3582,
  [SMALL_STATE(192)] = 3595,
  [SMALL_STATE(193)] = 3608,
  [SMALL_STATE(194)] = 3621,
  [SMALL_STATE(195)] = 3634,
  [SMALL_STATE(196)] = 3647,
  [SMALL_STATE(197)] = 3660,
  [SMALL_STATE(198)] = 3673,
  [SMALL_STATE(199)] = 3686,
  [SMALL_STATE(200)] = 3699,
  [SMALL_STATE(201)] = 3712,
  [SMALL_STATE(202)] = 3725,
  [SMALL_STATE(203)] = 3738,
  [SMALL_STATE(204)] = 3751,
  [SMALL_STATE(205)] = 3764,
  [SMALL_STATE(206)] = 3777,
  [SMALL_STATE(207)] = 3790,
  [SMALL_STATE(208)] = 3803,
  [SMALL_STATE(209)] = 3816,
  [SMALL_STATE(210)] = 3829,
  [SMALL_STATE(211)] = 3842,
  [SMALL_STATE(212)] = 3855,
  [SMALL_STATE(213)] = 3868,
  [SMALL_STATE(214)] = 3881,
  [SMALL_STATE(215)] = 3894,
  [SMALL_STATE(216)] = 3907,
  [SMALL_STATE(217)] = 3920,
  [SMALL_STATE(218)] = 3933,
  [SMALL_STATE(219)] = 3946,
  [SMALL_STATE(220)] = 3959,
  [SMALL_STATE(221)] = 3972,
  [SMALL_STATE(222)] = 3985,
  [SMALL_STATE(223)] = 3998,
  [SMALL_STATE(224)] = 4011,
  [SMALL_STATE(225)] = 4024,
  [SMALL_STATE(226)] = 4037,
  [SMALL_STATE(227)] = 4050,
  [SMALL_STATE(228)] = 4063,
  [SMALL_STATE(229)] = 4076,
  [SMALL_STATE(230)] = 4089,
  [SMALL_STATE(231)] = 4102,
  [SMALL_STATE(232)] = 4115,
  [SMALL_STATE(233)] = 4128,
  [SMALL_STATE(234)] = 4141,
  [SMALL_STATE(235)] = 4154,
  [SMALL_STATE(236)] = 4167,
  [SMALL_STATE(237)] = 4180,
  [SMALL_STATE(238)] = 4193,
  [SMALL_STATE(239)] = 4206,
  [SMALL_STATE(240)] = 4219,
  [SMALL_STATE(241)] = 4223,
  [SMALL_STATE(242)] = 4227,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(240),
  [5] = {.count = 1, .reusable = true}, SHIFT(242),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(110),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(110),
  [21] = {.count = 1, .reusable = true}, SHIFT(95),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [27] = {.count = 1, .reusable = true}, SHIFT(220),
  [29] = {.count = 1, .reusable = true}, SHIFT(217),
  [31] = {.count = 1, .reusable = true}, SHIFT(216),
  [33] = {.count = 1, .reusable = true}, SHIFT(118),
  [35] = {.count = 1, .reusable = true}, SHIFT(210),
  [37] = {.count = 1, .reusable = true}, SHIFT(209),
  [39] = {.count = 1, .reusable = true}, SHIFT(208),
  [41] = {.count = 1, .reusable = true}, SHIFT(207),
  [43] = {.count = 1, .reusable = true}, SHIFT(206),
  [45] = {.count = 1, .reusable = true}, SHIFT(205),
  [47] = {.count = 1, .reusable = true}, SHIFT(200),
  [49] = {.count = 1, .reusable = true}, SHIFT(127),
  [51] = {.count = 1, .reusable = true}, SHIFT(172),
  [53] = {.count = 1, .reusable = true}, SHIFT(171),
  [55] = {.count = 1, .reusable = true}, SHIFT(170),
  [57] = {.count = 1, .reusable = true}, SHIFT(168),
  [59] = {.count = 1, .reusable = true}, SHIFT(167),
  [61] = {.count = 1, .reusable = true}, SHIFT(164),
  [63] = {.count = 1, .reusable = true}, SHIFT(163),
  [65] = {.count = 1, .reusable = true}, SHIFT(160),
  [67] = {.count = 1, .reusable = true}, SHIFT(159),
  [69] = {.count = 1, .reusable = true}, SHIFT(158),
  [71] = {.count = 1, .reusable = false}, SHIFT(180),
  [73] = {.count = 1, .reusable = false}, SHIFT(72),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [79] = {.count = 1, .reusable = true}, SHIFT(72),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 8),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 8),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [87] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [89] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(138),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [110] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [112] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [116] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 4),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 4),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_end_node, 3),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_end_node, 3),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [150] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [152] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 7),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 7),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [210] = {.count = 1, .reusable = true}, SHIFT(51),
  [212] = {.count = 1, .reusable = true}, SHIFT(17),
  [214] = {.count = 1, .reusable = true}, SHIFT(50),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [218] = {.count = 1, .reusable = true}, SHIFT(138),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 2),
  [222] = {.count = 1, .reusable = true}, SHIFT(115),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [228] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2),
  [230] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_reference_repeat1, 2), SHIFT_REPEAT(115),
  [233] = {.count = 1, .reusable = true}, REDUCE(sym_slot_reference, 1),
  [235] = {.count = 1, .reusable = true}, SHIFT(130),
  [237] = {.count = 1, .reusable = true}, SHIFT(219),
  [239] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(135),
  [242] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [244] = {.count = 1, .reusable = true}, SHIFT(126),
  [246] = {.count = 1, .reusable = true}, SHIFT(116),
  [248] = {.count = 1, .reusable = true}, SHIFT(135),
  [250] = {.count = 1, .reusable = true}, SHIFT(215),
  [252] = {.count = 1, .reusable = true}, SHIFT(146),
  [254] = {.count = 1, .reusable = true}, SHIFT(60),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(130),
  [259] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [261] = {.count = 1, .reusable = true}, SHIFT(198),
  [263] = {.count = 1, .reusable = true}, SHIFT(152),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym__slot_identifier, 1),
  [267] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 2), SHIFT_REPEAT(19),
  [272] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(126),
  [275] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [277] = {.count = 1, .reusable = true}, SHIFT(233),
  [279] = {.count = 1, .reusable = true}, SHIFT(190),
  [281] = {.count = 1, .reusable = true}, SHIFT(19),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [285] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [287] = {.count = 1, .reusable = true}, SHIFT(97),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [291] = {.count = 1, .reusable = true}, SHIFT(101),
  [293] = {.count = 1, .reusable = true}, SHIFT(39),
  [295] = {.count = 1, .reusable = true}, SHIFT(186),
  [297] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [299] = {.count = 1, .reusable = true}, SHIFT(177),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [303] = {.count = 1, .reusable = true}, SHIFT(70),
  [305] = {.count = 1, .reusable = true}, SHIFT(232),
  [307] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [309] = {.count = 1, .reusable = true}, SHIFT(44),
  [311] = {.count = 1, .reusable = true}, SHIFT(93),
  [313] = {.count = 1, .reusable = true}, SHIFT(237),
  [315] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [323] = {.count = 1, .reusable = true}, SHIFT(194),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [327] = {.count = 1, .reusable = true}, SHIFT(136),
  [329] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [333] = {.count = 1, .reusable = true}, SHIFT(9),
  [335] = {.count = 1, .reusable = true}, SHIFT(27),
  [337] = {.count = 1, .reusable = true}, SHIFT(236),
  [339] = {.count = 1, .reusable = true}, SHIFT(108),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [345] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [349] = {.count = 1, .reusable = true}, SHIFT(228),
  [351] = {.count = 1, .reusable = true}, SHIFT(112),
  [353] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [359] = {.count = 1, .reusable = true}, SHIFT(153),
  [361] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [363] = {.count = 1, .reusable = true}, SHIFT(45),
  [365] = {.count = 1, .reusable = true}, SHIFT(165),
  [367] = {.count = 1, .reusable = true}, SHIFT(166),
  [369] = {.count = 1, .reusable = true}, SHIFT(175),
  [371] = {.count = 1, .reusable = true}, SHIFT(52),
  [373] = {.count = 1, .reusable = true}, SHIFT(156),
  [375] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [377] = {.count = 1, .reusable = true}, SHIFT(11),
  [379] = {.count = 1, .reusable = true}, SHIFT(218),
  [381] = {.count = 1, .reusable = true}, SHIFT(92),
  [383] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [385] = {.count = 1, .reusable = true}, SHIFT(28),
  [387] = {.count = 1, .reusable = true}, SHIFT(223),
  [389] = {.count = 1, .reusable = true}, SHIFT(117),
  [391] = {.count = 1, .reusable = true}, SHIFT(214),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [395] = {.count = 1, .reusable = true}, SHIFT(68),
  [397] = {.count = 1, .reusable = true}, SHIFT(114),
  [399] = {.count = 1, .reusable = true}, SHIFT(53),
  [401] = {.count = 1, .reusable = true}, SHIFT(178),
  [403] = {.count = 1, .reusable = true}, SHIFT(23),
  [405] = {.count = 1, .reusable = true}, SHIFT(176),
  [407] = {.count = 1, .reusable = true}, SHIFT(144),
  [409] = {.count = 1, .reusable = true}, SHIFT(204),
  [411] = {.count = 1, .reusable = true}, SHIFT(119),
  [413] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [415] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [417] = {.count = 1, .reusable = true}, REDUCE(aux_sym_when_node_repeat1, 1),
  [419] = {.count = 1, .reusable = true}, SHIFT(188),
  [421] = {.count = 1, .reusable = true}, SHIFT(187),
  [423] = {.count = 1, .reusable = true}, SHIFT(24),
  [425] = {.count = 1, .reusable = true}, SHIFT(201),
  [427] = {.count = 1, .reusable = true}, SHIFT(197),
  [429] = {.count = 1, .reusable = true}, SHIFT(82),
  [431] = {.count = 1, .reusable = true}, SHIFT(234),
  [433] = {.count = 1, .reusable = true}, SHIFT(25),
  [435] = {.count = 1, .reusable = true}, SHIFT(106),
  [437] = {.count = 1, .reusable = true}, SHIFT(29),
  [439] = {.count = 1, .reusable = true}, SHIFT(31),
  [441] = {.count = 1, .reusable = true}, SHIFT(149),
  [443] = {.count = 1, .reusable = true}, SHIFT(33),
  [445] = {.count = 1, .reusable = true}, SHIFT(32),
  [447] = {.count = 1, .reusable = true}, SHIFT(30),
  [449] = {.count = 1, .reusable = true}, SHIFT(34),
  [451] = {.count = 1, .reusable = true}, SHIFT(5),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [455] = {.count = 1, .reusable = true}, SHIFT(78),
  [457] = {.count = 1, .reusable = true}, SHIFT(122),
  [459] = {.count = 1, .reusable = true}, SHIFT(67),
  [461] = {.count = 1, .reusable = true}, SHIFT(89),
  [463] = {.count = 1, .reusable = true}, SHIFT(132),
  [465] = {.count = 1, .reusable = true}, SHIFT(134),
  [467] = {.count = 1, .reusable = true}, SHIFT(189),
  [469] = {.count = 1, .reusable = true}, SHIFT(121),
  [471] = {.count = 1, .reusable = true}, SHIFT(125),
  [473] = {.count = 1, .reusable = true}, SHIFT(143),
  [475] = {.count = 1, .reusable = true}, SHIFT(13),
  [477] = {.count = 1, .reusable = true}, SHIFT(21),
  [479] = {.count = 1, .reusable = true}, SHIFT(20),
  [481] = {.count = 1, .reusable = true}, SHIFT(35),
  [483] = {.count = 1, .reusable = false}, SHIFT(14),
  [485] = {.count = 1, .reusable = true}, SHIFT(180),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [489] = {.count = 1, .reusable = true}, SHIFT(212),
  [491] = {.count = 1, .reusable = true}, SHIFT(226),
  [493] = {.count = 1, .reusable = false}, SHIFT(240),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [497] = {.count = 1, .reusable = true}, SHIFT(80),
  [499] = {.count = 1, .reusable = true}, SHIFT(41),
  [501] = {.count = 1, .reusable = true}, SHIFT(42),
  [503] = {.count = 1, .reusable = true}, SHIFT(169),
  [505] = {.count = 1, .reusable = true}, SHIFT(26),
  [507] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [509] = {.count = 1, .reusable = true}, SHIFT(77),
  [511] = {.count = 1, .reusable = true}, SHIFT(148),
  [513] = {.count = 1, .reusable = true}, SHIFT(38),
  [515] = {.count = 1, .reusable = true}, SHIFT(46),
  [517] = {.count = 1, .reusable = true}, SHIFT(225),
  [519] = {.count = 1, .reusable = true}, SHIFT(199),
  [521] = {.count = 1, .reusable = true}, SHIFT(113),
  [523] = {.count = 1, .reusable = true}, SHIFT(140),
  [525] = {.count = 1, .reusable = true}, SHIFT(37),
  [527] = {.count = 1, .reusable = true}, SHIFT(36),
  [529] = {.count = 1, .reusable = true}, SHIFT(4),
  [531] = {.count = 1, .reusable = true}, SHIFT(83),
  [533] = {.count = 1, .reusable = true}, SHIFT(137),
  [535] = {.count = 1, .reusable = true}, SHIFT(48),
  [537] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [539] = {.count = 1, .reusable = true}, SHIFT(145),
  [541] = {.count = 1, .reusable = true}, SHIFT(111),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [545] = {.count = 1, .reusable = true}, SHIFT(87),
  [547] = {.count = 1, .reusable = true}, SHIFT(131),
  [549] = {.count = 1, .reusable = true}, SHIFT(7),
  [551] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [553] = {.count = 1, .reusable = true}, SHIFT(128),
  [555] = {.count = 1, .reusable = true}, SHIFT(43),
  [557] = {.count = 1, .reusable = true}, SHIFT(6),
  [559] = {.count = 1, .reusable = true}, SHIFT(49),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [565] = {.count = 1, .reusable = true}, SHIFT(18),
  [567] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [569] = {.count = 1, .reusable = true}, SHIFT(54),
  [571] = {.count = 1, .reusable = true}, SHIFT(179),
  [573] = {.count = 1, .reusable = true}, SHIFT(107),
  [575] = {.count = 1, .reusable = true}, SHIFT(142),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [579] = {.count = 1, .reusable = true}, SHIFT(85),
  [581] = {.count = 1, .reusable = true}, SHIFT(105),
  [583] = {.count = 1, .reusable = true}, SHIFT(191),
  [585] = {.count = 1, .reusable = true}, SHIFT(103),
  [587] = {.count = 1, .reusable = true}, SHIFT(102),
  [589] = {.count = 1, .reusable = true}, SHIFT(241),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [593] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
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
