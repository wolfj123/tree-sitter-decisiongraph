#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 236
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
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
  anon_sym_PLUS_EQ = 19,
  anon_sym_EQ = 20,
  anon_sym_SLASH = 21,
  anon_sym_LBRACE = 22,
  anon_sym_COMMA = 23,
  anon_sym_RBRACE = 24,
  aux_sym_slot_value_token1 = 25,
  anon_sym_POUNDimport = 26,
  aux_sym_decision_graph_name_token1 = 27,
  anon_sym_text = 28,
  anon_sym_title = 29,
  anon_sym_term = 30,
  anon_sym_answers = 31,
  anon_sym_slot = 32,
  anon_sym_options = 33,
  anon_sym_else = 34,
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
  sym_call_node = 45,
  sym_consider_node = 46,
  sym_when_node = 47,
  sym_section_node = 48,
  sym_continue_node = 49,
  sym_part_node = 50,
  sym_reject_node = 51,
  sym_set_node = 52,
  sym_assignment_slot = 53,
  sym_aggregate_assignment_slot = 54,
  sym_atomic_assignment_slot = 55,
  sym_slot = 56,
  sym__slot_values = 57,
  sym_slot_value = 58,
  sym__slot_identifier = 59,
  sym_import_node = 60,
  sym_decision_graph_name = 61,
  sym_text_sub_node = 62,
  sym_info_sub_node = 63,
  sym_terms_sub_node = 64,
  sym_term_sub_node = 65,
  sym_answers_sub_node = 66,
  sym_answer_sub_node = 67,
  sym_slot_sub_node = 68,
  sym_consider_options_sub_node = 69,
  sym_consider_option_sub_node = 70,
  sym_when_answer_sub_node = 71,
  sym_else_sub_node = 72,
  sym_node_id = 73,
  sym_node_id_value = 74,
  sym_comment = 75,
  aux_sym_decision_graph_repeat1 = 76,
  aux_sym_slot_repeat1 = 77,
  aux_sym__slot_values_repeat1 = 78,
  aux_sym_terms_sub_node_repeat1 = 79,
  aux_sym_answers_sub_node_repeat1 = 80,
  aux_sym_consider_options_sub_node_repeat1 = 81,
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
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_EQ] = "=",
  [anon_sym_SLASH] = "/",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [aux_sym_slot_value_token1] = "slot_value_token1",
  [anon_sym_POUNDimport] = "#import",
  [aux_sym_decision_graph_name_token1] = "decision_graph_name_token1",
  [anon_sym_text] = "text",
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
  [aux_sym_slot_repeat1] = "slot_repeat1",
  [aux_sym__slot_values_repeat1] = "_slot_values_repeat1",
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
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_slot_value_token1] = aux_sym_slot_value_token1,
  [anon_sym_POUNDimport] = anon_sym_POUNDimport,
  [aux_sym_decision_graph_name_token1] = aux_sym_decision_graph_name_token1,
  [anon_sym_text] = anon_sym_text,
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
  [aux_sym_slot_repeat1] = aux_sym_slot_repeat1,
  [aux_sym__slot_values_repeat1] = aux_sym__slot_values_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [aux_sym_slot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__slot_values_repeat1] = {
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
      if (eof) ADVANCE(79);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '+') ADVANCE(117);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == ';') ADVANCE(107);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(147);
      if (lookahead == 'c') ADVANCE(119);
      if (lookahead == 'e') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead == 'r') ADVANCE(125);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'w') ADVANCE(135);
      if (lookahead == '{') ADVANCE(111);
      if (lookahead == '}') ADVANCE(113);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(190);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == '}') ADVANCE(113);
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
          lookahead == '~') ADVANCE(85);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '{') ADVANCE(111);
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
          lookahead != '}') ADVANCE(114);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(101);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 't') ADVANCE(105);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'j') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'k') ADVANCE(87);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(38);
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(185);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(27);
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 69:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(22);
      END_STATE();
    case 71:
      if (lookahead == '{') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == '}') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(86);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(25);
      if (lookahead == '}') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(78)
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_todo);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(77);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_free_text);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '&') ||
          ('(' <= lookahead && lookahead <= '9') ||
          ('?' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_ask);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_consider);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH_DASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_slot_value_token1);
      if (lookahead == '\\') ADVANCE(68);
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
          lookahead != 65279) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_POUNDimport);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '=') ADVANCE(108);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == ']') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'a') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(171);
      if (lookahead == 't') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'h') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'j') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'k') ADVANCE(88);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'm') ADVANCE(180);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(161);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(82);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 'x') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(182);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(145);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'u') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'w') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_term);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_term);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_answers);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_answers);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_slot);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 78, .external_lex_state = 2},
  [3] = {.lex_state = 78, .external_lex_state = 2},
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
  [14] = {.lex_state = 78, .external_lex_state = 2},
  [15] = {.lex_state = 78, .external_lex_state = 2},
  [16] = {.lex_state = 78, .external_lex_state = 2},
  [17] = {.lex_state = 78, .external_lex_state = 2},
  [18] = {.lex_state = 78, .external_lex_state = 2},
  [19] = {.lex_state = 78, .external_lex_state = 2},
  [20] = {.lex_state = 78, .external_lex_state = 2},
  [21] = {.lex_state = 78, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 78, .external_lex_state = 2},
  [24] = {.lex_state = 78, .external_lex_state = 2},
  [25] = {.lex_state = 6, .external_lex_state = 2},
  [26] = {.lex_state = 78, .external_lex_state = 2},
  [27] = {.lex_state = 78, .external_lex_state = 2},
  [28] = {.lex_state = 78, .external_lex_state = 2},
  [29] = {.lex_state = 78, .external_lex_state = 2},
  [30] = {.lex_state = 6, .external_lex_state = 2},
  [31] = {.lex_state = 78, .external_lex_state = 2},
  [32] = {.lex_state = 78, .external_lex_state = 2},
  [33] = {.lex_state = 78, .external_lex_state = 2},
  [34] = {.lex_state = 78, .external_lex_state = 2},
  [35] = {.lex_state = 78, .external_lex_state = 2},
  [36] = {.lex_state = 6, .external_lex_state = 2},
  [37] = {.lex_state = 78, .external_lex_state = 2},
  [38] = {.lex_state = 78, .external_lex_state = 2},
  [39] = {.lex_state = 78, .external_lex_state = 2},
  [40] = {.lex_state = 78, .external_lex_state = 2},
  [41] = {.lex_state = 78, .external_lex_state = 2},
  [42] = {.lex_state = 78, .external_lex_state = 2},
  [43] = {.lex_state = 78, .external_lex_state = 2},
  [44] = {.lex_state = 78, .external_lex_state = 2},
  [45] = {.lex_state = 78, .external_lex_state = 2},
  [46] = {.lex_state = 78, .external_lex_state = 2},
  [47] = {.lex_state = 78, .external_lex_state = 2},
  [48] = {.lex_state = 78, .external_lex_state = 2},
  [49] = {.lex_state = 78, .external_lex_state = 2},
  [50] = {.lex_state = 78, .external_lex_state = 2},
  [51] = {.lex_state = 6, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0, .external_lex_state = 2},
  [54] = {.lex_state = 78, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 78, .external_lex_state = 2},
  [57] = {.lex_state = 78, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 78, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 78, .external_lex_state = 2},
  [62] = {.lex_state = 6, .external_lex_state = 2},
  [63] = {.lex_state = 78, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 7, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 7, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 6, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 78, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 78, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 5, .external_lex_state = 2},
  [95] = {.lex_state = 7, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 7, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 5, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 6, .external_lex_state = 2},
  [109] = {.lex_state = 6, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 5, .external_lex_state = 2},
  [112] = {.lex_state = 7, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 5, .external_lex_state = 2},
  [117] = {.lex_state = 7, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 6, .external_lex_state = 2},
  [122] = {.lex_state = 5, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 5, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 5, .external_lex_state = 2},
  [131] = {.lex_state = 5, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 78, .external_lex_state = 2},
  [135] = {.lex_state = 5, .external_lex_state = 2},
  [136] = {.lex_state = 6, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 5, .external_lex_state = 2},
  [139] = {.lex_state = 6, .external_lex_state = 2},
  [140] = {.lex_state = 5, .external_lex_state = 2},
  [141] = {.lex_state = 0, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 5, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 78, .external_lex_state = 2},
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
  [168] = {.lex_state = 0, .external_lex_state = 2},
  [169] = {.lex_state = 0, .external_lex_state = 2},
  [170] = {.lex_state = 78, .external_lex_state = 2},
  [171] = {.lex_state = 78, .external_lex_state = 2},
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
  [182] = {.lex_state = 0, .external_lex_state = 1},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 0, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 78, .external_lex_state = 2},
  [189] = {.lex_state = 78, .external_lex_state = 2},
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
  [223] = {.lex_state = 78, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 78, .external_lex_state = 2},
  [228] = {.lex_state = 0, .external_lex_state = 2},
  [229] = {.lex_state = 0, .external_lex_state = 2},
  [230] = {.lex_state = 78, .external_lex_state = 2},
  [231] = {.lex_state = 0, .external_lex_state = 2},
  [232] = {.lex_state = 0, .external_lex_state = 2},
  [233] = {.lex_state = 191},
  [234] = {-1},
  [235] = {-1},
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
    [anon_sym_DASH_DASH_RBRACK] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_reject] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_POUNDimport] = ACTIONS(1),
    [aux_sym_decision_graph_name_token1] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
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
    [sym_source_file] = STATE(220),
    [sym_decision_graph] = STATE(217),
    [sym__top_level_node] = STATE(18),
    [sym_todo_node] = STATE(41),
    [sym_ask_node] = STATE(41),
    [sym_call_node] = STATE(41),
    [sym_consider_node] = STATE(41),
    [sym_when_node] = STATE(41),
    [sym_section_node] = STATE(41),
    [sym_continue_node] = STATE(41),
    [sym_part_node] = STATE(41),
    [sym_reject_node] = STATE(41),
    [sym_set_node] = STATE(41),
    [sym_import_node] = STATE(41),
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
    STATE(18), 1,
      sym__top_level_node,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(41), 11,
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
    STATE(18), 1,
      sym__top_level_node,
    STATE(3), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(41), 11,
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
    STATE(10), 1,
      sym_info_sub_node,
    STATE(18), 1,
      sym__top_level_node,
    STATE(172), 1,
      sym_decision_graph,
    STATE(41), 11,
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
    STATE(8), 1,
      sym_info_sub_node,
    STATE(18), 1,
      sym__top_level_node,
    STATE(222), 1,
      sym_decision_graph,
    STATE(41), 11,
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
    STATE(18), 1,
      sym__top_level_node,
    STATE(232), 1,
      sym_decision_graph,
    STATE(41), 11,
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
    STATE(18), 1,
      sym__top_level_node,
    STATE(231), 1,
      sym_decision_graph,
    STATE(41), 11,
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
    STATE(18), 1,
      sym__top_level_node,
    STATE(154), 1,
      sym_decision_graph,
    STATE(41), 11,
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
    STATE(18), 1,
      sym__top_level_node,
    STATE(167), 1,
      sym_decision_graph,
    STATE(41), 11,
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
    STATE(18), 1,
      sym__top_level_node,
    STATE(222), 1,
      sym_decision_graph,
    STATE(41), 11,
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
    STATE(18), 1,
      sym__top_level_node,
    STATE(224), 1,
      sym_decision_graph,
    STATE(41), 11,
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
    STATE(18), 1,
      sym__top_level_node,
    STATE(150), 1,
      sym_decision_graph,
    STATE(41), 11,
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
    STATE(18), 1,
      sym__top_level_node,
    STATE(195), 1,
      sym_decision_graph,
    STATE(41), 11,
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
      anon_sym_COMMA,
    STATE(22), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(87), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [703] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(92), 5,
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
    ACTIONS(98), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [743] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(100), 1,
      aux_sym_slot_value_token1,
    STATE(25), 1,
      sym_comment,
    STATE(59), 1,
      sym__slot_identifier,
    STATE(72), 1,
      sym_assignment_slot,
    STATE(79), 1,
      sym_atomic_assignment_slot,
    STATE(82), 1,
      sym_aggregate_assignment_slot,
    STATE(134), 1,
      sym_slot,
  [771] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [791] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [811] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [831] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [851] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(100), 1,
      aux_sym_slot_value_token1,
    STATE(30), 1,
      sym_comment,
    STATE(59), 1,
      sym__slot_identifier,
    STATE(79), 1,
      sym_atomic_assignment_slot,
    STATE(82), 1,
      sym_aggregate_assignment_slot,
    STATE(118), 1,
      sym_assignment_slot,
    STATE(134), 1,
      sym_slot,
  [879] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [899] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [919] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [939] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [959] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [979] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(100), 1,
      aux_sym_slot_value_token1,
    STATE(36), 1,
      sym_comment,
    STATE(59), 1,
      sym__slot_identifier,
    STATE(79), 1,
      sym_atomic_assignment_slot,
    STATE(82), 1,
      sym_aggregate_assignment_slot,
    STATE(134), 1,
      sym_slot,
    STATE(137), 1,
      sym_assignment_slot,
  [1007] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(138), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1027] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(144), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_comment,
    ACTIONS(142), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1047] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1067] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1087] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1107] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1127] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1147] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1167] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1187] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1207] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1227] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1247] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1267] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1287] = 9,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(100), 1,
      aux_sym_slot_value_token1,
    STATE(51), 1,
      sym_comment,
    STATE(59), 1,
      sym__slot_identifier,
    STATE(79), 1,
      sym_atomic_assignment_slot,
    STATE(82), 1,
      sym_aggregate_assignment_slot,
    STATE(102), 1,
      sym_assignment_slot,
    STATE(134), 1,
      sym_slot,
  [1315] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(52), 1,
      sym_comment,
    ACTIONS(87), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1332] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(53), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym__slot_values_repeat1,
    ACTIONS(194), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1353] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_slot_repeat1,
    ACTIONS(198), 3,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [1374] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(55), 1,
      sym_comment,
    ACTIONS(202), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1391] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    STATE(56), 2,
      sym_comment,
      aux_sym_slot_repeat1,
    ACTIONS(204), 3,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [1410] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(57), 1,
      sym_comment,
    ACTIONS(209), 5,
      anon_sym_COLON,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [1427] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1448] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(54), 1,
      aux_sym_slot_repeat1,
    STATE(59), 1,
      sym_comment,
    ACTIONS(213), 3,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [1469] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(215), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      sym_term_sub_node,
    STATE(60), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1489] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(61), 1,
      sym_comment,
    ACTIONS(204), 4,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [1505] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(220), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      aux_sym_slot_value_token1,
    STATE(53), 1,
      sym_slot_value,
    STATE(62), 1,
      sym_comment,
    STATE(89), 1,
      sym__slot_values,
  [1527] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(224), 1,
      anon_sym_term,
    ACTIONS(226), 1,
      anon_sym_answers,
    STATE(63), 1,
      sym_comment,
    STATE(189), 1,
      sym_node_id,
  [1549] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(120), 1,
      sym_consider_option_sub_node,
  [1571] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      sym_comment,
    STATE(71), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(129), 1,
      sym_term_sub_node,
  [1593] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_comment,
    STATE(67), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(124), 1,
      sym_answer_sub_node,
  [1615] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym_answer_sub_node,
    STATE(67), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1635] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(129), 1,
      sym_term_sub_node,
  [1657] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(129), 1,
      sym_term_sub_node,
  [1679] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(247), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      sym_consider_option_sub_node,
    STATE(70), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1699] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(232), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(71), 1,
      sym_comment,
    STATE(129), 1,
      sym_term_sub_node,
  [1721] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(72), 1,
      sym_comment,
    ACTIONS(254), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1736] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_comment,
    STATE(177), 1,
      sym_else_sub_node,
  [1755] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_comment,
    STATE(90), 1,
      aux_sym__slot_values_repeat1,
  [1774] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(262), 1,
      aux_sym_decision_graph_name_token1,
    STATE(75), 1,
      sym_comment,
    STATE(204), 1,
      sym_node_id_value,
    STATE(206), 1,
      sym_decision_graph_name,
  [1793] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(76), 1,
      sym_comment,
    ACTIONS(264), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1808] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(120), 1,
      sym_consider_option_sub_node,
  [1827] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(236), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(78), 1,
      sym_comment,
    STATE(124), 1,
      sym_answer_sub_node,
  [1846] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(79), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1861] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_comment,
    STATE(153), 1,
      sym_else_sub_node,
  [1880] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(262), 1,
      aux_sym_decision_graph_name_token1,
    STATE(81), 1,
      sym_comment,
    STATE(148), 1,
      sym_decision_graph_name,
    STATE(191), 1,
      sym_node_id_value,
  [1899] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(82), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1914] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(100), 1,
      aux_sym_slot_value_token1,
    STATE(59), 1,
      sym__slot_identifier,
    STATE(83), 1,
      sym_comment,
    STATE(164), 1,
      sym_slot,
  [1933] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_comment,
    STATE(97), 1,
      sym_terms_sub_node,
    STATE(196), 1,
      sym_answers_sub_node,
  [1952] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(272), 1,
      anon_sym_title,
    STATE(85), 1,
      sym_comment,
    STATE(223), 1,
      sym_node_id,
  [1971] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_comment,
    STATE(228), 1,
      sym_else_sub_node,
  [1990] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(87), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2005] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(278), 1,
      anon_sym_text,
    STATE(88), 1,
      sym_comment,
    STATE(170), 1,
      sym_node_id,
  [2024] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(89), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2039] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(22), 1,
      aux_sym__slot_values_repeat1,
    STATE(90), 1,
      sym_comment,
  [2058] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(91), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [2073] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_comment,
    STATE(144), 1,
      sym_terms_sub_node,
    STATE(187), 1,
      sym_answers_sub_node,
  [2092] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      sym_comment,
    STATE(184), 1,
      sym_else_sub_node,
  [2111] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(288), 1,
      sym_free_text,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_comment,
  [2127] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(292), 1,
      aux_sym_decision_graph_name_token1,
    STATE(95), 1,
      sym_comment,
    STATE(176), 1,
      sym_node_id_value,
  [2143] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(96), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2157] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(97), 1,
      sym_comment,
    STATE(187), 1,
      sym_answers_sub_node,
  [2173] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(98), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2187] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(292), 1,
      aux_sym_decision_graph_name_token1,
    STATE(99), 1,
      sym_comment,
    STATE(186), 1,
      sym_node_id_value,
  [2203] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(100), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2217] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(101), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2231] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(304), 1,
      anon_sym_COLON,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    STATE(102), 1,
      sym_comment,
  [2247] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(103), 1,
      sym_comment,
    ACTIONS(308), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2261] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(12), 1,
      sym_node_id,
    STATE(104), 1,
      sym_comment,
  [2277] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(310), 1,
      sym_free_text,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(105), 1,
      sym_comment,
  [2293] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(106), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2307] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(316), 1,
      anon_sym_LBRACK,
    ACTIONS(318), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(107), 1,
      sym_comment,
  [2323] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(222), 1,
      aux_sym_slot_value_token1,
    STATE(76), 1,
      sym_slot_value,
    STATE(108), 1,
      sym_comment,
  [2339] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(100), 1,
      aux_sym_slot_value_token1,
    STATE(61), 1,
      sym__slot_identifier,
    STATE(109), 1,
      sym_comment,
  [2355] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(110), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2369] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(322), 1,
      sym_free_text,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym_comment,
  [2385] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(292), 1,
      aux_sym_decision_graph_name_token1,
    STATE(112), 1,
      sym_comment,
    STATE(179), 1,
      sym_node_id_value,
  [2401] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(113), 1,
      sym_comment,
  [2417] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_consider_options_sub_node,
    STATE(114), 1,
      sym_comment,
  [2433] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(115), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2447] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    ACTIONS(336), 1,
      sym_free_text,
    STATE(116), 1,
      sym_comment,
  [2463] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(338), 1,
      aux_sym_decision_graph_name_token1,
    STATE(117), 1,
      sym_comment,
    STATE(166), 1,
      sym_decision_graph_name,
  [2479] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym_comment,
  [2495] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_when_answer_sub_node,
    STATE(119), 1,
      sym_comment,
  [2511] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(120), 1,
      sym_comment,
    ACTIONS(344), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2525] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(100), 1,
      aux_sym_slot_value_token1,
    STATE(121), 1,
      sym_comment,
    STATE(215), 1,
      sym__slot_identifier,
  [2541] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    ACTIONS(348), 1,
      sym_free_text,
    STATE(122), 1,
      sym_comment,
  [2557] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_text_sub_node,
    STATE(123), 1,
      sym_comment,
  [2573] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(124), 1,
      sym_comment,
    ACTIONS(352), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2587] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(356), 1,
      sym_free_text,
    STATE(125), 1,
      sym_comment,
  [2603] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_slot_sub_node,
    STATE(126), 1,
      sym_comment,
  [2619] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    ACTIONS(362), 1,
      anon_sym_LT,
    STATE(127), 1,
      sym_comment,
  [2635] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(350), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_text_sub_node,
    STATE(128), 1,
      sym_comment,
  [2651] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(129), 1,
      sym_comment,
    ACTIONS(364), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2665] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    ACTIONS(368), 1,
      sym_free_text,
    STATE(130), 1,
      sym_comment,
  [2681] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(370), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      sym_free_text,
    STATE(131), 1,
      sym_comment,
  [2697] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_comment,
    STATE(141), 1,
      sym_slot_sub_node,
  [2713] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_when_answer_sub_node,
    STATE(133), 1,
      sym_comment,
  [2729] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(374), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(376), 1,
      anon_sym_EQ,
    STATE(134), 1,
      sym_comment,
  [2745] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(378), 1,
      sym_free_text,
    ACTIONS(380), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_comment,
  [2761] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(222), 1,
      aux_sym_slot_value_token1,
    STATE(52), 1,
      sym_slot_value,
    STATE(136), 1,
      sym_comment,
  [2777] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(306), 1,
      anon_sym_SEMI,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym_comment,
  [2793] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    ACTIONS(386), 1,
      sym_free_text,
    STATE(138), 1,
      sym_comment,
  [2809] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(222), 1,
      aux_sym_slot_value_token1,
    STATE(74), 1,
      sym_slot_value,
    STATE(139), 1,
      sym_comment,
  [2825] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(388), 1,
      sym_free_text,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      sym_comment,
  [2841] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
    STATE(93), 1,
      sym_consider_options_sub_node,
    STATE(141), 1,
      sym_comment,
  [2857] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(392), 1,
      anon_sym_LBRACK,
    ACTIONS(394), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(142), 1,
      sym_comment,
  [2873] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(396), 1,
      sym_free_text,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(143), 1,
      sym_comment,
  [2889] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(144), 1,
      sym_comment,
    STATE(175), 1,
      sym_answers_sub_node,
  [2905] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(360), 1,
      anon_sym_RBRACK,
    ACTIONS(400), 1,
      anon_sym_GT,
    STATE(145), 1,
      sym_comment,
  [2921] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(402), 1,
      anon_sym_COLON,
    STATE(146), 1,
      sym_comment,
  [2934] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(404), 1,
      anon_sym_COLON,
    STATE(147), 1,
      sym_comment,
  [2947] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(406), 1,
      anon_sym_GT,
    STATE(148), 1,
      sym_comment,
  [2960] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(366), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_comment,
  [2973] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(408), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(150), 1,
      sym_comment,
  [2986] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(410), 1,
      anon_sym_COLON,
    STATE(151), 1,
      sym_comment,
  [2999] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(412), 1,
      anon_sym_COLON,
    STATE(152), 1,
      sym_comment,
  [3012] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      sym_comment,
  [3025] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_comment,
  [3038] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym_comment,
  [3051] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(420), 1,
      anon_sym_COLON,
    STATE(156), 1,
      sym_comment,
  [3064] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_comment,
  [3077] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_comment,
  [3090] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(424), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_comment,
  [3103] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(426), 1,
      anon_sym_COLON,
    STATE(160), 1,
      sym_comment,
  [3116] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(428), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_comment,
  [3129] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(430), 1,
      anon_sym_COLON,
    STATE(162), 1,
      sym_comment,
  [3142] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(432), 1,
      anon_sym_COLON,
    STATE(163), 1,
      sym_comment,
  [3155] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_comment,
  [3168] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(436), 1,
      anon_sym_COLON,
    STATE(165), 1,
      sym_comment,
  [3181] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(438), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym_comment,
  [3194] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(167), 1,
      sym_comment,
  [3207] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(400), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym_comment,
  [3220] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      sym_comment,
  [3233] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(442), 1,
      anon_sym_text,
    STATE(170), 1,
      sym_comment,
  [3246] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(444), 1,
      anon_sym_slot,
    STATE(171), 1,
      sym_comment,
  [3259] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_comment,
  [3272] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(334), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      sym_comment,
  [3285] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(448), 1,
      anon_sym_COLON,
    STATE(174), 1,
      sym_comment,
  [3298] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      sym_comment,
  [3311] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_comment,
  [3324] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      sym_comment,
  [3337] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(456), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym_comment,
  [3350] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(458), 1,
      anon_sym_LT,
    STATE(179), 1,
      sym_comment,
  [3363] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(460), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_comment,
  [3376] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      sym_comment,
  [3389] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(464), 1,
      sym_file_path,
    STATE(182), 1,
      sym_comment,
  [3402] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_comment,
  [3415] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(256), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      sym_comment,
  [3428] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(468), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_comment,
  [3441] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_comment,
  [3454] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(472), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym_comment,
  [3467] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(226), 1,
      anon_sym_answers,
    STATE(188), 1,
      sym_comment,
  [3480] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(474), 1,
      anon_sym_term,
    STATE(189), 1,
      sym_comment,
  [3493] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    STATE(190), 1,
      sym_comment,
  [3506] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_comment,
  [3519] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(480), 1,
      anon_sym_COLON,
    STATE(192), 1,
      sym_comment,
  [3532] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(482), 1,
      anon_sym_COLON,
    STATE(193), 1,
      sym_comment,
  [3545] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      sym_comment,
  [3558] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_comment,
  [3571] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(196), 1,
      sym_comment,
  [3584] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      sym_comment,
  [3597] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(492), 1,
      anon_sym_COLON,
    STATE(198), 1,
      sym_comment,
  [3610] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(494), 1,
      anon_sym_COLON,
    STATE(199), 1,
      sym_comment,
  [3623] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      sym_comment,
  [3636] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(498), 1,
      anon_sym_COLON,
    STATE(201), 1,
      sym_comment,
  [3649] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(500), 1,
      anon_sym_COLON,
    STATE(202), 1,
      sym_comment,
  [3662] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(502), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_comment,
  [3675] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      sym_comment,
  [3688] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(205), 1,
      sym_comment,
  [3701] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(508), 1,
      anon_sym_GT,
    STATE(206), 1,
      sym_comment,
  [3714] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(510), 1,
      anon_sym_COLON,
    STATE(207), 1,
      sym_comment,
  [3727] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(512), 1,
      anon_sym_LBRACE,
    STATE(208), 1,
      sym_comment,
  [3740] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(514), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym_comment,
  [3753] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(516), 1,
      anon_sym_COLON,
    STATE(210), 1,
      sym_comment,
  [3766] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(518), 1,
      anon_sym_COLON,
    STATE(211), 1,
      sym_comment,
  [3779] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(212), 1,
      sym_comment,
  [3792] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(522), 1,
      anon_sym_COLON,
    STATE(213), 1,
      sym_comment,
  [3805] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(524), 1,
      anon_sym_COLON,
    STATE(214), 1,
      sym_comment,
  [3818] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(526), 1,
      anon_sym_COLON,
    STATE(215), 1,
      sym_comment,
  [3831] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym_comment,
  [3844] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
    STATE(217), 1,
      sym_comment,
  [3857] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(532), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      sym_comment,
  [3870] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      sym_comment,
  [3883] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(536), 1,
      ts_builtin_sym_end,
    STATE(220), 1,
      sym_comment,
  [3896] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_comment,
  [3909] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(538), 1,
      anon_sym_RBRACK,
    STATE(222), 1,
      sym_comment,
  [3922] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(540), 1,
      anon_sym_title,
    STATE(223), 1,
      sym_comment,
  [3935] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    STATE(224), 1,
      sym_comment,
  [3948] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(544), 1,
      anon_sym_COLON,
    STATE(225), 1,
      sym_comment,
  [3961] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    STATE(226), 1,
      sym_comment,
  [3974] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(548), 1,
      anon_sym_options,
    STATE(227), 1,
      sym_comment,
  [3987] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym_comment,
  [4000] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_comment,
  [4013] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(552), 1,
      anon_sym_else,
    STATE(230), 1,
      sym_comment,
  [4026] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4039] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_comment,
  [4052] = 1,
    ACTIONS(558), 1,
      aux_sym_comment_token1,
  [4056] = 1,
    ACTIONS(560), 1,
      ts_builtin_sym_end,
  [4060] = 1,
    ACTIONS(562), 1,
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
  [SMALL_STATE(26)] = 771,
  [SMALL_STATE(27)] = 791,
  [SMALL_STATE(28)] = 811,
  [SMALL_STATE(29)] = 831,
  [SMALL_STATE(30)] = 851,
  [SMALL_STATE(31)] = 879,
  [SMALL_STATE(32)] = 899,
  [SMALL_STATE(33)] = 919,
  [SMALL_STATE(34)] = 939,
  [SMALL_STATE(35)] = 959,
  [SMALL_STATE(36)] = 979,
  [SMALL_STATE(37)] = 1007,
  [SMALL_STATE(38)] = 1027,
  [SMALL_STATE(39)] = 1047,
  [SMALL_STATE(40)] = 1067,
  [SMALL_STATE(41)] = 1087,
  [SMALL_STATE(42)] = 1107,
  [SMALL_STATE(43)] = 1127,
  [SMALL_STATE(44)] = 1147,
  [SMALL_STATE(45)] = 1167,
  [SMALL_STATE(46)] = 1187,
  [SMALL_STATE(47)] = 1207,
  [SMALL_STATE(48)] = 1227,
  [SMALL_STATE(49)] = 1247,
  [SMALL_STATE(50)] = 1267,
  [SMALL_STATE(51)] = 1287,
  [SMALL_STATE(52)] = 1315,
  [SMALL_STATE(53)] = 1332,
  [SMALL_STATE(54)] = 1353,
  [SMALL_STATE(55)] = 1374,
  [SMALL_STATE(56)] = 1391,
  [SMALL_STATE(57)] = 1410,
  [SMALL_STATE(58)] = 1427,
  [SMALL_STATE(59)] = 1448,
  [SMALL_STATE(60)] = 1469,
  [SMALL_STATE(61)] = 1489,
  [SMALL_STATE(62)] = 1505,
  [SMALL_STATE(63)] = 1527,
  [SMALL_STATE(64)] = 1549,
  [SMALL_STATE(65)] = 1571,
  [SMALL_STATE(66)] = 1593,
  [SMALL_STATE(67)] = 1615,
  [SMALL_STATE(68)] = 1635,
  [SMALL_STATE(69)] = 1657,
  [SMALL_STATE(70)] = 1679,
  [SMALL_STATE(71)] = 1699,
  [SMALL_STATE(72)] = 1721,
  [SMALL_STATE(73)] = 1736,
  [SMALL_STATE(74)] = 1755,
  [SMALL_STATE(75)] = 1774,
  [SMALL_STATE(76)] = 1793,
  [SMALL_STATE(77)] = 1808,
  [SMALL_STATE(78)] = 1827,
  [SMALL_STATE(79)] = 1846,
  [SMALL_STATE(80)] = 1861,
  [SMALL_STATE(81)] = 1880,
  [SMALL_STATE(82)] = 1899,
  [SMALL_STATE(83)] = 1914,
  [SMALL_STATE(84)] = 1933,
  [SMALL_STATE(85)] = 1952,
  [SMALL_STATE(86)] = 1971,
  [SMALL_STATE(87)] = 1990,
  [SMALL_STATE(88)] = 2005,
  [SMALL_STATE(89)] = 2024,
  [SMALL_STATE(90)] = 2039,
  [SMALL_STATE(91)] = 2058,
  [SMALL_STATE(92)] = 2073,
  [SMALL_STATE(93)] = 2092,
  [SMALL_STATE(94)] = 2111,
  [SMALL_STATE(95)] = 2127,
  [SMALL_STATE(96)] = 2143,
  [SMALL_STATE(97)] = 2157,
  [SMALL_STATE(98)] = 2173,
  [SMALL_STATE(99)] = 2187,
  [SMALL_STATE(100)] = 2203,
  [SMALL_STATE(101)] = 2217,
  [SMALL_STATE(102)] = 2231,
  [SMALL_STATE(103)] = 2247,
  [SMALL_STATE(104)] = 2261,
  [SMALL_STATE(105)] = 2277,
  [SMALL_STATE(106)] = 2293,
  [SMALL_STATE(107)] = 2307,
  [SMALL_STATE(108)] = 2323,
  [SMALL_STATE(109)] = 2339,
  [SMALL_STATE(110)] = 2355,
  [SMALL_STATE(111)] = 2369,
  [SMALL_STATE(112)] = 2385,
  [SMALL_STATE(113)] = 2401,
  [SMALL_STATE(114)] = 2417,
  [SMALL_STATE(115)] = 2433,
  [SMALL_STATE(116)] = 2447,
  [SMALL_STATE(117)] = 2463,
  [SMALL_STATE(118)] = 2479,
  [SMALL_STATE(119)] = 2495,
  [SMALL_STATE(120)] = 2511,
  [SMALL_STATE(121)] = 2525,
  [SMALL_STATE(122)] = 2541,
  [SMALL_STATE(123)] = 2557,
  [SMALL_STATE(124)] = 2573,
  [SMALL_STATE(125)] = 2587,
  [SMALL_STATE(126)] = 2603,
  [SMALL_STATE(127)] = 2619,
  [SMALL_STATE(128)] = 2635,
  [SMALL_STATE(129)] = 2651,
  [SMALL_STATE(130)] = 2665,
  [SMALL_STATE(131)] = 2681,
  [SMALL_STATE(132)] = 2697,
  [SMALL_STATE(133)] = 2713,
  [SMALL_STATE(134)] = 2729,
  [SMALL_STATE(135)] = 2745,
  [SMALL_STATE(136)] = 2761,
  [SMALL_STATE(137)] = 2777,
  [SMALL_STATE(138)] = 2793,
  [SMALL_STATE(139)] = 2809,
  [SMALL_STATE(140)] = 2825,
  [SMALL_STATE(141)] = 2841,
  [SMALL_STATE(142)] = 2857,
  [SMALL_STATE(143)] = 2873,
  [SMALL_STATE(144)] = 2889,
  [SMALL_STATE(145)] = 2905,
  [SMALL_STATE(146)] = 2921,
  [SMALL_STATE(147)] = 2934,
  [SMALL_STATE(148)] = 2947,
  [SMALL_STATE(149)] = 2960,
  [SMALL_STATE(150)] = 2973,
  [SMALL_STATE(151)] = 2986,
  [SMALL_STATE(152)] = 2999,
  [SMALL_STATE(153)] = 3012,
  [SMALL_STATE(154)] = 3025,
  [SMALL_STATE(155)] = 3038,
  [SMALL_STATE(156)] = 3051,
  [SMALL_STATE(157)] = 3064,
  [SMALL_STATE(158)] = 3077,
  [SMALL_STATE(159)] = 3090,
  [SMALL_STATE(160)] = 3103,
  [SMALL_STATE(161)] = 3116,
  [SMALL_STATE(162)] = 3129,
  [SMALL_STATE(163)] = 3142,
  [SMALL_STATE(164)] = 3155,
  [SMALL_STATE(165)] = 3168,
  [SMALL_STATE(166)] = 3181,
  [SMALL_STATE(167)] = 3194,
  [SMALL_STATE(168)] = 3207,
  [SMALL_STATE(169)] = 3220,
  [SMALL_STATE(170)] = 3233,
  [SMALL_STATE(171)] = 3246,
  [SMALL_STATE(172)] = 3259,
  [SMALL_STATE(173)] = 3272,
  [SMALL_STATE(174)] = 3285,
  [SMALL_STATE(175)] = 3298,
  [SMALL_STATE(176)] = 3311,
  [SMALL_STATE(177)] = 3324,
  [SMALL_STATE(178)] = 3337,
  [SMALL_STATE(179)] = 3350,
  [SMALL_STATE(180)] = 3363,
  [SMALL_STATE(181)] = 3376,
  [SMALL_STATE(182)] = 3389,
  [SMALL_STATE(183)] = 3402,
  [SMALL_STATE(184)] = 3415,
  [SMALL_STATE(185)] = 3428,
  [SMALL_STATE(186)] = 3441,
  [SMALL_STATE(187)] = 3454,
  [SMALL_STATE(188)] = 3467,
  [SMALL_STATE(189)] = 3480,
  [SMALL_STATE(190)] = 3493,
  [SMALL_STATE(191)] = 3506,
  [SMALL_STATE(192)] = 3519,
  [SMALL_STATE(193)] = 3532,
  [SMALL_STATE(194)] = 3545,
  [SMALL_STATE(195)] = 3558,
  [SMALL_STATE(196)] = 3571,
  [SMALL_STATE(197)] = 3584,
  [SMALL_STATE(198)] = 3597,
  [SMALL_STATE(199)] = 3610,
  [SMALL_STATE(200)] = 3623,
  [SMALL_STATE(201)] = 3636,
  [SMALL_STATE(202)] = 3649,
  [SMALL_STATE(203)] = 3662,
  [SMALL_STATE(204)] = 3675,
  [SMALL_STATE(205)] = 3688,
  [SMALL_STATE(206)] = 3701,
  [SMALL_STATE(207)] = 3714,
  [SMALL_STATE(208)] = 3727,
  [SMALL_STATE(209)] = 3740,
  [SMALL_STATE(210)] = 3753,
  [SMALL_STATE(211)] = 3766,
  [SMALL_STATE(212)] = 3779,
  [SMALL_STATE(213)] = 3792,
  [SMALL_STATE(214)] = 3805,
  [SMALL_STATE(215)] = 3818,
  [SMALL_STATE(216)] = 3831,
  [SMALL_STATE(217)] = 3844,
  [SMALL_STATE(218)] = 3857,
  [SMALL_STATE(219)] = 3870,
  [SMALL_STATE(220)] = 3883,
  [SMALL_STATE(221)] = 3896,
  [SMALL_STATE(222)] = 3909,
  [SMALL_STATE(223)] = 3922,
  [SMALL_STATE(224)] = 3935,
  [SMALL_STATE(225)] = 3948,
  [SMALL_STATE(226)] = 3961,
  [SMALL_STATE(227)] = 3974,
  [SMALL_STATE(228)] = 3987,
  [SMALL_STATE(229)] = 4000,
  [SMALL_STATE(230)] = 4013,
  [SMALL_STATE(231)] = 4026,
  [SMALL_STATE(232)] = 4039,
  [SMALL_STATE(233)] = 4052,
  [SMALL_STATE(234)] = 4056,
  [SMALL_STATE(235)] = 4060,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(233),
  [5] = {.count = 1, .reusable = true}, SHIFT(235),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(104),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(104),
  [21] = {.count = 1, .reusable = true}, SHIFT(85),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [27] = {.count = 1, .reusable = true}, SHIFT(213),
  [29] = {.count = 1, .reusable = true}, SHIFT(210),
  [31] = {.count = 1, .reusable = true}, SHIFT(209),
  [33] = {.count = 1, .reusable = true}, SHIFT(112),
  [35] = {.count = 1, .reusable = true}, SHIFT(203),
  [37] = {.count = 1, .reusable = true}, SHIFT(202),
  [39] = {.count = 1, .reusable = true}, SHIFT(201),
  [41] = {.count = 1, .reusable = true}, SHIFT(200),
  [43] = {.count = 1, .reusable = true}, SHIFT(199),
  [45] = {.count = 1, .reusable = true}, SHIFT(198),
  [47] = {.count = 1, .reusable = true}, SHIFT(117),
  [49] = {.count = 1, .reusable = true}, SHIFT(146),
  [51] = {.count = 1, .reusable = true}, SHIFT(163),
  [53] = {.count = 1, .reusable = true}, SHIFT(162),
  [55] = {.count = 1, .reusable = true}, SHIFT(160),
  [57] = {.count = 1, .reusable = true}, SHIFT(159),
  [59] = {.count = 1, .reusable = true}, SHIFT(156),
  [61] = {.count = 1, .reusable = true}, SHIFT(155),
  [63] = {.count = 1, .reusable = true}, SHIFT(152),
  [65] = {.count = 1, .reusable = true}, SHIFT(151),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [71] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [73] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 8),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 8),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [87] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(136),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [94] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [100] = {.count = 1, .reusable = true}, SHIFT(57),
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
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 7),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 7),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [156] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [196] = {.count = 1, .reusable = true}, SHIFT(136),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 2),
  [200] = {.count = 1, .reusable = true}, SHIFT(109),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [204] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2),
  [206] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2), SHIFT_REPEAT(109),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym__slot_identifier, 1),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 1),
  [215] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(131),
  [218] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [220] = {.count = 1, .reusable = true}, SHIFT(139),
  [222] = {.count = 1, .reusable = true}, SHIFT(55),
  [224] = {.count = 1, .reusable = true}, SHIFT(192),
  [226] = {.count = 1, .reusable = true}, SHIFT(147),
  [228] = {.count = 1, .reusable = true}, SHIFT(121),
  [230] = {.count = 1, .reusable = true}, SHIFT(110),
  [232] = {.count = 1, .reusable = true}, SHIFT(131),
  [234] = {.count = 1, .reusable = true}, SHIFT(208),
  [236] = {.count = 1, .reusable = true}, SHIFT(125),
  [238] = {.count = 1, .reusable = true}, SHIFT(212),
  [240] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(125),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [245] = {.count = 1, .reusable = true}, SHIFT(183),
  [247] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(121),
  [250] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [252] = {.count = 1, .reusable = true}, SHIFT(226),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [256] = {.count = 1, .reusable = true}, SHIFT(37),
  [258] = {.count = 1, .reusable = true}, SHIFT(230),
  [260] = {.count = 1, .reusable = true}, SHIFT(87),
  [262] = {.count = 1, .reusable = true}, SHIFT(145),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [268] = {.count = 1, .reusable = true}, SHIFT(42),
  [270] = {.count = 1, .reusable = true}, SHIFT(63),
  [272] = {.count = 1, .reusable = true}, SHIFT(225),
  [274] = {.count = 1, .reusable = true}, SHIFT(27),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [278] = {.count = 1, .reusable = true}, SHIFT(165),
  [280] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [282] = {.count = 1, .reusable = true}, SHIFT(91),
  [284] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [286] = {.count = 1, .reusable = true}, SHIFT(38),
  [288] = {.count = 1, .reusable = true}, SHIFT(157),
  [290] = {.count = 1, .reusable = true}, SHIFT(158),
  [292] = {.count = 1, .reusable = true}, SHIFT(127),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [296] = {.count = 1, .reusable = true}, SHIFT(188),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [304] = {.count = 1, .reusable = true}, SHIFT(9),
  [306] = {.count = 1, .reusable = true}, SHIFT(25),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [310] = {.count = 1, .reusable = true}, SHIFT(229),
  [312] = {.count = 1, .reusable = true}, SHIFT(103),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [322] = {.count = 1, .reusable = true}, SHIFT(221),
  [324] = {.count = 1, .reusable = true}, SHIFT(106),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [330] = {.count = 1, .reusable = true}, SHIFT(227),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [334] = {.count = 1, .reusable = true}, SHIFT(47),
  [336] = {.count = 1, .reusable = true}, SHIFT(194),
  [338] = {.count = 1, .reusable = true}, SHIFT(168),
  [340] = {.count = 1, .reusable = true}, SHIFT(43),
  [342] = {.count = 1, .reusable = true}, SHIFT(51),
  [344] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [346] = {.count = 1, .reusable = true}, SHIFT(49),
  [348] = {.count = 1, .reusable = true}, SHIFT(149),
  [350] = {.count = 1, .reusable = true}, SHIFT(88),
  [352] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [354] = {.count = 1, .reusable = true}, SHIFT(11),
  [356] = {.count = 1, .reusable = true}, SHIFT(211),
  [358] = {.count = 1, .reusable = true}, SHIFT(171),
  [360] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [362] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [366] = {.count = 1, .reusable = true}, SHIFT(28),
  [368] = {.count = 1, .reusable = true}, SHIFT(216),
  [370] = {.count = 1, .reusable = true}, SHIFT(111),
  [372] = {.count = 1, .reusable = true}, SHIFT(207),
  [374] = {.count = 1, .reusable = true}, SHIFT(62),
  [376] = {.count = 1, .reusable = true}, SHIFT(108),
  [378] = {.count = 1, .reusable = true}, SHIFT(169),
  [380] = {.count = 1, .reusable = true}, SHIFT(142),
  [382] = {.count = 1, .reusable = true}, SHIFT(26),
  [384] = {.count = 1, .reusable = true}, SHIFT(50),
  [386] = {.count = 1, .reusable = true}, SHIFT(173),
  [388] = {.count = 1, .reusable = true}, SHIFT(197),
  [390] = {.count = 1, .reusable = true}, SHIFT(113),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [396] = {.count = 1, .reusable = true}, SHIFT(181),
  [398] = {.count = 1, .reusable = true}, SHIFT(180),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [402] = {.count = 1, .reusable = true}, SHIFT(130),
  [404] = {.count = 1, .reusable = true}, SHIFT(78),
  [406] = {.count = 1, .reusable = true}, SHIFT(99),
  [408] = {.count = 1, .reusable = true}, SHIFT(29),
  [410] = {.count = 1, .reusable = true}, SHIFT(30),
  [412] = {.count = 1, .reusable = true}, SHIFT(116),
  [414] = {.count = 1, .reusable = true}, SHIFT(32),
  [416] = {.count = 1, .reusable = true}, SHIFT(31),
  [418] = {.count = 1, .reusable = true}, SHIFT(33),
  [420] = {.count = 1, .reusable = true}, SHIFT(5),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [424] = {.count = 1, .reusable = true}, SHIFT(119),
  [426] = {.count = 1, .reusable = true}, SHIFT(126),
  [428] = {.count = 1, .reusable = true}, SHIFT(65),
  [430] = {.count = 1, .reusable = true}, SHIFT(75),
  [432] = {.count = 1, .reusable = true}, SHIFT(128),
  [434] = {.count = 1, .reusable = true}, SHIFT(190),
  [436] = {.count = 1, .reusable = true}, SHIFT(94),
  [438] = {.count = 1, .reusable = true}, SHIFT(182),
  [440] = {.count = 1, .reusable = true}, SHIFT(115),
  [442] = {.count = 1, .reusable = true}, SHIFT(193),
  [444] = {.count = 1, .reusable = true}, SHIFT(214),
  [446] = {.count = 1, .reusable = true}, SHIFT(23),
  [448] = {.count = 1, .reusable = true}, SHIFT(140),
  [450] = {.count = 1, .reusable = true}, SHIFT(21),
  [452] = {.count = 1, .reusable = true}, SHIFT(20),
  [454] = {.count = 1, .reusable = true}, SHIFT(19),
  [456] = {.count = 1, .reusable = true}, SHIFT(13),
  [458] = {.count = 1, .reusable = false}, SHIFT(14),
  [460] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [462] = {.count = 1, .reusable = true}, SHIFT(205),
  [464] = {.count = 1, .reusable = true}, SHIFT(219),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [468] = {.count = 1, .reusable = true}, SHIFT(77),
  [470] = {.count = 1, .reusable = true}, SHIFT(39),
  [472] = {.count = 1, .reusable = true}, SHIFT(40),
  [474] = {.count = 1, .reusable = true}, SHIFT(161),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [478] = {.count = 1, .reusable = true}, SHIFT(24),
  [480] = {.count = 1, .reusable = true}, SHIFT(69),
  [482] = {.count = 1, .reusable = true}, SHIFT(143),
  [484] = {.count = 1, .reusable = true}, SHIFT(44),
  [486] = {.count = 1, .reusable = true}, SHIFT(218),
  [488] = {.count = 1, .reusable = true}, SHIFT(34),
  [490] = {.count = 1, .reusable = true}, SHIFT(107),
  [492] = {.count = 1, .reusable = true}, SHIFT(36),
  [494] = {.count = 1, .reusable = true}, SHIFT(138),
  [496] = {.count = 1, .reusable = true}, SHIFT(35),
  [498] = {.count = 1, .reusable = true}, SHIFT(4),
  [500] = {.count = 1, .reusable = true}, SHIFT(133),
  [502] = {.count = 1, .reusable = true}, SHIFT(132),
  [504] = {.count = 1, .reusable = true}, SHIFT(46),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [508] = {.count = 1, .reusable = true}, SHIFT(95),
  [510] = {.count = 1, .reusable = true}, SHIFT(105),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [514] = {.count = 1, .reusable = true}, SHIFT(81),
  [516] = {.count = 1, .reusable = true}, SHIFT(123),
  [518] = {.count = 1, .reusable = true}, SHIFT(7),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [522] = {.count = 1, .reusable = true}, SHIFT(122),
  [524] = {.count = 1, .reusable = true}, SHIFT(83),
  [526] = {.count = 1, .reusable = true}, SHIFT(6),
  [528] = {.count = 1, .reusable = true}, SHIFT(17),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [534] = {.count = 1, .reusable = true}, SHIFT(48),
  [536] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [538] = {.count = 1, .reusable = true}, SHIFT(45),
  [540] = {.count = 1, .reusable = true}, SHIFT(174),
  [542] = {.count = 1, .reusable = true}, SHIFT(101),
  [544] = {.count = 1, .reusable = true}, SHIFT(135),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [548] = {.count = 1, .reusable = true}, SHIFT(185),
  [550] = {.count = 1, .reusable = true}, SHIFT(100),
  [552] = {.count = 1, .reusable = true}, SHIFT(178),
  [554] = {.count = 1, .reusable = true}, SHIFT(98),
  [556] = {.count = 1, .reusable = true}, SHIFT(96),
  [558] = {.count = 1, .reusable = true}, SHIFT(234),
  [560] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
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
