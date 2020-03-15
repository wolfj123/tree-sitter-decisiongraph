#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 236
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
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
  sym__slot_identifier = 25,
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
  sym_import_node = 59,
  sym_decision_graph_name = 60,
  sym_text_sub_node = 61,
  sym_info_sub_node = 62,
  sym_terms_sub_node = 63,
  sym_term_sub_node = 64,
  sym_answers_sub_node = 65,
  sym_answer_sub_node = 66,
  sym_slot_sub_node = 67,
  sym_consider_options_sub_node = 68,
  sym_consider_option_sub_node = 69,
  sym_when_answer_sub_node = 70,
  sym_else_sub_node = 71,
  sym_node_id = 72,
  sym_node_id_value = 73,
  sym_comment = 74,
  aux_sym_decision_graph_repeat1 = 75,
  aux_sym_slot_repeat1 = 76,
  aux_sym__slot_values_repeat1 = 77,
  aux_sym_terms_sub_node_repeat1 = 78,
  aux_sym_answers_sub_node_repeat1 = 79,
  aux_sym_consider_options_sub_node_repeat1 = 80,
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
  [sym__slot_identifier] = "_slot_identifier",
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
  [sym__slot_identifier] = sym__slot_identifier,
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
  [sym__slot_identifier] = {
    .visible = false,
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
      ACCEPT_TOKEN(sym__slot_identifier);
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
  [22] = {.lex_state = 78, .external_lex_state = 2},
  [23] = {.lex_state = 78, .external_lex_state = 2},
  [24] = {.lex_state = 78, .external_lex_state = 2},
  [25] = {.lex_state = 78, .external_lex_state = 2},
  [26] = {.lex_state = 78, .external_lex_state = 2},
  [27] = {.lex_state = 78, .external_lex_state = 2},
  [28] = {.lex_state = 78, .external_lex_state = 2},
  [29] = {.lex_state = 78, .external_lex_state = 2},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 78, .external_lex_state = 2},
  [32] = {.lex_state = 78, .external_lex_state = 2},
  [33] = {.lex_state = 78, .external_lex_state = 2},
  [34] = {.lex_state = 78, .external_lex_state = 2},
  [35] = {.lex_state = 78, .external_lex_state = 2},
  [36] = {.lex_state = 78, .external_lex_state = 2},
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
  [48] = {.lex_state = 0, .external_lex_state = 2},
  [49] = {.lex_state = 6, .external_lex_state = 2},
  [50] = {.lex_state = 6, .external_lex_state = 2},
  [51] = {.lex_state = 78, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 6, .external_lex_state = 2},
  [54] = {.lex_state = 0, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 6, .external_lex_state = 2},
  [57] = {.lex_state = 78, .external_lex_state = 2},
  [58] = {.lex_state = 78, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 0, .external_lex_state = 2},
  [64] = {.lex_state = 78, .external_lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 2},
  [66] = {.lex_state = 78, .external_lex_state = 2},
  [67] = {.lex_state = 0, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 6, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 7, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 7, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 0, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 78, .external_lex_state = 2},
  [87] = {.lex_state = 0, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 78, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 5, .external_lex_state = 2},
  [93] = {.lex_state = 5, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 7, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 5, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0, .external_lex_state = 2},
  [107] = {.lex_state = 7, .external_lex_state = 2},
  [108] = {.lex_state = 5, .external_lex_state = 2},
  [109] = {.lex_state = 6, .external_lex_state = 2},
  [110] = {.lex_state = 7, .external_lex_state = 2},
  [111] = {.lex_state = 6, .external_lex_state = 2},
  [112] = {.lex_state = 5, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0, .external_lex_state = 2},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 5, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 0, .external_lex_state = 2},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 5, .external_lex_state = 2},
  [127] = {.lex_state = 6, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 5, .external_lex_state = 2},
  [131] = {.lex_state = 5, .external_lex_state = 2},
  [132] = {.lex_state = 6, .external_lex_state = 2},
  [133] = {.lex_state = 5, .external_lex_state = 2},
  [134] = {.lex_state = 5, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 78, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 7, .external_lex_state = 2},
  [142] = {.lex_state = 5, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 0, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 78, .external_lex_state = 2},
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
  [169] = {.lex_state = 0, .external_lex_state = 1},
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
  [183] = {.lex_state = 78, .external_lex_state = 2},
  [184] = {.lex_state = 78, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 6, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 0, .external_lex_state = 2},
  [193] = {.lex_state = 78, .external_lex_state = 2},
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
  [210] = {.lex_state = 6, .external_lex_state = 2},
  [211] = {.lex_state = 0, .external_lex_state = 2},
  [212] = {.lex_state = 6, .external_lex_state = 2},
  [213] = {.lex_state = 0, .external_lex_state = 2},
  [214] = {.lex_state = 0, .external_lex_state = 2},
  [215] = {.lex_state = 0, .external_lex_state = 2},
  [216] = {.lex_state = 0, .external_lex_state = 2},
  [217] = {.lex_state = 0, .external_lex_state = 2},
  [218] = {.lex_state = 0, .external_lex_state = 2},
  [219] = {.lex_state = 0, .external_lex_state = 2},
  [220] = {.lex_state = 0, .external_lex_state = 2},
  [221] = {.lex_state = 78, .external_lex_state = 2},
  [222] = {.lex_state = 0, .external_lex_state = 2},
  [223] = {.lex_state = 0, .external_lex_state = 2},
  [224] = {.lex_state = 0, .external_lex_state = 2},
  [225] = {.lex_state = 0, .external_lex_state = 2},
  [226] = {.lex_state = 0, .external_lex_state = 2},
  [227] = {.lex_state = 0, .external_lex_state = 2},
  [228] = {.lex_state = 78, .external_lex_state = 2},
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
    [sym_source_file] = STATE(224),
    [sym_decision_graph] = STATE(219),
    [sym__top_level_node] = STATE(31),
    [sym_todo_node] = STATE(37),
    [sym_ask_node] = STATE(37),
    [sym_call_node] = STATE(37),
    [sym_consider_node] = STATE(37),
    [sym_when_node] = STATE(37),
    [sym_section_node] = STATE(37),
    [sym_continue_node] = STATE(37),
    [sym_part_node] = STATE(37),
    [sym_reject_node] = STATE(37),
    [sym_set_node] = STATE(37),
    [sym_import_node] = STATE(37),
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
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(3), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(145), 1,
      sym_decision_graph,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(215), 1,
      sym_decision_graph,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(232), 1,
      sym_decision_graph,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(231), 1,
      sym_decision_graph,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(152), 1,
      sym_decision_graph,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(164), 1,
      sym_decision_graph,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(215), 1,
      sym_decision_graph,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(150), 1,
      sym_decision_graph,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(192), 1,
      sym_decision_graph,
    STATE(37), 11,
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
    STATE(31), 1,
      sym__top_level_node,
    STATE(223), 1,
      sym_decision_graph,
    STATE(37), 11,
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
      anon_sym_COMMA,
    STATE(30), 2,
      sym_comment,
      aux_sym__slot_values_repeat1,
    ACTIONS(119), 4,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [863] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(124), 5,
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
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    ACTIONS(128), 5,
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
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(132), 5,
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
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(136), 5,
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
    ACTIONS(142), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(140), 5,
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
    ACTIONS(146), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(144), 5,
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
    ACTIONS(150), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(148), 5,
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
    ACTIONS(154), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_comment,
    ACTIONS(152), 5,
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
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(156), 5,
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
    ACTIONS(162), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(160), 5,
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
    ACTIONS(166), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_comment,
    ACTIONS(164), 5,
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
    ACTIONS(170), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(168), 5,
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
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(172), 5,
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
    ACTIONS(178), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_comment,
    ACTIONS(176), 5,
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
    ACTIONS(182), 1,
      anon_sym_LBRACK,
    STATE(45), 1,
      sym_comment,
    ACTIONS(180), 5,
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
    ACTIONS(186), 1,
      anon_sym_LBRACK,
    STATE(46), 1,
      sym_comment,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1183] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(190), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_comment,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1203] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__slot_values_repeat1,
    ACTIONS(192), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1224] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      sym__slot_identifier,
    STATE(49), 1,
      sym_comment,
    STATE(79), 1,
      sym_atomic_assignment_slot,
    STATE(81), 1,
      sym_aggregate_assignment_slot,
    STATE(101), 1,
      sym_assignment_slot,
    STATE(136), 1,
      sym_slot,
  [1249] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      sym__slot_identifier,
    STATE(50), 1,
      sym_comment,
    STATE(76), 1,
      sym_assignment_slot,
    STATE(79), 1,
      sym_atomic_assignment_slot,
    STATE(81), 1,
      sym_aggregate_assignment_slot,
    STATE(136), 1,
      sym_slot,
  [1274] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_slot_repeat1,
    ACTIONS(198), 3,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [1295] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(30), 1,
      aux_sym__slot_values_repeat1,
    STATE(52), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1316] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      sym__slot_identifier,
    STATE(53), 1,
      sym_comment,
    STATE(79), 1,
      sym_atomic_assignment_slot,
    STATE(81), 1,
      sym_aggregate_assignment_slot,
    STATE(117), 1,
      sym_assignment_slot,
    STATE(136), 1,
      sym_slot,
  [1341] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(54), 1,
      sym_comment,
    ACTIONS(119), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1358] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(55), 1,
      sym_comment,
    ACTIONS(204), 5,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1375] = 8,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      sym__slot_identifier,
    STATE(56), 1,
      sym_comment,
    STATE(79), 1,
      sym_atomic_assignment_slot,
    STATE(81), 1,
      sym_aggregate_assignment_slot,
    STATE(136), 1,
      sym_slot,
    STATE(137), 1,
      sym_assignment_slot,
  [1400] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(208), 1,
      anon_sym_SLASH,
    STATE(57), 2,
      sym_comment,
      aux_sym_slot_repeat1,
    ACTIONS(206), 3,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [1419] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(200), 1,
      anon_sym_SLASH,
    STATE(51), 1,
      aux_sym_slot_repeat1,
    STATE(58), 1,
      sym_comment,
    ACTIONS(211), 3,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_RBRACE,
  [1440] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_comment,
    STATE(61), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(124), 1,
      sym_term_sub_node,
  [1462] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(124), 1,
      sym_term_sub_node,
  [1484] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(124), 1,
      sym_term_sub_node,
  [1506] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(121), 1,
      sym_answer_sub_node,
    STATE(62), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1526] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      sym_term_sub_node,
    STATE(63), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1546] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(229), 1,
      anon_sym_term,
    ACTIONS(231), 1,
      anon_sym_answers,
    STATE(64), 1,
      sym_comment,
    STATE(184), 1,
      sym_node_id,
  [1568] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_consider_option_sub_node,
    STATE(65), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1588] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(66), 1,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_PLUS_EQ,
      anon_sym_EQ,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [1604] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(67), 1,
      sym_comment,
    STATE(119), 1,
      sym_consider_option_sub_node,
  [1626] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(124), 1,
      sym_term_sub_node,
  [1648] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(69), 1,
      sym_comment,
    STATE(121), 1,
      sym_answer_sub_node,
  [1670] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      sym__slot_identifier,
    STATE(48), 1,
      sym_slot_value,
    STATE(70), 1,
      sym_comment,
    STATE(72), 1,
      sym__slot_values,
  [1692] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(71), 1,
      sym_comment,
    ACTIONS(252), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1707] = 4,
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
  [1722] = 6,
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
    STATE(176), 1,
      sym_else_sub_node,
  [1741] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(74), 1,
      sym_comment,
    ACTIONS(260), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1756] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(262), 1,
      aux_sym_decision_graph_name_token1,
    STATE(75), 1,
      sym_comment,
    STATE(195), 1,
      sym_node_id_value,
    STATE(196), 1,
      sym_decision_graph_name,
  [1775] = 4,
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
  [1790] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(77), 1,
      sym_comment,
    STATE(119), 1,
      sym_consider_option_sub_node,
  [1809] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(262), 1,
      aux_sym_decision_graph_name_token1,
    STATE(78), 1,
      sym_comment,
    STATE(147), 1,
      sym_node_id_value,
    STATE(148), 1,
      sym_decision_graph_name,
  [1828] = 4,
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
  [1843] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(80), 1,
      sym_comment,
    ACTIONS(268), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1858] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(81), 1,
      sym_comment,
    ACTIONS(266), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1873] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_comment,
    STATE(87), 1,
      aux_sym__slot_values_repeat1,
  [1892] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_comment,
    STATE(96), 1,
      sym_terms_sub_node,
    STATE(218), 1,
      sym_answers_sub_node,
  [1911] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(84), 1,
      sym_comment,
    STATE(151), 1,
      sym_else_sub_node,
  [1930] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(85), 1,
      sym_comment,
    STATE(121), 1,
      sym_answer_sub_node,
  [1949] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(276), 1,
      anon_sym_text,
    STATE(86), 1,
      sym_comment,
    STATE(193), 1,
      sym_node_id,
  [1968] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
    STATE(30), 1,
      aux_sym__slot_values_repeat1,
    STATE(87), 1,
      sym_comment,
  [1987] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      sym_comment,
    STATE(174), 1,
      sym_else_sub_node,
  [2006] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    ACTIONS(282), 1,
      anon_sym_title,
    STATE(89), 1,
      sym_comment,
    STATE(221), 1,
      sym_node_id,
  [2025] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(258), 1,
      anon_sym_LBRACE,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      sym_comment,
    STATE(226), 1,
      sym_else_sub_node,
  [2044] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_comment,
    STATE(139), 1,
      sym_terms_sub_node,
    STATE(182), 1,
      sym_answers_sub_node,
  [2063] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(286), 1,
      sym_free_text,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_comment,
  [2079] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    ACTIONS(292), 1,
      sym_free_text,
    STATE(93), 1,
      sym_comment,
  [2095] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(94), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2109] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(95), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2123] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(96), 1,
      sym_comment,
    STATE(182), 1,
      sym_answers_sub_node,
  [2139] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(97), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2153] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(302), 1,
      aux_sym_decision_graph_name_token1,
    STATE(98), 1,
      sym_comment,
    STATE(181), 1,
      sym_node_id_value,
  [2169] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(99), 1,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2183] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(100), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2197] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    STATE(101), 1,
      sym_comment,
  [2213] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(33), 1,
      anon_sym_GT,
    STATE(11), 1,
      sym_node_id,
    STATE(102), 1,
      sym_comment,
  [2229] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(312), 1,
      sym_free_text,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(103), 1,
      sym_comment,
  [2245] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(104), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2259] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(318), 1,
      anon_sym_LBRACK,
    ACTIONS(320), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(105), 1,
      sym_comment,
  [2275] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(106), 1,
      sym_comment,
    ACTIONS(322), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2289] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(302), 1,
      aux_sym_decision_graph_name_token1,
    STATE(107), 1,
      sym_comment,
    STATE(185), 1,
      sym_node_id_value,
  [2305] = 5,
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
  [2321] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(250), 1,
      sym__slot_identifier,
    STATE(80), 1,
      sym_slot_value,
    STATE(109), 1,
      sym_comment,
  [2337] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(328), 1,
      aux_sym_decision_graph_name_token1,
    STATE(110), 1,
      sym_comment,
    STATE(170), 1,
      sym_decision_graph_name,
  [2353] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(250), 1,
      sym__slot_identifier,
    STATE(54), 1,
      sym_slot_value,
    STATE(111), 1,
      sym_comment,
  [2369] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    ACTIONS(332), 1,
      sym_free_text,
    STATE(112), 1,
      sym_comment,
  [2385] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(334), 1,
      anon_sym_LBRACK,
    ACTIONS(336), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(113), 1,
      sym_comment,
  [2401] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      sym_consider_options_sub_node,
    STATE(114), 1,
      sym_comment,
  [2417] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(115), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [2431] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      sym_text_sub_node,
    STATE(116), 1,
      sym_comment,
  [2447] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_comment,
  [2463] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
      sym_when_answer_sub_node,
    STATE(118), 1,
      sym_comment,
  [2479] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(119), 1,
      sym_comment,
    ACTIONS(348), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2493] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    ACTIONS(352), 1,
      anon_sym_LT,
    STATE(120), 1,
      sym_comment,
  [2509] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(121), 1,
      sym_comment,
    ACTIONS(354), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2523] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(356), 1,
      anon_sym_COLON,
    ACTIONS(358), 1,
      sym_free_text,
    STATE(122), 1,
      sym_comment,
  [2539] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    STATE(123), 1,
      sym_comment,
    STATE(140), 1,
      sym_slot_sub_node,
  [2555] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(124), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2569] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(360), 1,
      anon_sym_LBRACE,
    STATE(114), 1,
      sym_slot_sub_node,
    STATE(125), 1,
      sym_comment,
  [2585] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(366), 1,
      sym_free_text,
    STATE(126), 1,
      sym_comment,
  [2601] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      sym__slot_identifier,
    STATE(127), 1,
      sym_comment,
    STATE(162), 1,
      sym_slot,
  [2617] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    STATE(90), 1,
      sym_when_answer_sub_node,
    STATE(128), 1,
      sym_comment,
  [2633] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    STATE(91), 1,
      sym_text_sub_node,
    STATE(129), 1,
      sym_comment,
  [2649] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    ACTIONS(370), 1,
      sym_free_text,
    STATE(130), 1,
      sym_comment,
  [2665] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    ACTIONS(374), 1,
      sym_free_text,
    STATE(131), 1,
      sym_comment,
  [2681] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(250), 1,
      sym__slot_identifier,
    STATE(82), 1,
      sym_slot_value,
    STATE(132), 1,
      sym_comment,
  [2697] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(376), 1,
      sym_free_text,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      sym_comment,
  [2713] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(380), 1,
      sym_free_text,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
    STATE(134), 1,
      sym_comment,
  [2729] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(384), 1,
      anon_sym_LBRACK,
    ACTIONS(386), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(135), 1,
      sym_comment,
  [2745] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(388), 1,
      anon_sym_PLUS_EQ,
    ACTIONS(390), 1,
      anon_sym_EQ,
    STATE(136), 1,
      sym_comment,
  [2761] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(310), 1,
      anon_sym_SEMI,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym_comment,
  [2777] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(350), 1,
      anon_sym_RBRACK,
    ACTIONS(394), 1,
      anon_sym_GT,
    STATE(138), 1,
      sym_comment,
  [2793] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(298), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym_comment,
    STATE(172), 1,
      sym_answers_sub_node,
  [2809] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_consider_options_sub_node,
    STATE(140), 1,
      sym_comment,
  [2825] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(302), 1,
      aux_sym_decision_graph_name_token1,
    STATE(141), 1,
      sym_comment,
    STATE(173), 1,
      sym_node_id_value,
  [2841] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(396), 1,
      sym_free_text,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      sym_comment,
  [2857] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(400), 1,
      anon_sym_COLON,
    STATE(143), 1,
      sym_comment,
  [2870] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(402), 1,
      anon_sym_COLON,
    STATE(144), 1,
      sym_comment,
  [2883] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym_comment,
  [2896] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(406), 1,
      anon_sym_slot,
    STATE(146), 1,
      sym_comment,
  [2909] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      sym_comment,
  [2922] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(410), 1,
      anon_sym_GT,
    STATE(148), 1,
      sym_comment,
  [2935] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_comment,
  [2948] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(412), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(150), 1,
      sym_comment,
  [2961] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_comment,
  [2974] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(416), 1,
      anon_sym_RBRACK,
    STATE(152), 1,
      sym_comment,
  [2987] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(418), 1,
      anon_sym_COLON,
    STATE(153), 1,
      sym_comment,
  [3000] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(420), 1,
      anon_sym_COLON,
    STATE(154), 1,
      sym_comment,
  [3013] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(398), 1,
      anon_sym_RBRACE,
    STATE(155), 1,
      sym_comment,
  [3026] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    STATE(156), 1,
      sym_comment,
  [3039] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(424), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_comment,
  [3052] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(426), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_comment,
  [3065] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(428), 1,
      anon_sym_COLON,
    STATE(159), 1,
      sym_comment,
  [3078] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(430), 1,
      anon_sym_COLON,
    STATE(160), 1,
      sym_comment,
  [3091] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(432), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_comment,
  [3104] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(162), 1,
      sym_comment,
  [3117] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(436), 1,
      anon_sym_COLON,
    STATE(163), 1,
      sym_comment,
  [3130] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(438), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      sym_comment,
  [3143] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(440), 1,
      anon_sym_COLON,
    STATE(165), 1,
      sym_comment,
  [3156] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(166), 1,
      sym_comment,
  [3169] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(442), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_comment,
  [3182] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(444), 1,
      anon_sym_COLON,
    STATE(168), 1,
      sym_comment,
  [3195] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(446), 1,
      sym_file_path,
    STATE(169), 1,
      sym_comment,
  [3208] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(448), 1,
      anon_sym_COLON,
    STATE(170), 1,
      sym_comment,
  [3221] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(394), 1,
      anon_sym_COLON,
    STATE(171), 1,
      sym_comment,
  [3234] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(450), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_comment,
  [3247] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      sym_comment,
  [3260] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_comment,
  [3273] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(456), 1,
      anon_sym_COLON,
    STATE(175), 1,
      sym_comment,
  [3286] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      sym_comment,
  [3299] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_comment,
  [3312] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    STATE(178), 1,
      sym_comment,
  [3325] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(462), 1,
      anon_sym_COLON,
    STATE(179), 1,
      sym_comment,
  [3338] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(464), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_comment,
  [3351] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      sym_comment,
  [3364] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      sym_comment,
  [3377] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(231), 1,
      anon_sym_answers,
    STATE(183), 1,
      sym_comment,
  [3390] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(470), 1,
      anon_sym_term,
    STATE(184), 1,
      sym_comment,
  [3403] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(472), 1,
      anon_sym_LT,
    STATE(185), 1,
      sym_comment,
  [3416] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(474), 1,
      anon_sym_COLON,
    STATE(186), 1,
      sym_comment,
  [3429] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(476), 1,
      anon_sym_LBRACE,
    STATE(187), 1,
      sym_comment,
  [3442] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(478), 1,
      sym__slot_identifier,
    STATE(188), 1,
      sym_comment,
  [3455] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(480), 1,
      anon_sym_COLON,
    STATE(189), 1,
      sym_comment,
  [3468] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      sym_comment,
  [3481] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
    STATE(191), 1,
      sym_comment,
  [3494] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      sym_comment,
  [3507] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(486), 1,
      anon_sym_text,
    STATE(193), 1,
      sym_comment,
  [3520] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_comment,
  [3533] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(490), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      sym_comment,
  [3546] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(492), 1,
      anon_sym_GT,
    STATE(196), 1,
      sym_comment,
  [3559] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(197), 1,
      sym_comment,
  [3572] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(496), 1,
      anon_sym_COLON,
    STATE(198), 1,
      sym_comment,
  [3585] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(498), 1,
      anon_sym_COLON,
    STATE(199), 1,
      sym_comment,
  [3598] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      sym_comment,
  [3611] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(502), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_comment,
  [3624] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(202), 1,
      sym_comment,
  [3637] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(506), 1,
      anon_sym_COLON,
    STATE(203), 1,
      sym_comment,
  [3650] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(508), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_comment,
  [3663] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(510), 1,
      anon_sym_COLON,
    STATE(205), 1,
      sym_comment,
  [3676] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(512), 1,
      anon_sym_COLON,
    STATE(206), 1,
      sym_comment,
  [3689] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(514), 1,
      anon_sym_COLON,
    STATE(207), 1,
      sym_comment,
  [3702] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    STATE(208), 1,
      sym_comment,
  [3715] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(518), 1,
      anon_sym_COLON,
    STATE(209), 1,
      sym_comment,
  [3728] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(520), 1,
      sym__slot_identifier,
    STATE(210), 1,
      sym_comment,
  [3741] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(522), 1,
      anon_sym_COLON,
    STATE(211), 1,
      sym_comment,
  [3754] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(524), 1,
      sym__slot_identifier,
    STATE(212), 1,
      sym_comment,
  [3767] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(526), 1,
      anon_sym_COLON,
    STATE(213), 1,
      sym_comment,
  [3780] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(214), 1,
      sym_comment,
  [3793] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    STATE(215), 1,
      sym_comment,
  [3806] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(532), 1,
      anon_sym_COLON,
    STATE(216), 1,
      sym_comment,
  [3819] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(534), 1,
      anon_sym_COLON,
    STATE(217), 1,
      sym_comment,
  [3832] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(536), 1,
      anon_sym_RBRACK,
    STATE(218), 1,
      sym_comment,
  [3845] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(538), 1,
      ts_builtin_sym_end,
    STATE(219), 1,
      sym_comment,
  [3858] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_comment,
  [3871] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(540), 1,
      anon_sym_title,
    STATE(221), 1,
      sym_comment,
  [3884] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(542), 1,
      anon_sym_COLON,
    STATE(222), 1,
      sym_comment,
  [3897] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      sym_comment,
  [3910] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(546), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_comment,
  [3923] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
    STATE(225), 1,
      sym_comment,
  [3936] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(226), 1,
      sym_comment,
  [3949] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(550), 1,
      anon_sym_COLON,
    STATE(227), 1,
      sym_comment,
  [3962] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(552), 1,
      anon_sym_else,
    STATE(228), 1,
      sym_comment,
  [3975] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      sym_comment,
  [3988] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(556), 1,
      anon_sym_options,
    STATE(230), 1,
      sym_comment,
  [4001] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_comment,
  [4014] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
    STATE(232), 1,
      sym_comment,
  [4027] = 1,
    ACTIONS(562), 1,
      aux_sym_comment_token1,
  [4031] = 1,
    ACTIONS(564), 1,
      ts_builtin_sym_end,
  [4035] = 1,
    ACTIONS(566), 1,
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
  [SMALL_STATE(48)] = 1203,
  [SMALL_STATE(49)] = 1224,
  [SMALL_STATE(50)] = 1249,
  [SMALL_STATE(51)] = 1274,
  [SMALL_STATE(52)] = 1295,
  [SMALL_STATE(53)] = 1316,
  [SMALL_STATE(54)] = 1341,
  [SMALL_STATE(55)] = 1358,
  [SMALL_STATE(56)] = 1375,
  [SMALL_STATE(57)] = 1400,
  [SMALL_STATE(58)] = 1419,
  [SMALL_STATE(59)] = 1440,
  [SMALL_STATE(60)] = 1462,
  [SMALL_STATE(61)] = 1484,
  [SMALL_STATE(62)] = 1506,
  [SMALL_STATE(63)] = 1526,
  [SMALL_STATE(64)] = 1546,
  [SMALL_STATE(65)] = 1568,
  [SMALL_STATE(66)] = 1588,
  [SMALL_STATE(67)] = 1604,
  [SMALL_STATE(68)] = 1626,
  [SMALL_STATE(69)] = 1648,
  [SMALL_STATE(70)] = 1670,
  [SMALL_STATE(71)] = 1692,
  [SMALL_STATE(72)] = 1707,
  [SMALL_STATE(73)] = 1722,
  [SMALL_STATE(74)] = 1741,
  [SMALL_STATE(75)] = 1756,
  [SMALL_STATE(76)] = 1775,
  [SMALL_STATE(77)] = 1790,
  [SMALL_STATE(78)] = 1809,
  [SMALL_STATE(79)] = 1828,
  [SMALL_STATE(80)] = 1843,
  [SMALL_STATE(81)] = 1858,
  [SMALL_STATE(82)] = 1873,
  [SMALL_STATE(83)] = 1892,
  [SMALL_STATE(84)] = 1911,
  [SMALL_STATE(85)] = 1930,
  [SMALL_STATE(86)] = 1949,
  [SMALL_STATE(87)] = 1968,
  [SMALL_STATE(88)] = 1987,
  [SMALL_STATE(89)] = 2006,
  [SMALL_STATE(90)] = 2025,
  [SMALL_STATE(91)] = 2044,
  [SMALL_STATE(92)] = 2063,
  [SMALL_STATE(93)] = 2079,
  [SMALL_STATE(94)] = 2095,
  [SMALL_STATE(95)] = 2109,
  [SMALL_STATE(96)] = 2123,
  [SMALL_STATE(97)] = 2139,
  [SMALL_STATE(98)] = 2153,
  [SMALL_STATE(99)] = 2169,
  [SMALL_STATE(100)] = 2183,
  [SMALL_STATE(101)] = 2197,
  [SMALL_STATE(102)] = 2213,
  [SMALL_STATE(103)] = 2229,
  [SMALL_STATE(104)] = 2245,
  [SMALL_STATE(105)] = 2259,
  [SMALL_STATE(106)] = 2275,
  [SMALL_STATE(107)] = 2289,
  [SMALL_STATE(108)] = 2305,
  [SMALL_STATE(109)] = 2321,
  [SMALL_STATE(110)] = 2337,
  [SMALL_STATE(111)] = 2353,
  [SMALL_STATE(112)] = 2369,
  [SMALL_STATE(113)] = 2385,
  [SMALL_STATE(114)] = 2401,
  [SMALL_STATE(115)] = 2417,
  [SMALL_STATE(116)] = 2431,
  [SMALL_STATE(117)] = 2447,
  [SMALL_STATE(118)] = 2463,
  [SMALL_STATE(119)] = 2479,
  [SMALL_STATE(120)] = 2493,
  [SMALL_STATE(121)] = 2509,
  [SMALL_STATE(122)] = 2523,
  [SMALL_STATE(123)] = 2539,
  [SMALL_STATE(124)] = 2555,
  [SMALL_STATE(125)] = 2569,
  [SMALL_STATE(126)] = 2585,
  [SMALL_STATE(127)] = 2601,
  [SMALL_STATE(128)] = 2617,
  [SMALL_STATE(129)] = 2633,
  [SMALL_STATE(130)] = 2649,
  [SMALL_STATE(131)] = 2665,
  [SMALL_STATE(132)] = 2681,
  [SMALL_STATE(133)] = 2697,
  [SMALL_STATE(134)] = 2713,
  [SMALL_STATE(135)] = 2729,
  [SMALL_STATE(136)] = 2745,
  [SMALL_STATE(137)] = 2761,
  [SMALL_STATE(138)] = 2777,
  [SMALL_STATE(139)] = 2793,
  [SMALL_STATE(140)] = 2809,
  [SMALL_STATE(141)] = 2825,
  [SMALL_STATE(142)] = 2841,
  [SMALL_STATE(143)] = 2857,
  [SMALL_STATE(144)] = 2870,
  [SMALL_STATE(145)] = 2883,
  [SMALL_STATE(146)] = 2896,
  [SMALL_STATE(147)] = 2909,
  [SMALL_STATE(148)] = 2922,
  [SMALL_STATE(149)] = 2935,
  [SMALL_STATE(150)] = 2948,
  [SMALL_STATE(151)] = 2961,
  [SMALL_STATE(152)] = 2974,
  [SMALL_STATE(153)] = 2987,
  [SMALL_STATE(154)] = 3000,
  [SMALL_STATE(155)] = 3013,
  [SMALL_STATE(156)] = 3026,
  [SMALL_STATE(157)] = 3039,
  [SMALL_STATE(158)] = 3052,
  [SMALL_STATE(159)] = 3065,
  [SMALL_STATE(160)] = 3078,
  [SMALL_STATE(161)] = 3091,
  [SMALL_STATE(162)] = 3104,
  [SMALL_STATE(163)] = 3117,
  [SMALL_STATE(164)] = 3130,
  [SMALL_STATE(165)] = 3143,
  [SMALL_STATE(166)] = 3156,
  [SMALL_STATE(167)] = 3169,
  [SMALL_STATE(168)] = 3182,
  [SMALL_STATE(169)] = 3195,
  [SMALL_STATE(170)] = 3208,
  [SMALL_STATE(171)] = 3221,
  [SMALL_STATE(172)] = 3234,
  [SMALL_STATE(173)] = 3247,
  [SMALL_STATE(174)] = 3260,
  [SMALL_STATE(175)] = 3273,
  [SMALL_STATE(176)] = 3286,
  [SMALL_STATE(177)] = 3299,
  [SMALL_STATE(178)] = 3312,
  [SMALL_STATE(179)] = 3325,
  [SMALL_STATE(180)] = 3338,
  [SMALL_STATE(181)] = 3351,
  [SMALL_STATE(182)] = 3364,
  [SMALL_STATE(183)] = 3377,
  [SMALL_STATE(184)] = 3390,
  [SMALL_STATE(185)] = 3403,
  [SMALL_STATE(186)] = 3416,
  [SMALL_STATE(187)] = 3429,
  [SMALL_STATE(188)] = 3442,
  [SMALL_STATE(189)] = 3455,
  [SMALL_STATE(190)] = 3468,
  [SMALL_STATE(191)] = 3481,
  [SMALL_STATE(192)] = 3494,
  [SMALL_STATE(193)] = 3507,
  [SMALL_STATE(194)] = 3520,
  [SMALL_STATE(195)] = 3533,
  [SMALL_STATE(196)] = 3546,
  [SMALL_STATE(197)] = 3559,
  [SMALL_STATE(198)] = 3572,
  [SMALL_STATE(199)] = 3585,
  [SMALL_STATE(200)] = 3598,
  [SMALL_STATE(201)] = 3611,
  [SMALL_STATE(202)] = 3624,
  [SMALL_STATE(203)] = 3637,
  [SMALL_STATE(204)] = 3650,
  [SMALL_STATE(205)] = 3663,
  [SMALL_STATE(206)] = 3676,
  [SMALL_STATE(207)] = 3689,
  [SMALL_STATE(208)] = 3702,
  [SMALL_STATE(209)] = 3715,
  [SMALL_STATE(210)] = 3728,
  [SMALL_STATE(211)] = 3741,
  [SMALL_STATE(212)] = 3754,
  [SMALL_STATE(213)] = 3767,
  [SMALL_STATE(214)] = 3780,
  [SMALL_STATE(215)] = 3793,
  [SMALL_STATE(216)] = 3806,
  [SMALL_STATE(217)] = 3819,
  [SMALL_STATE(218)] = 3832,
  [SMALL_STATE(219)] = 3845,
  [SMALL_STATE(220)] = 3858,
  [SMALL_STATE(221)] = 3871,
  [SMALL_STATE(222)] = 3884,
  [SMALL_STATE(223)] = 3897,
  [SMALL_STATE(224)] = 3910,
  [SMALL_STATE(225)] = 3923,
  [SMALL_STATE(226)] = 3936,
  [SMALL_STATE(227)] = 3949,
  [SMALL_STATE(228)] = 3962,
  [SMALL_STATE(229)] = 3975,
  [SMALL_STATE(230)] = 3988,
  [SMALL_STATE(231)] = 4001,
  [SMALL_STATE(232)] = 4014,
  [SMALL_STATE(233)] = 4027,
  [SMALL_STATE(234)] = 4031,
  [SMALL_STATE(235)] = 4035,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(233),
  [5] = {.count = 1, .reusable = true}, SHIFT(235),
  [7] = {.count = 1, .reusable = false}, SHIFT(15),
  [9] = {.count = 1, .reusable = true}, SHIFT(102),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(15),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(102),
  [21] = {.count = 1, .reusable = true}, SHIFT(89),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [27] = {.count = 1, .reusable = true}, SHIFT(217),
  [29] = {.count = 1, .reusable = true}, SHIFT(216),
  [31] = {.count = 1, .reusable = true}, SHIFT(213),
  [33] = {.count = 1, .reusable = true}, SHIFT(107),
  [35] = {.count = 1, .reusable = true}, SHIFT(209),
  [37] = {.count = 1, .reusable = true}, SHIFT(206),
  [39] = {.count = 1, .reusable = true}, SHIFT(205),
  [41] = {.count = 1, .reusable = true}, SHIFT(200),
  [43] = {.count = 1, .reusable = true}, SHIFT(199),
  [45] = {.count = 1, .reusable = true}, SHIFT(198),
  [47] = {.count = 1, .reusable = true}, SHIFT(110),
  [49] = {.count = 1, .reusable = true}, SHIFT(165),
  [51] = {.count = 1, .reusable = true}, SHIFT(143),
  [53] = {.count = 1, .reusable = true}, SHIFT(163),
  [55] = {.count = 1, .reusable = true}, SHIFT(161),
  [57] = {.count = 1, .reusable = true}, SHIFT(160),
  [59] = {.count = 1, .reusable = true}, SHIFT(158),
  [61] = {.count = 1, .reusable = true}, SHIFT(157),
  [63] = {.count = 1, .reusable = true}, SHIFT(154),
  [65] = {.count = 1, .reusable = true}, SHIFT(153),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 8),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 8),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2),
  [121] = {.count = 2, .reusable = true}, REDUCE(aux_sym__slot_values_repeat1, 2), SHIFT_REPEAT(111),
  [124] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [126] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym__top_level_node, 1),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym__top_level_node, 1),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [156] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 7),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 7),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 4),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 4),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 4),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 4),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 6),
  [182] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 6),
  [184] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 1),
  [194] = {.count = 1, .reusable = true}, SHIFT(111),
  [196] = {.count = 1, .reusable = true}, SHIFT(58),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 2),
  [200] = {.count = 1, .reusable = true}, SHIFT(212),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 2),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_slot_value, 1),
  [206] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2),
  [208] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2), SHIFT_REPEAT(212),
  [211] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 1),
  [213] = {.count = 1, .reusable = true}, SHIFT(126),
  [215] = {.count = 1, .reusable = true}, SHIFT(204),
  [217] = {.count = 1, .reusable = true}, SHIFT(225),
  [219] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(122),
  [222] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [224] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(126),
  [227] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [229] = {.count = 1, .reusable = true}, SHIFT(189),
  [231] = {.count = 1, .reusable = true}, SHIFT(186),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(188),
  [236] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(188),
  [240] = {.count = 1, .reusable = true}, SHIFT(106),
  [242] = {.count = 1, .reusable = true}, SHIFT(180),
  [244] = {.count = 1, .reusable = true}, SHIFT(122),
  [246] = {.count = 1, .reusable = true}, SHIFT(208),
  [248] = {.count = 1, .reusable = true}, SHIFT(132),
  [250] = {.count = 1, .reusable = true}, SHIFT(55),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 4),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 4),
  [256] = {.count = 1, .reusable = true}, SHIFT(36),
  [258] = {.count = 1, .reusable = true}, SHIFT(228),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym__slot_values, 3),
  [262] = {.count = 1, .reusable = true}, SHIFT(138),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [270] = {.count = 1, .reusable = true}, SHIFT(74),
  [272] = {.count = 1, .reusable = true}, SHIFT(64),
  [274] = {.count = 1, .reusable = true}, SHIFT(38),
  [276] = {.count = 1, .reusable = true}, SHIFT(167),
  [278] = {.count = 1, .reusable = true}, SHIFT(71),
  [280] = {.count = 1, .reusable = true}, SHIFT(39),
  [282] = {.count = 1, .reusable = true}, SHIFT(222),
  [284] = {.count = 1, .reusable = true}, SHIFT(22),
  [286] = {.count = 1, .reusable = true}, SHIFT(155),
  [288] = {.count = 1, .reusable = true}, SHIFT(156),
  [290] = {.count = 1, .reusable = true}, SHIFT(28),
  [292] = {.count = 1, .reusable = true}, SHIFT(191),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [298] = {.count = 1, .reusable = true}, SHIFT(183),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [302] = {.count = 1, .reusable = true}, SHIFT(120),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 4),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 4),
  [308] = {.count = 1, .reusable = true}, SHIFT(9),
  [310] = {.count = 1, .reusable = true}, SHIFT(50),
  [312] = {.count = 1, .reusable = true}, SHIFT(229),
  [314] = {.count = 1, .reusable = true}, SHIFT(100),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [324] = {.count = 1, .reusable = true}, SHIFT(220),
  [326] = {.count = 1, .reusable = true}, SHIFT(104),
  [328] = {.count = 1, .reusable = true}, SHIFT(171),
  [330] = {.count = 1, .reusable = true}, SHIFT(44),
  [332] = {.count = 1, .reusable = true}, SHIFT(149),
  [334] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 5),
  [336] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 5),
  [338] = {.count = 1, .reusable = true}, SHIFT(230),
  [340] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [342] = {.count = 1, .reusable = true}, SHIFT(86),
  [344] = {.count = 1, .reusable = true}, SHIFT(45),
  [346] = {.count = 1, .reusable = true}, SHIFT(49),
  [348] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [354] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [356] = {.count = 1, .reusable = true}, SHIFT(13),
  [358] = {.count = 1, .reusable = true}, SHIFT(207),
  [360] = {.count = 1, .reusable = true}, SHIFT(146),
  [362] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [364] = {.count = 1, .reusable = true}, SHIFT(108),
  [366] = {.count = 1, .reusable = true}, SHIFT(203),
  [368] = {.count = 1, .reusable = true}, SHIFT(43),
  [370] = {.count = 1, .reusable = true}, SHIFT(190),
  [372] = {.count = 1, .reusable = true}, SHIFT(26),
  [374] = {.count = 1, .reusable = true}, SHIFT(197),
  [376] = {.count = 1, .reusable = true}, SHIFT(194),
  [378] = {.count = 1, .reusable = true}, SHIFT(113),
  [380] = {.count = 1, .reusable = true}, SHIFT(166),
  [382] = {.count = 1, .reusable = true}, SHIFT(135),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 4),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 4),
  [388] = {.count = 1, .reusable = true}, SHIFT(210),
  [390] = {.count = 1, .reusable = true}, SHIFT(109),
  [392] = {.count = 1, .reusable = true}, SHIFT(21),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [396] = {.count = 1, .reusable = true}, SHIFT(178),
  [398] = {.count = 1, .reusable = true}, SHIFT(177),
  [400] = {.count = 1, .reusable = true}, SHIFT(129),
  [402] = {.count = 1, .reusable = true}, SHIFT(142),
  [404] = {.count = 1, .reusable = true}, SHIFT(19),
  [406] = {.count = 1, .reusable = true}, SHIFT(227),
  [408] = {.count = 1, .reusable = true}, SHIFT(20),
  [410] = {.count = 1, .reusable = true}, SHIFT(98),
  [412] = {.count = 1, .reusable = true}, SHIFT(27),
  [414] = {.count = 1, .reusable = true}, SHIFT(34),
  [416] = {.count = 1, .reusable = true}, SHIFT(33),
  [418] = {.count = 1, .reusable = true}, SHIFT(53),
  [420] = {.count = 1, .reusable = true}, SHIFT(93),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 4),
  [424] = {.count = 1, .reusable = true}, SHIFT(29),
  [426] = {.count = 1, .reusable = true}, SHIFT(5),
  [428] = {.count = 1, .reusable = true}, SHIFT(59),
  [430] = {.count = 1, .reusable = true}, SHIFT(118),
  [432] = {.count = 1, .reusable = true}, SHIFT(125),
  [434] = {.count = 1, .reusable = true}, SHIFT(187),
  [436] = {.count = 1, .reusable = true}, SHIFT(75),
  [438] = {.count = 1, .reusable = true}, SHIFT(115),
  [440] = {.count = 1, .reusable = true}, SHIFT(131),
  [442] = {.count = 1, .reusable = true}, SHIFT(92),
  [444] = {.count = 1, .reusable = true}, SHIFT(133),
  [446] = {.count = 1, .reusable = true}, SHIFT(202),
  [448] = {.count = 1, .reusable = true}, SHIFT(169),
  [450] = {.count = 1, .reusable = true}, SHIFT(25),
  [452] = {.count = 1, .reusable = true}, SHIFT(24),
  [454] = {.count = 1, .reusable = true}, SHIFT(23),
  [456] = {.count = 1, .reusable = true}, SHIFT(12),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 5),
  [460] = {.count = 1, .reusable = true}, SHIFT(201),
  [462] = {.count = 1, .reusable = true}, SHIFT(77),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 4),
  [466] = {.count = 1, .reusable = true}, SHIFT(41),
  [468] = {.count = 1, .reusable = true}, SHIFT(42),
  [470] = {.count = 1, .reusable = true}, SHIFT(159),
  [472] = {.count = 1, .reusable = false}, SHIFT(14),
  [474] = {.count = 1, .reusable = true}, SHIFT(85),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [478] = {.count = 1, .reusable = true}, SHIFT(211),
  [480] = {.count = 1, .reusable = true}, SHIFT(68),
  [482] = {.count = 1, .reusable = true}, SHIFT(17),
  [484] = {.count = 1, .reusable = true}, SHIFT(214),
  [486] = {.count = 1, .reusable = true}, SHIFT(144),
  [488] = {.count = 1, .reusable = true}, SHIFT(105),
  [490] = {.count = 1, .reusable = true}, SHIFT(18),
  [492] = {.count = 1, .reusable = true}, SHIFT(141),
  [494] = {.count = 1, .reusable = true}, SHIFT(46),
  [496] = {.count = 1, .reusable = true}, SHIFT(56),
  [498] = {.count = 1, .reusable = true}, SHIFT(130),
  [500] = {.count = 1, .reusable = true}, SHIFT(35),
  [502] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [504] = {.count = 1, .reusable = true}, SHIFT(47),
  [506] = {.count = 1, .reusable = true}, SHIFT(103),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [510] = {.count = 1, .reusable = true}, SHIFT(4),
  [512] = {.count = 1, .reusable = true}, SHIFT(128),
  [514] = {.count = 1, .reusable = true}, SHIFT(7),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [518] = {.count = 1, .reusable = true}, SHIFT(123),
  [520] = {.count = 1, .reusable = true}, SHIFT(70),
  [522] = {.count = 1, .reusable = true}, SHIFT(6),
  [524] = {.count = 1, .reusable = true}, SHIFT(66),
  [526] = {.count = 1, .reusable = true}, SHIFT(78),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [530] = {.count = 1, .reusable = true}, SHIFT(40),
  [532] = {.count = 1, .reusable = true}, SHIFT(116),
  [534] = {.count = 1, .reusable = true}, SHIFT(112),
  [536] = {.count = 1, .reusable = true}, SHIFT(32),
  [538] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [540] = {.count = 1, .reusable = true}, SHIFT(168),
  [542] = {.count = 1, .reusable = true}, SHIFT(134),
  [544] = {.count = 1, .reusable = true}, SHIFT(99),
  [546] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [550] = {.count = 1, .reusable = true}, SHIFT(127),
  [552] = {.count = 1, .reusable = true}, SHIFT(175),
  [554] = {.count = 1, .reusable = true}, SHIFT(97),
  [556] = {.count = 1, .reusable = true}, SHIFT(179),
  [558] = {.count = 1, .reusable = true}, SHIFT(95),
  [560] = {.count = 1, .reusable = true}, SHIFT(94),
  [562] = {.count = 1, .reusable = true}, SHIFT(234),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [566] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
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
