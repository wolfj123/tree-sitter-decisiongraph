#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 201
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 78
#define ALIAS_COUNT 0
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_LBRACK = 1,
  anon_sym_ask = 2,
  anon_sym_COLON = 3,
  anon_sym_RBRACK = 4,
  anon_sym_call = 5,
  anon_sym_GT = 6,
  anon_sym_consider = 7,
  anon_sym_when = 8,
  anon_sym_section = 9,
  anon_sym_continue = 10,
  anon_sym_LBRACK_DASH_DASH = 11,
  anon_sym_DASH_DASH_RBRACK = 12,
  anon_sym_end = 13,
  anon_sym_reject = 14,
  anon_sym_set = 15,
  anon_sym_todo = 16,
  anon_sym_SEMI = 17,
  anon_sym_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_SLASH = 20,
  sym_slot_identifier = 21,
  anon_sym_POUNDimport = 22,
  aux_sym_decision_graph_name_token1 = 23,
  anon_sym_LBRACE = 24,
  anon_sym_text = 25,
  anon_sym_RBRACE = 26,
  anon_sym_title = 27,
  anon_sym_term = 28,
  anon_sym_answers = 29,
  anon_sym_slot = 30,
  anon_sym_options = 31,
  anon_sym_else = 32,
  anon_sym_LT = 33,
  sym_mulit_line_free_text = 34,
  anon_sym_LT_DASH_DASH = 35,
  aux_sym_comment_token1 = 36,
  sym__comment_block = 37,
  sym_file_path = 38,
  sym_source_file = 39,
  sym_decision_graph = 40,
  sym_top_level_node = 41,
  sym_ask_node = 42,
  sym_call_node = 43,
  sym_consider_node = 44,
  sym_when_node = 45,
  sym_section_node = 46,
  sym_continue_node = 47,
  sym_part_node = 48,
  sym_reject_node = 49,
  sym_set_node = 50,
  sym_todo_node = 51,
  sym_assignment_slot = 52,
  sym_atomic_assignment_slot = 53,
  sym_aggregate_assignment_slot = 54,
  sym_slot = 55,
  sym_import_node = 56,
  sym_decision_graph_name = 57,
  sym_text_sub_node = 58,
  sym_info_sub_node = 59,
  sym_terms_sub_node = 60,
  sym_term_sub_node = 61,
  sym_answers_sub_node = 62,
  sym_answer_sub_node = 63,
  sym_slot_sub_node = 64,
  sym_consider_options_sub_node = 65,
  sym_consider_option_sub_node = 66,
  sym_when_answer_sub_node = 67,
  sym_else_sub_node = 68,
  sym_node_id = 69,
  sym_node_id_value = 70,
  sym_comment = 71,
  aux_sym_decision_graph_repeat1 = 72,
  aux_sym_aggregate_assignment_slot_repeat1 = 73,
  aux_sym_slot_repeat1 = 74,
  aux_sym_terms_sub_node_repeat1 = 75,
  aux_sym_answers_sub_node_repeat1 = 76,
  aux_sym_consider_options_sub_node_repeat1 = 77,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACK] = "[",
  [anon_sym_ask] = "ask",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACK] = "]",
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
  [anon_sym_todo] = "todo",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_SLASH] = "/",
  [sym_slot_identifier] = "slot_identifier",
  [anon_sym_POUNDimport] = "#import",
  [aux_sym_decision_graph_name_token1] = "decision_graph_name_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_text] = "text",
  [anon_sym_RBRACE] = "}",
  [anon_sym_title] = "title",
  [anon_sym_term] = "term",
  [anon_sym_answers] = "answers",
  [anon_sym_slot] = "slot",
  [anon_sym_options] = "options",
  [anon_sym_else] = "else",
  [anon_sym_LT] = "<",
  [sym_mulit_line_free_text] = "mulit_line_free_text",
  [anon_sym_LT_DASH_DASH] = "<--",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__comment_block] = "_comment_block",
  [sym_file_path] = "file_path",
  [sym_source_file] = "source_file",
  [sym_decision_graph] = "decision_graph",
  [sym_top_level_node] = "top_level_node",
  [sym_ask_node] = "ask_node",
  [sym_call_node] = "call_node",
  [sym_consider_node] = "consider_node",
  [sym_when_node] = "when_node",
  [sym_section_node] = "section_node",
  [sym_continue_node] = "continue_node",
  [sym_part_node] = "part_node",
  [sym_reject_node] = "reject_node",
  [sym_set_node] = "set_node",
  [sym_todo_node] = "todo_node",
  [sym_assignment_slot] = "assignment_slot",
  [sym_atomic_assignment_slot] = "atomic_assignment_slot",
  [sym_aggregate_assignment_slot] = "aggregate_assignment_slot",
  [sym_slot] = "slot",
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
  [aux_sym_aggregate_assignment_slot_repeat1] = "aggregate_assignment_slot_repeat1",
  [aux_sym_slot_repeat1] = "slot_repeat1",
  [aux_sym_terms_sub_node_repeat1] = "terms_sub_node_repeat1",
  [aux_sym_answers_sub_node_repeat1] = "answers_sub_node_repeat1",
  [aux_sym_consider_options_sub_node_repeat1] = "consider_options_sub_node_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_ask] = anon_sym_ask,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [anon_sym_todo] = anon_sym_todo,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_slot_identifier] = sym_slot_identifier,
  [anon_sym_POUNDimport] = anon_sym_POUNDimport,
  [aux_sym_decision_graph_name_token1] = aux_sym_decision_graph_name_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_term] = anon_sym_term,
  [anon_sym_answers] = anon_sym_answers,
  [anon_sym_slot] = anon_sym_slot,
  [anon_sym_options] = anon_sym_options,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_LT] = anon_sym_LT,
  [sym_mulit_line_free_text] = sym_mulit_line_free_text,
  [anon_sym_LT_DASH_DASH] = anon_sym_LT_DASH_DASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__comment_block] = sym__comment_block,
  [sym_file_path] = sym_file_path,
  [sym_source_file] = sym_source_file,
  [sym_decision_graph] = sym_decision_graph,
  [sym_top_level_node] = sym_top_level_node,
  [sym_ask_node] = sym_ask_node,
  [sym_call_node] = sym_call_node,
  [sym_consider_node] = sym_consider_node,
  [sym_when_node] = sym_when_node,
  [sym_section_node] = sym_section_node,
  [sym_continue_node] = sym_continue_node,
  [sym_part_node] = sym_part_node,
  [sym_reject_node] = sym_reject_node,
  [sym_set_node] = sym_set_node,
  [sym_todo_node] = sym_todo_node,
  [sym_assignment_slot] = sym_assignment_slot,
  [sym_atomic_assignment_slot] = sym_atomic_assignment_slot,
  [sym_aggregate_assignment_slot] = sym_aggregate_assignment_slot,
  [sym_slot] = sym_slot,
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
  [aux_sym_aggregate_assignment_slot_repeat1] = aux_sym_aggregate_assignment_slot_repeat1,
  [aux_sym_slot_repeat1] = aux_sym_slot_repeat1,
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
  [anon_sym_ask] = {
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
  [anon_sym_todo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_slot_identifier] = {
    .visible = true,
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
  [sym_mulit_line_free_text] = {
    .visible = true,
    .named = true,
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
  [sym_top_level_node] = {
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
  [sym_todo_node] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregate_assignment_slot] = {
    .visible = true,
    .named = true,
  },
  [sym_slot] = {
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
  [aux_sym_aggregate_assignment_slot_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_slot_repeat1] = {
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
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '+') ADVANCE(114);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(85);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(124);
      if (lookahead == 's') ADVANCE(125);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(177);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(192);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == ';') ADVANCE(108);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < '0' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '\\') ADVANCE(71);
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
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < '0' || '9' < lookahead) &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead)) ADVANCE(112);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(191);
      END_STATE();
    case 12:
      if (lookahead == ']') ADVANCE(100);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(70);
      if (lookahead == 't') ADVANCE(104);
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
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(69);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(97);
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
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(45);
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
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(63);
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
      if (lookahead == 'm') ADVANCE(180);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(65);
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
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(182);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(186);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 72:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 73:
      if (lookahead == 'w') ADVANCE(25);
      END_STATE();
    case 74:
      if (lookahead == '{') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 75:
      if (lookahead == '}') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == '#') ADVANCE(29);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '<') ADVANCE(1);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == ']') ADVANCE(87);
      if (lookahead == 'a') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(54);
      if (lookahead == 'r') ADVANCE(18);
      if (lookahead == 's') ADVANCE(19);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'w') ADVANCE(28);
      if (lookahead == '}') ADVANCE(177);
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
      ACCEPT_TOKEN(anon_sym_ask);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ask);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(112);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_call);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_consider);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_consider);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_when);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_section);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_section);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACK_DASH_DASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_RBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_reject);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_reject);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_set);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_todo);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_todo);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_slot_identifier);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != ',' &&
          lookahead != '.' &&
          (lookahead < ';' || '>' < lookahead) &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '}' < lookahead) &&
          lookahead != 160 &&
          lookahead != 8203 &&
          lookahead != 8288 &&
          lookahead != 65279) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_POUNDimport);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '=') ADVANCE(110);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'O') ADVANCE(173);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'O') ADVANCE(115);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(147);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'c') ADVANCE(170);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(152);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'd') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'h') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(149);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'j') ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'k') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(141);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(151);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'o') ADVANCE(150);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'p') ADVANCE(165);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(167);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(135);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'u') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == 'w') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_decision_graph_name_token1);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_term);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_term);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_answers);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_answers);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_slot);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_slot);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_options);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_options);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_mulit_line_free_text);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT_DASH_DASH);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
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
  [13] = {.lex_state = 80, .external_lex_state = 2},
  [14] = {.lex_state = 80, .external_lex_state = 2},
  [15] = {.lex_state = 80, .external_lex_state = 2},
  [16] = {.lex_state = 80, .external_lex_state = 2},
  [17] = {.lex_state = 80, .external_lex_state = 2},
  [18] = {.lex_state = 80, .external_lex_state = 2},
  [19] = {.lex_state = 80, .external_lex_state = 2},
  [20] = {.lex_state = 80, .external_lex_state = 2},
  [21] = {.lex_state = 80, .external_lex_state = 2},
  [22] = {.lex_state = 80, .external_lex_state = 2},
  [23] = {.lex_state = 80, .external_lex_state = 2},
  [24] = {.lex_state = 80, .external_lex_state = 2},
  [25] = {.lex_state = 80, .external_lex_state = 2},
  [26] = {.lex_state = 80, .external_lex_state = 2},
  [27] = {.lex_state = 80, .external_lex_state = 2},
  [28] = {.lex_state = 80, .external_lex_state = 2},
  [29] = {.lex_state = 80, .external_lex_state = 2},
  [30] = {.lex_state = 80, .external_lex_state = 2},
  [31] = {.lex_state = 80, .external_lex_state = 2},
  [32] = {.lex_state = 80, .external_lex_state = 2},
  [33] = {.lex_state = 80, .external_lex_state = 2},
  [34] = {.lex_state = 80, .external_lex_state = 2},
  [35] = {.lex_state = 80, .external_lex_state = 2},
  [36] = {.lex_state = 80, .external_lex_state = 2},
  [37] = {.lex_state = 80, .external_lex_state = 2},
  [38] = {.lex_state = 80, .external_lex_state = 2},
  [39] = {.lex_state = 80, .external_lex_state = 2},
  [40] = {.lex_state = 80, .external_lex_state = 2},
  [41] = {.lex_state = 80, .external_lex_state = 2},
  [42] = {.lex_state = 80, .external_lex_state = 2},
  [43] = {.lex_state = 80, .external_lex_state = 2},
  [44] = {.lex_state = 6, .external_lex_state = 2},
  [45] = {.lex_state = 6, .external_lex_state = 2},
  [46] = {.lex_state = 80, .external_lex_state = 2},
  [47] = {.lex_state = 80, .external_lex_state = 2},
  [48] = {.lex_state = 80, .external_lex_state = 2},
  [49] = {.lex_state = 5, .external_lex_state = 2},
  [50] = {.lex_state = 80, .external_lex_state = 2},
  [51] = {.lex_state = 0, .external_lex_state = 2},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 5, .external_lex_state = 2},
  [54] = {.lex_state = 5, .external_lex_state = 2},
  [55] = {.lex_state = 0, .external_lex_state = 2},
  [56] = {.lex_state = 0, .external_lex_state = 2},
  [57] = {.lex_state = 0, .external_lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 2},
  [60] = {.lex_state = 0, .external_lex_state = 2},
  [61] = {.lex_state = 0, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 7, .external_lex_state = 2},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 80, .external_lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 2},
  [67] = {.lex_state = 7, .external_lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 0, .external_lex_state = 2},
  [71] = {.lex_state = 5, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 6, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 0, .external_lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 2},
  [79] = {.lex_state = 0, .external_lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 2},
  [84] = {.lex_state = 7, .external_lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 2},
  [86] = {.lex_state = 0, .external_lex_state = 2},
  [87] = {.lex_state = 7, .external_lex_state = 2},
  [88] = {.lex_state = 0, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 80, .external_lex_state = 2},
  [93] = {.lex_state = 7, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 7, .external_lex_state = 2},
  [104] = {.lex_state = 0, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 80, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 80, .external_lex_state = 2},
  [114] = {.lex_state = 80, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 6, .external_lex_state = 2},
  [121] = {.lex_state = 80, .external_lex_state = 2},
  [122] = {.lex_state = 0, .external_lex_state = 2},
  [123] = {.lex_state = 0, .external_lex_state = 2},
  [124] = {.lex_state = 6, .external_lex_state = 2},
  [125] = {.lex_state = 6, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0, .external_lex_state = 2},
  [128] = {.lex_state = 0, .external_lex_state = 2},
  [129] = {.lex_state = 0, .external_lex_state = 2},
  [130] = {.lex_state = 0, .external_lex_state = 2},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 0, .external_lex_state = 2},
  [133] = {.lex_state = 0, .external_lex_state = 2},
  [134] = {.lex_state = 0, .external_lex_state = 2},
  [135] = {.lex_state = 0, .external_lex_state = 2},
  [136] = {.lex_state = 0, .external_lex_state = 2},
  [137] = {.lex_state = 0, .external_lex_state = 2},
  [138] = {.lex_state = 0, .external_lex_state = 2},
  [139] = {.lex_state = 0, .external_lex_state = 2},
  [140] = {.lex_state = 0, .external_lex_state = 2},
  [141] = {.lex_state = 80, .external_lex_state = 2},
  [142] = {.lex_state = 0, .external_lex_state = 2},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 80, .external_lex_state = 2},
  [145] = {.lex_state = 0, .external_lex_state = 2},
  [146] = {.lex_state = 0, .external_lex_state = 2},
  [147] = {.lex_state = 0, .external_lex_state = 2},
  [148] = {.lex_state = 0, .external_lex_state = 2},
  [149] = {.lex_state = 0, .external_lex_state = 2},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 0, .external_lex_state = 2},
  [152] = {.lex_state = 80, .external_lex_state = 2},
  [153] = {.lex_state = 80, .external_lex_state = 2},
  [154] = {.lex_state = 0, .external_lex_state = 2},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 80, .external_lex_state = 2},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 0, .external_lex_state = 2},
  [159] = {.lex_state = 80, .external_lex_state = 2},
  [160] = {.lex_state = 80, .external_lex_state = 2},
  [161] = {.lex_state = 0, .external_lex_state = 2},
  [162] = {.lex_state = 0, .external_lex_state = 2},
  [163] = {.lex_state = 0, .external_lex_state = 2},
  [164] = {.lex_state = 6, .external_lex_state = 2},
  [165] = {.lex_state = 80, .external_lex_state = 2},
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
  [179] = {.lex_state = 80, .external_lex_state = 2},
  [180] = {.lex_state = 0, .external_lex_state = 2},
  [181] = {.lex_state = 80, .external_lex_state = 2},
  [182] = {.lex_state = 0, .external_lex_state = 2},
  [183] = {.lex_state = 0, .external_lex_state = 2},
  [184] = {.lex_state = 80, .external_lex_state = 2},
  [185] = {.lex_state = 0, .external_lex_state = 2},
  [186] = {.lex_state = 0, .external_lex_state = 2},
  [187] = {.lex_state = 0, .external_lex_state = 2},
  [188] = {.lex_state = 0, .external_lex_state = 2},
  [189] = {.lex_state = 0, .external_lex_state = 2},
  [190] = {.lex_state = 0, .external_lex_state = 2},
  [191] = {.lex_state = 0, .external_lex_state = 2},
  [192] = {.lex_state = 80, .external_lex_state = 2},
  [193] = {.lex_state = 0, .external_lex_state = 2},
  [194] = {.lex_state = 0, .external_lex_state = 2},
  [195] = {.lex_state = 80, .external_lex_state = 2},
  [196] = {.lex_state = 0, .external_lex_state = 2},
  [197] = {.lex_state = 0, .external_lex_state = 1},
  [198] = {.lex_state = 193},
  [199] = {-1},
  [200] = {-1},
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
    [anon_sym_ask] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_consider] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_section] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_LBRACK_DASH_DASH] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_reject] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_todo] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_POUNDimport] = ACTIONS(1),
    [aux_sym_decision_graph_name_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_term] = ACTIONS(1),
    [anon_sym_answers] = ACTIONS(1),
    [anon_sym_slot] = ACTIONS(1),
    [anon_sym_options] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_mulit_line_free_text] = ACTIONS(1),
    [anon_sym_LT_DASH_DASH] = ACTIONS(3),
    [sym__comment_block] = ACTIONS(5),
    [sym_file_path] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(189),
    [sym_decision_graph] = STATE(186),
    [sym_top_level_node] = STATE(37),
    [sym_ask_node] = STATE(40),
    [sym_call_node] = STATE(40),
    [sym_consider_node] = STATE(40),
    [sym_when_node] = STATE(40),
    [sym_section_node] = STATE(40),
    [sym_continue_node] = STATE(40),
    [sym_part_node] = STATE(40),
    [sym_reject_node] = STATE(40),
    [sym_set_node] = STATE(40),
    [sym_todo_node] = STATE(40),
    [sym_import_node] = STATE(40),
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
    STATE(37), 1,
      sym_top_level_node,
    ACTIONS(11), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(37), 1,
      sym_top_level_node,
    STATE(3), 2,
      sym_comment,
      aux_sym_decision_graph_repeat1,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(37), 1,
      sym_top_level_node,
    STATE(151), 1,
      sym_decision_graph,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(9), 1,
      sym_info_sub_node,
    STATE(37), 1,
      sym_top_level_node,
    STATE(137), 1,
      sym_decision_graph,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(37), 1,
      sym_top_level_node,
    STATE(170), 1,
      sym_decision_graph,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(37), 1,
      sym_top_level_node,
    STATE(196), 1,
      sym_decision_graph,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(37), 1,
      sym_top_level_node,
    STATE(194), 1,
      sym_decision_graph,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(37), 1,
      sym_top_level_node,
    STATE(151), 1,
      sym_decision_graph,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(37), 1,
      sym_top_level_node,
    STATE(134), 1,
      sym_decision_graph,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(37), 1,
      sym_top_level_node,
    STATE(147), 1,
      sym_decision_graph,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
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
    STATE(37), 1,
      sym_top_level_node,
    STATE(121), 1,
      sym_decision_graph,
    STATE(40), 11,
      sym_ask_node,
      sym_call_node,
      sym_consider_node,
      sym_when_node,
      sym_section_node,
      sym_continue_node,
      sym_part_node,
      sym_reject_node,
      sym_set_node,
      sym_todo_node,
      sym_import_node,
  [434] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    STATE(13), 1,
      sym_comment,
    ACTIONS(25), 13,
      anon_sym_ask,
      anon_sym_call,
      anon_sym_consider,
      anon_sym_when,
      anon_sym_section,
      anon_sym_continue,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_reject,
      anon_sym_set,
      anon_sym_todo,
      anon_sym_text,
      anon_sym_title,
      anon_sym_term,
  [462] = 15,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(27), 1,
      anon_sym_ask,
    ACTIONS(29), 1,
      anon_sym_call,
    ACTIONS(31), 1,
      anon_sym_GT,
    ACTIONS(33), 1,
      anon_sym_consider,
    ACTIONS(35), 1,
      anon_sym_when,
    ACTIONS(37), 1,
      anon_sym_section,
    ACTIONS(39), 1,
      anon_sym_continue,
    ACTIONS(41), 1,
      anon_sym_reject,
    ACTIONS(43), 1,
      anon_sym_set,
    ACTIONS(45), 1,
      anon_sym_todo,
    ACTIONS(47), 1,
      anon_sym_POUNDimport,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      sym_node_id,
  [508] = 12,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(49), 1,
      anon_sym_ask,
    ACTIONS(51), 1,
      anon_sym_call,
    ACTIONS(53), 1,
      anon_sym_consider,
    ACTIONS(55), 1,
      anon_sym_when,
    ACTIONS(57), 1,
      anon_sym_section,
    ACTIONS(59), 1,
      anon_sym_continue,
    ACTIONS(61), 1,
      anon_sym_reject,
    ACTIONS(63), 1,
      anon_sym_set,
    ACTIONS(65), 1,
      anon_sym_todo,
    STATE(15), 1,
      sym_comment,
  [545] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_comment,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [565] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [585] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [605] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [625] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [645] = 5,
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
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [665] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(93), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_comment,
    ACTIONS(91), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [685] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_comment,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [705] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym_comment,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [725] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_comment,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [745] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(109), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_comment,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [765] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_comment,
    ACTIONS(111), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [785] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    STATE(28), 1,
      sym_comment,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [805] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_comment,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [825] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym_comment,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [845] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    STATE(31), 1,
      sym_comment,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [865] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    STATE(32), 1,
      sym_comment,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [885] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_comment,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [905] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [925] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(145), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym_comment,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [945] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(149), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      sym_comment,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [965] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(153), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_comment,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [985] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_comment,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1005] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(161), 1,
      anon_sym_LBRACK,
    STATE(39), 1,
      sym_comment,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1025] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(165), 1,
      anon_sym_LBRACK,
    STATE(40), 1,
      sym_comment,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1045] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_comment,
    ACTIONS(167), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1065] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    STATE(42), 1,
      sym_comment,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1085] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_comment,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_LBRACK_DASH_DASH,
      anon_sym_DASH_DASH_RBRACK,
      anon_sym_RBRACE,
  [1105] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(179), 1,
      sym_slot_identifier,
    STATE(44), 1,
      sym_comment,
    STATE(90), 1,
      sym_assignment_slot,
    STATE(92), 1,
      sym_slot,
    STATE(91), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [1128] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(179), 1,
      sym_slot_identifier,
    STATE(45), 1,
      sym_comment,
    STATE(92), 1,
      sym_slot,
    STATE(97), 1,
      sym_assignment_slot,
    STATE(91), 2,
      sym_atomic_assignment_slot,
      sym_aggregate_assignment_slot,
  [1151] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      sym_comment,
    STATE(47), 1,
      aux_sym_slot_repeat1,
    ACTIONS(181), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RBRACE,
  [1172] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(187), 1,
      anon_sym_SLASH,
    STATE(47), 2,
      sym_comment,
      aux_sym_slot_repeat1,
    ACTIONS(185), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RBRACE,
  [1191] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(183), 1,
      anon_sym_SLASH,
    STATE(46), 1,
      aux_sym_slot_repeat1,
    STATE(48), 1,
      sym_comment,
    ACTIONS(190), 3,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_RBRACE,
  [1212] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(194), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      sym_slot_identifier,
    STATE(49), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_aggregate_assignment_slot_repeat1,
  [1234] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(50), 1,
      sym_comment,
    ACTIONS(185), 4,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_SLASH,
      anon_sym_RBRACE,
  [1250] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_term_sub_node,
    STATE(51), 2,
      sym_comment,
      aux_sym_terms_sub_node_repeat1,
  [1270] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(51), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(52), 1,
      sym_comment,
    STATE(83), 1,
      sym_term_sub_node,
  [1292] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(196), 1,
      sym_slot_identifier,
    ACTIONS(207), 1,
      anon_sym_COLON,
    ACTIONS(209), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_comment,
    STATE(54), 1,
      aux_sym_aggregate_assignment_slot_repeat1,
  [1314] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(211), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_SEMI,
    ACTIONS(215), 1,
      sym_slot_identifier,
    STATE(54), 2,
      sym_comment,
      aux_sym_aggregate_assignment_slot_repeat1,
  [1334] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_RBRACE,
    STATE(55), 1,
      sym_comment,
    STATE(59), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(88), 1,
      sym_consider_option_sub_node,
  [1356] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      aux_sym_terms_sub_node_repeat1,
    STATE(56), 1,
      sym_comment,
    STATE(83), 1,
      sym_term_sub_node,
  [1378] = 7,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_comment,
    STATE(58), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(89), 1,
      sym_answer_sub_node,
  [1400] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      sym_answer_sub_node,
    STATE(58), 2,
      sym_comment,
      aux_sym_answers_sub_node_repeat1,
  [1420] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_consider_option_sub_node,
    STATE(59), 2,
      sym_comment,
      aux_sym_consider_options_sub_node_repeat1,
  [1440] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_comment,
    STATE(133), 1,
      sym_else_sub_node,
  [1459] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      aux_sym_consider_options_sub_node_repeat1,
    STATE(61), 1,
      sym_comment,
    STATE(88), 1,
      sym_consider_option_sub_node,
  [1478] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      sym_comment,
    STATE(155), 1,
      sym_else_sub_node,
  [1497] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(244), 1,
      aux_sym_decision_graph_name_token1,
    STATE(63), 1,
      sym_comment,
    STATE(109), 1,
      sym_node_id_value,
    STATE(116), 1,
      sym_decision_graph_name,
  [1516] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_RBRACK,
    STATE(64), 1,
      sym_comment,
    STATE(119), 1,
      sym_else_sub_node,
  [1535] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(31), 1,
      anon_sym_GT,
    ACTIONS(248), 1,
      anon_sym_answers,
    STATE(65), 1,
      sym_comment,
    STATE(113), 1,
      sym_node_id,
  [1554] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym_comment,
    STATE(157), 1,
      sym_else_sub_node,
  [1573] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(244), 1,
      aux_sym_decision_graph_name_token1,
    STATE(67), 1,
      sym_comment,
    STATE(145), 1,
      sym_node_id_value,
    STATE(146), 1,
      sym_decision_graph_name,
  [1592] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      aux_sym_answers_sub_node_repeat1,
    STATE(68), 1,
      sym_comment,
    STATE(89), 1,
      sym_answer_sub_node,
  [1611] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_comment,
    STATE(105), 1,
      sym_terms_sub_node,
    STATE(115), 1,
      sym_answers_sub_node,
  [1630] = 6,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(252), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_comment,
    STATE(85), 1,
      sym_terms_sub_node,
    STATE(174), 1,
      sym_answers_sub_node,
  [1649] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_COLON,
      sym_slot_identifier,
  [1666] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(31), 1,
      anon_sym_GT,
    STATE(72), 1,
      sym_comment,
    STATE(181), 1,
      sym_node_id,
  [1682] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(179), 1,
      sym_slot_identifier,
    STATE(73), 1,
      sym_comment,
    STATE(142), 1,
      sym_slot,
  [1698] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(74), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1712] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(75), 1,
      sym_comment,
    ACTIONS(260), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1726] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(76), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1740] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(31), 1,
      anon_sym_GT,
    STATE(12), 1,
      sym_node_id,
    STATE(77), 1,
      sym_comment,
  [1756] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_text_sub_node,
    STATE(78), 1,
      sym_comment,
  [1772] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    STATE(79), 1,
      sym_comment,
    STATE(101), 1,
      sym_slot_sub_node,
  [1788] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_when_answer_sub_node,
    STATE(80), 1,
      sym_comment,
  [1804] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(270), 1,
      anon_sym_LBRACK,
    ACTIONS(272), 1,
      anon_sym_LBRACK_DASH_DASH,
    STATE(81), 1,
      sym_comment,
  [1820] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(82), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1834] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(83), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1848] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(278), 1,
      aux_sym_decision_graph_name_token1,
    STATE(84), 1,
      sym_comment,
    STATE(150), 1,
      sym_node_id_value,
  [1864] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_comment,
    STATE(115), 1,
      sym_answers_sub_node,
  [1880] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(86), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [1894] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(278), 1,
      aux_sym_decision_graph_name_token1,
    STATE(87), 1,
      sym_comment,
    STATE(117), 1,
      sym_node_id_value,
  [1910] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(88), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1924] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(89), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1938] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(288), 1,
      anon_sym_COLON,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(90), 1,
      sym_comment,
  [1954] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(91), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_COLON,
      anon_sym_SEMI,
  [1968] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(294), 1,
      anon_sym_EQ,
    ACTIONS(296), 1,
      anon_sym_PLUS_EQ,
    STATE(92), 1,
      sym_comment,
  [1984] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(298), 1,
      aux_sym_decision_graph_name_token1,
    STATE(93), 1,
      sym_comment,
    STATE(138), 1,
      sym_decision_graph_name,
  [2000] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_text_sub_node,
    STATE(94), 1,
      sym_comment,
  [2016] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    ACTIONS(302), 1,
      anon_sym_LT,
    STATE(95), 1,
      sym_comment,
  [2032] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(96), 1,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2046] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    STATE(97), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_COLON,
      anon_sym_SEMI,
  [2060] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
    STATE(98), 1,
      sym_comment,
    STATE(102), 1,
      sym_slot_sub_node,
  [2076] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_when_answer_sub_node,
    STATE(99), 1,
      sym_comment,
  [2092] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(31), 1,
      anon_sym_GT,
    STATE(100), 1,
      sym_comment,
    STATE(156), 1,
      sym_node_id,
  [2108] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_consider_options_sub_node,
    STATE(101), 1,
      sym_comment,
  [2124] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(308), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_consider_options_sub_node,
    STATE(102), 1,
      sym_comment,
  [2140] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(278), 1,
      aux_sym_decision_graph_name_token1,
    STATE(103), 1,
      sym_comment,
    STATE(154), 1,
      sym_node_id_value,
  [2156] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    ACTIONS(310), 1,
      anon_sym_GT,
    STATE(104), 1,
      sym_comment,
  [2172] = 5,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(280), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_comment,
    STATE(107), 1,
      sym_answers_sub_node,
  [2188] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(312), 1,
      sym_mulit_line_free_text,
    STATE(106), 1,
      sym_comment,
  [2201] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym_comment,
  [2214] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      sym_comment,
  [2227] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(318), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      sym_comment,
  [2240] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(320), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym_comment,
  [2253] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(322), 1,
      anon_sym_COLON,
    STATE(111), 1,
      sym_comment,
  [2266] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(324), 1,
      anon_sym_COLON,
    STATE(112), 1,
      sym_comment,
  [2279] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(326), 1,
      anon_sym_term,
    STATE(113), 1,
      sym_comment,
  [2292] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(248), 1,
      anon_sym_answers,
    STATE(114), 1,
      sym_comment,
  [2305] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      sym_comment,
  [2318] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(330), 1,
      anon_sym_GT,
    STATE(116), 1,
      sym_comment,
  [2331] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(332), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_comment,
  [2344] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(334), 1,
      anon_sym_COLON,
    STATE(118), 1,
      sym_comment,
  [2357] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      sym_comment,
  [2370] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(336), 1,
      sym_slot_identifier,
    STATE(120), 1,
      sym_comment,
  [2383] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(338), 1,
      anon_sym_DASH_DASH_RBRACK,
    STATE(121), 1,
      sym_comment,
  [2396] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(340), 1,
      anon_sym_COLON,
    STATE(122), 1,
      sym_comment,
  [2409] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(342), 1,
      anon_sym_COLON,
    STATE(123), 1,
      sym_comment,
  [2422] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(344), 1,
      sym_slot_identifier,
    STATE(124), 1,
      sym_comment,
  [2435] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(346), 1,
      sym_slot_identifier,
    STATE(125), 1,
      sym_comment,
  [2448] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(348), 1,
      anon_sym_COLON,
    STATE(126), 1,
      sym_comment,
  [2461] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(350), 1,
      anon_sym_COLON,
    STATE(127), 1,
      sym_comment,
  [2474] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(352), 1,
      anon_sym_COLON,
    STATE(128), 1,
      sym_comment,
  [2487] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(354), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      sym_comment,
  [2500] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(356), 1,
      anon_sym_COLON,
    STATE(130), 1,
      sym_comment,
  [2513] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(358), 1,
      anon_sym_COLON,
    STATE(131), 1,
      sym_comment,
  [2526] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(360), 1,
      anon_sym_COLON,
    STATE(132), 1,
      sym_comment,
  [2539] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      sym_comment,
  [2552] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(364), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      sym_comment,
  [2565] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(366), 1,
      anon_sym_COLON,
    STATE(135), 1,
      sym_comment,
  [2578] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(368), 1,
      anon_sym_COLON,
    STATE(136), 1,
      sym_comment,
  [2591] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym_comment,
  [2604] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(372), 1,
      anon_sym_COLON,
    STATE(138), 1,
      sym_comment,
  [2617] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(374), 1,
      anon_sym_COLON,
    STATE(139), 1,
      sym_comment,
  [2630] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(310), 1,
      anon_sym_COLON,
    STATE(140), 1,
      sym_comment,
  [2643] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(376), 1,
      sym_mulit_line_free_text,
    STATE(141), 1,
      sym_comment,
  [2656] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      sym_comment,
  [2669] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym_comment,
  [2682] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(382), 1,
      sym_mulit_line_free_text,
    STATE(144), 1,
      sym_comment,
  [2695] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      sym_comment,
  [2708] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(386), 1,
      anon_sym_GT,
    STATE(146), 1,
      sym_comment,
  [2721] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(147), 1,
      sym_comment,
  [2734] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(390), 1,
      anon_sym_RBRACK,
    STATE(148), 1,
      sym_comment,
  [2747] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(392), 1,
      anon_sym_RBRACK,
    STATE(149), 1,
      sym_comment,
  [2760] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(394), 1,
      anon_sym_LT,
    STATE(150), 1,
      sym_comment,
  [2773] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(396), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      sym_comment,
  [2786] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(398), 1,
      sym_mulit_line_free_text,
    STATE(152), 1,
      sym_comment,
  [2799] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(400), 1,
      anon_sym_slot,
    STATE(153), 1,
      sym_comment,
  [2812] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_comment,
  [2825] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      sym_comment,
  [2838] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(406), 1,
      anon_sym_title,
    STATE(156), 1,
      sym_comment,
  [2851] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(238), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_comment,
  [2864] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(408), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      sym_comment,
  [2877] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(410), 1,
      sym_mulit_line_free_text,
    STATE(159), 1,
      sym_comment,
  [2890] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(412), 1,
      anon_sym_else,
    STATE(160), 1,
      sym_comment,
  [2903] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(414), 1,
      anon_sym_COLON,
    STATE(161), 1,
      sym_comment,
  [2916] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(416), 1,
      anon_sym_COLON,
    STATE(162), 1,
      sym_comment,
  [2929] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_comment,
  [2942] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(420), 1,
      sym_slot_identifier,
    STATE(164), 1,
      sym_comment,
  [2955] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(422), 1,
      anon_sym_options,
    STATE(165), 1,
      sym_comment,
  [2968] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(424), 1,
      anon_sym_COLON,
    STATE(166), 1,
      sym_comment,
  [2981] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(426), 1,
      anon_sym_COLON,
    STATE(167), 1,
      sym_comment,
  [2994] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_comment,
  [3007] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(430), 1,
      anon_sym_COLON,
    STATE(169), 1,
      sym_comment,
  [3020] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(170), 1,
      sym_comment,
  [3033] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(171), 1,
      sym_comment,
  [3046] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(436), 1,
      anon_sym_COLON,
    STATE(172), 1,
      sym_comment,
  [3059] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(438), 1,
      anon_sym_COLON,
    STATE(173), 1,
      sym_comment,
  [3072] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      sym_comment,
  [3085] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(442), 1,
      anon_sym_LBRACE,
    STATE(175), 1,
      sym_comment,
  [3098] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(444), 1,
      anon_sym_COLON,
    STATE(176), 1,
      sym_comment,
  [3111] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(446), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      sym_comment,
  [3124] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(448), 1,
      anon_sym_COLON,
    STATE(178), 1,
      sym_comment,
  [3137] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(450), 1,
      sym_mulit_line_free_text,
    STATE(179), 1,
      sym_comment,
  [3150] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_comment,
  [3163] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(454), 1,
      anon_sym_text,
    STATE(181), 1,
      sym_comment,
  [3176] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(456), 1,
      anon_sym_COLON,
    STATE(182), 1,
      sym_comment,
  [3189] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(458), 1,
      anon_sym_COLON,
    STATE(183), 1,
      sym_comment,
  [3202] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(460), 1,
      sym_mulit_line_free_text,
    STATE(184), 1,
      sym_comment,
  [3215] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      sym_comment,
  [3228] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(464), 1,
      ts_builtin_sym_end,
    STATE(186), 1,
      sym_comment,
  [3241] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym_comment,
  [3254] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(468), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      sym_comment,
  [3267] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(470), 1,
      ts_builtin_sym_end,
    STATE(189), 1,
      sym_comment,
  [3280] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(472), 1,
      anon_sym_COLON,
    STATE(190), 1,
      sym_comment,
  [3293] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    STATE(191), 1,
      sym_comment,
  [3306] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(476), 1,
      sym_mulit_line_free_text,
    STATE(192), 1,
      sym_comment,
  [3319] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_comment,
  [3332] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_comment,
  [3345] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(482), 1,
      sym_mulit_line_free_text,
    STATE(195), 1,
      sym_comment,
  [3358] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    STATE(196), 1,
      sym_comment,
  [3371] = 4,
    ACTIONS(3), 1,
      anon_sym_LT_DASH_DASH,
    ACTIONS(5), 1,
      sym__comment_block,
    ACTIONS(486), 1,
      sym_file_path,
    STATE(197), 1,
      sym_comment,
  [3384] = 1,
    ACTIONS(488), 1,
      aux_sym_comment_token1,
  [3388] = 1,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
  [3392] = 1,
    ACTIONS(492), 1,
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
  [SMALL_STATE(14)] = 462,
  [SMALL_STATE(15)] = 508,
  [SMALL_STATE(16)] = 545,
  [SMALL_STATE(17)] = 565,
  [SMALL_STATE(18)] = 585,
  [SMALL_STATE(19)] = 605,
  [SMALL_STATE(20)] = 625,
  [SMALL_STATE(21)] = 645,
  [SMALL_STATE(22)] = 665,
  [SMALL_STATE(23)] = 685,
  [SMALL_STATE(24)] = 705,
  [SMALL_STATE(25)] = 725,
  [SMALL_STATE(26)] = 745,
  [SMALL_STATE(27)] = 765,
  [SMALL_STATE(28)] = 785,
  [SMALL_STATE(29)] = 805,
  [SMALL_STATE(30)] = 825,
  [SMALL_STATE(31)] = 845,
  [SMALL_STATE(32)] = 865,
  [SMALL_STATE(33)] = 885,
  [SMALL_STATE(34)] = 905,
  [SMALL_STATE(35)] = 925,
  [SMALL_STATE(36)] = 945,
  [SMALL_STATE(37)] = 965,
  [SMALL_STATE(38)] = 985,
  [SMALL_STATE(39)] = 1005,
  [SMALL_STATE(40)] = 1025,
  [SMALL_STATE(41)] = 1045,
  [SMALL_STATE(42)] = 1065,
  [SMALL_STATE(43)] = 1085,
  [SMALL_STATE(44)] = 1105,
  [SMALL_STATE(45)] = 1128,
  [SMALL_STATE(46)] = 1151,
  [SMALL_STATE(47)] = 1172,
  [SMALL_STATE(48)] = 1191,
  [SMALL_STATE(49)] = 1212,
  [SMALL_STATE(50)] = 1234,
  [SMALL_STATE(51)] = 1250,
  [SMALL_STATE(52)] = 1270,
  [SMALL_STATE(53)] = 1292,
  [SMALL_STATE(54)] = 1314,
  [SMALL_STATE(55)] = 1334,
  [SMALL_STATE(56)] = 1356,
  [SMALL_STATE(57)] = 1378,
  [SMALL_STATE(58)] = 1400,
  [SMALL_STATE(59)] = 1420,
  [SMALL_STATE(60)] = 1440,
  [SMALL_STATE(61)] = 1459,
  [SMALL_STATE(62)] = 1478,
  [SMALL_STATE(63)] = 1497,
  [SMALL_STATE(64)] = 1516,
  [SMALL_STATE(65)] = 1535,
  [SMALL_STATE(66)] = 1554,
  [SMALL_STATE(67)] = 1573,
  [SMALL_STATE(68)] = 1592,
  [SMALL_STATE(69)] = 1611,
  [SMALL_STATE(70)] = 1630,
  [SMALL_STATE(71)] = 1649,
  [SMALL_STATE(72)] = 1666,
  [SMALL_STATE(73)] = 1682,
  [SMALL_STATE(74)] = 1698,
  [SMALL_STATE(75)] = 1712,
  [SMALL_STATE(76)] = 1726,
  [SMALL_STATE(77)] = 1740,
  [SMALL_STATE(78)] = 1756,
  [SMALL_STATE(79)] = 1772,
  [SMALL_STATE(80)] = 1788,
  [SMALL_STATE(81)] = 1804,
  [SMALL_STATE(82)] = 1820,
  [SMALL_STATE(83)] = 1834,
  [SMALL_STATE(84)] = 1848,
  [SMALL_STATE(85)] = 1864,
  [SMALL_STATE(86)] = 1880,
  [SMALL_STATE(87)] = 1894,
  [SMALL_STATE(88)] = 1910,
  [SMALL_STATE(89)] = 1924,
  [SMALL_STATE(90)] = 1938,
  [SMALL_STATE(91)] = 1954,
  [SMALL_STATE(92)] = 1968,
  [SMALL_STATE(93)] = 1984,
  [SMALL_STATE(94)] = 2000,
  [SMALL_STATE(95)] = 2016,
  [SMALL_STATE(96)] = 2032,
  [SMALL_STATE(97)] = 2046,
  [SMALL_STATE(98)] = 2060,
  [SMALL_STATE(99)] = 2076,
  [SMALL_STATE(100)] = 2092,
  [SMALL_STATE(101)] = 2108,
  [SMALL_STATE(102)] = 2124,
  [SMALL_STATE(103)] = 2140,
  [SMALL_STATE(104)] = 2156,
  [SMALL_STATE(105)] = 2172,
  [SMALL_STATE(106)] = 2188,
  [SMALL_STATE(107)] = 2201,
  [SMALL_STATE(108)] = 2214,
  [SMALL_STATE(109)] = 2227,
  [SMALL_STATE(110)] = 2240,
  [SMALL_STATE(111)] = 2253,
  [SMALL_STATE(112)] = 2266,
  [SMALL_STATE(113)] = 2279,
  [SMALL_STATE(114)] = 2292,
  [SMALL_STATE(115)] = 2305,
  [SMALL_STATE(116)] = 2318,
  [SMALL_STATE(117)] = 2331,
  [SMALL_STATE(118)] = 2344,
  [SMALL_STATE(119)] = 2357,
  [SMALL_STATE(120)] = 2370,
  [SMALL_STATE(121)] = 2383,
  [SMALL_STATE(122)] = 2396,
  [SMALL_STATE(123)] = 2409,
  [SMALL_STATE(124)] = 2422,
  [SMALL_STATE(125)] = 2435,
  [SMALL_STATE(126)] = 2448,
  [SMALL_STATE(127)] = 2461,
  [SMALL_STATE(128)] = 2474,
  [SMALL_STATE(129)] = 2487,
  [SMALL_STATE(130)] = 2500,
  [SMALL_STATE(131)] = 2513,
  [SMALL_STATE(132)] = 2526,
  [SMALL_STATE(133)] = 2539,
  [SMALL_STATE(134)] = 2552,
  [SMALL_STATE(135)] = 2565,
  [SMALL_STATE(136)] = 2578,
  [SMALL_STATE(137)] = 2591,
  [SMALL_STATE(138)] = 2604,
  [SMALL_STATE(139)] = 2617,
  [SMALL_STATE(140)] = 2630,
  [SMALL_STATE(141)] = 2643,
  [SMALL_STATE(142)] = 2656,
  [SMALL_STATE(143)] = 2669,
  [SMALL_STATE(144)] = 2682,
  [SMALL_STATE(145)] = 2695,
  [SMALL_STATE(146)] = 2708,
  [SMALL_STATE(147)] = 2721,
  [SMALL_STATE(148)] = 2734,
  [SMALL_STATE(149)] = 2747,
  [SMALL_STATE(150)] = 2760,
  [SMALL_STATE(151)] = 2773,
  [SMALL_STATE(152)] = 2786,
  [SMALL_STATE(153)] = 2799,
  [SMALL_STATE(154)] = 2812,
  [SMALL_STATE(155)] = 2825,
  [SMALL_STATE(156)] = 2838,
  [SMALL_STATE(157)] = 2851,
  [SMALL_STATE(158)] = 2864,
  [SMALL_STATE(159)] = 2877,
  [SMALL_STATE(160)] = 2890,
  [SMALL_STATE(161)] = 2903,
  [SMALL_STATE(162)] = 2916,
  [SMALL_STATE(163)] = 2929,
  [SMALL_STATE(164)] = 2942,
  [SMALL_STATE(165)] = 2955,
  [SMALL_STATE(166)] = 2968,
  [SMALL_STATE(167)] = 2981,
  [SMALL_STATE(168)] = 2994,
  [SMALL_STATE(169)] = 3007,
  [SMALL_STATE(170)] = 3020,
  [SMALL_STATE(171)] = 3033,
  [SMALL_STATE(172)] = 3046,
  [SMALL_STATE(173)] = 3059,
  [SMALL_STATE(174)] = 3072,
  [SMALL_STATE(175)] = 3085,
  [SMALL_STATE(176)] = 3098,
  [SMALL_STATE(177)] = 3111,
  [SMALL_STATE(178)] = 3124,
  [SMALL_STATE(179)] = 3137,
  [SMALL_STATE(180)] = 3150,
  [SMALL_STATE(181)] = 3163,
  [SMALL_STATE(182)] = 3176,
  [SMALL_STATE(183)] = 3189,
  [SMALL_STATE(184)] = 3202,
  [SMALL_STATE(185)] = 3215,
  [SMALL_STATE(186)] = 3228,
  [SMALL_STATE(187)] = 3241,
  [SMALL_STATE(188)] = 3254,
  [SMALL_STATE(189)] = 3267,
  [SMALL_STATE(190)] = 3280,
  [SMALL_STATE(191)] = 3293,
  [SMALL_STATE(192)] = 3306,
  [SMALL_STATE(193)] = 3319,
  [SMALL_STATE(194)] = 3332,
  [SMALL_STATE(195)] = 3345,
  [SMALL_STATE(196)] = 3358,
  [SMALL_STATE(197)] = 3371,
  [SMALL_STATE(198)] = 3384,
  [SMALL_STATE(199)] = 3388,
  [SMALL_STATE(200)] = 3392,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(198),
  [5] = {.count = 1, .reusable = true}, SHIFT(200),
  [7] = {.count = 1, .reusable = false}, SHIFT(14),
  [9] = {.count = 1, .reusable = true}, SHIFT(77),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph, 1),
  [13] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2),
  [15] = {.count = 2, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(14),
  [18] = {.count = 2, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 2), SHIFT_REPEAT(77),
  [21] = {.count = 1, .reusable = true}, SHIFT(100),
  [23] = {.count = 1, .reusable = false}, REDUCE(sym_node_id, 3),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_node_id, 3),
  [27] = {.count = 1, .reusable = true}, SHIFT(182),
  [29] = {.count = 1, .reusable = true}, SHIFT(178),
  [31] = {.count = 1, .reusable = true}, SHIFT(84),
  [33] = {.count = 1, .reusable = true}, SHIFT(173),
  [35] = {.count = 1, .reusable = true}, SHIFT(172),
  [37] = {.count = 1, .reusable = true}, SHIFT(169),
  [39] = {.count = 1, .reusable = true}, SHIFT(168),
  [41] = {.count = 1, .reusable = true}, SHIFT(166),
  [43] = {.count = 1, .reusable = true}, SHIFT(162),
  [45] = {.count = 1, .reusable = true}, SHIFT(161),
  [47] = {.count = 1, .reusable = true}, SHIFT(93),
  [49] = {.count = 1, .reusable = true}, SHIFT(136),
  [51] = {.count = 1, .reusable = true}, SHIFT(135),
  [53] = {.count = 1, .reusable = true}, SHIFT(132),
  [55] = {.count = 1, .reusable = true}, SHIFT(131),
  [57] = {.count = 1, .reusable = true}, SHIFT(130),
  [59] = {.count = 1, .reusable = true}, SHIFT(129),
  [61] = {.count = 1, .reusable = true}, SHIFT(127),
  [63] = {.count = 1, .reusable = true}, SHIFT(123),
  [65] = {.count = 1, .reusable = true}, SHIFT(122),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 7),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 7),
  [71] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 3),
  [73] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 3),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 8),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 8),
  [79] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 8),
  [81] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 8),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 8),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 8),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym_continue_node, 4),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym_continue_node, 4),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 5),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 5),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 5),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 5),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_ask_node, 6),
  [101] = {.count = 1, .reusable = false}, REDUCE(sym_ask_node, 6),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 4),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 4),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 7),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 7),
  [111] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 7),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 7),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_part_node, 4),
  [117] = {.count = 1, .reusable = false}, REDUCE(sym_part_node, 4),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 5),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 5),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 6),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 6),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 5),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 5),
  [131] = {.count = 1, .reusable = true}, REDUCE(sym_consider_node, 7),
  [133] = {.count = 1, .reusable = false}, REDUCE(sym_consider_node, 7),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym_set_node, 5),
  [137] = {.count = 1, .reusable = false}, REDUCE(sym_set_node, 5),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_when_node, 6),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_when_node, 6),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 7),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 7),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 5),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 5),
  [151] = {.count = 1, .reusable = true}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [153] = {.count = 1, .reusable = false}, REDUCE(aux_sym_decision_graph_repeat1, 1),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_todo_node, 6),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_todo_node, 6),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym_reject_node, 6),
  [161] = {.count = 1, .reusable = false}, REDUCE(sym_reject_node, 6),
  [163] = {.count = 1, .reusable = true}, REDUCE(sym_top_level_node, 1),
  [165] = {.count = 1, .reusable = false}, REDUCE(sym_top_level_node, 1),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_call_node, 6),
  [169] = {.count = 1, .reusable = false}, REDUCE(sym_call_node, 6),
  [171] = {.count = 1, .reusable = true}, REDUCE(sym_import_node, 6),
  [173] = {.count = 1, .reusable = false}, REDUCE(sym_import_node, 6),
  [175] = {.count = 1, .reusable = true}, REDUCE(sym_section_node, 6),
  [177] = {.count = 1, .reusable = false}, REDUCE(sym_section_node, 6),
  [179] = {.count = 1, .reusable = true}, SHIFT(48),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 2),
  [183] = {.count = 1, .reusable = true}, SHIFT(120),
  [185] = {.count = 1, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2),
  [187] = {.count = 2, .reusable = true}, REDUCE(aux_sym_slot_repeat1, 2), SHIFT_REPEAT(120),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_slot, 1),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_aggregate_assignment_slot, 3),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 3),
  [196] = {.count = 1, .reusable = false}, SHIFT(71),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2), SHIFT_REPEAT(179),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 2),
  [203] = {.count = 1, .reusable = true}, SHIFT(179),
  [205] = {.count = 1, .reusable = true}, SHIFT(191),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_aggregate_assignment_slot, 4),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_aggregate_assignment_slot, 4),
  [211] = {.count = 1, .reusable = false}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2),
  [215] = {.count = 2, .reusable = false}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 2), SHIFT_REPEAT(71),
  [218] = {.count = 1, .reusable = true}, SHIFT(164),
  [220] = {.count = 1, .reusable = true}, SHIFT(82),
  [222] = {.count = 1, .reusable = true}, SHIFT(180),
  [224] = {.count = 1, .reusable = true}, SHIFT(159),
  [226] = {.count = 1, .reusable = true}, SHIFT(177),
  [228] = {.count = 2, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2), SHIFT_REPEAT(159),
  [231] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 2),
  [233] = {.count = 2, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2), SHIFT_REPEAT(164),
  [236] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(34),
  [240] = {.count = 1, .reusable = true}, SHIFT(160),
  [242] = {.count = 1, .reusable = true}, SHIFT(32),
  [244] = {.count = 1, .reusable = true}, SHIFT(104),
  [246] = {.count = 1, .reusable = true}, SHIFT(30),
  [248] = {.count = 1, .reusable = true}, SHIFT(112),
  [250] = {.count = 1, .reusable = true}, SHIFT(29),
  [252] = {.count = 1, .reusable = true}, SHIFT(65),
  [254] = {.count = 1, .reusable = false}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 1),
  [256] = {.count = 1, .reusable = true}, REDUCE(aux_sym_aggregate_assignment_slot_repeat1, 1),
  [258] = {.count = 1, .reusable = true}, REDUCE(sym_term_sub_node, 5),
  [260] = {.count = 1, .reusable = true}, REDUCE(sym_consider_option_sub_node, 5),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_answer_sub_node, 5),
  [264] = {.count = 1, .reusable = true}, SHIFT(72),
  [266] = {.count = 1, .reusable = true}, SHIFT(153),
  [268] = {.count = 1, .reusable = true}, SHIFT(44),
  [270] = {.count = 1, .reusable = false}, REDUCE(sym_info_sub_node, 6),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_info_sub_node, 6),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_consider_options_sub_node, 5),
  [276] = {.count = 1, .reusable = true}, REDUCE(aux_sym_terms_sub_node_repeat1, 1),
  [278] = {.count = 1, .reusable = true}, SHIFT(95),
  [280] = {.count = 1, .reusable = true}, SHIFT(114),
  [282] = {.count = 1, .reusable = true}, REDUCE(sym_when_answer_sub_node, 5),
  [284] = {.count = 1, .reusable = true}, REDUCE(aux_sym_consider_options_sub_node_repeat1, 1),
  [286] = {.count = 1, .reusable = true}, REDUCE(aux_sym_answers_sub_node_repeat1, 1),
  [288] = {.count = 1, .reusable = true}, SHIFT(11),
  [290] = {.count = 1, .reusable = true}, SHIFT(45),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 1),
  [294] = {.count = 1, .reusable = true}, SHIFT(124),
  [296] = {.count = 1, .reusable = true}, SHIFT(125),
  [298] = {.count = 1, .reusable = true}, SHIFT(140),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_node_id_value, 1),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_node_id_value, 1),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_atomic_assignment_slot, 3),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_assignment_slot, 3),
  [308] = {.count = 1, .reusable = true}, SHIFT(165),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_decision_graph_name, 1),
  [312] = {.count = 1, .reusable = true}, SHIFT(158),
  [314] = {.count = 1, .reusable = true}, SHIFT(20),
  [316] = {.count = 1, .reusable = true}, SHIFT(39),
  [318] = {.count = 1, .reusable = true}, SHIFT(36),
  [320] = {.count = 1, .reusable = true}, SHIFT(38),
  [322] = {.count = 1, .reusable = true}, SHIFT(106),
  [324] = {.count = 1, .reusable = true}, SHIFT(68),
  [326] = {.count = 1, .reusable = true}, SHIFT(139),
  [328] = {.count = 1, .reusable = true}, SHIFT(16),
  [330] = {.count = 1, .reusable = true}, SHIFT(87),
  [332] = {.count = 1, .reusable = true}, SHIFT(35),
  [334] = {.count = 1, .reusable = true}, SHIFT(61),
  [336] = {.count = 1, .reusable = true}, SHIFT(50),
  [338] = {.count = 1, .reusable = true}, SHIFT(28),
  [340] = {.count = 1, .reusable = true}, SHIFT(184),
  [342] = {.count = 1, .reusable = true}, SHIFT(188),
  [344] = {.count = 1, .reusable = true}, SHIFT(96),
  [346] = {.count = 1, .reusable = true}, SHIFT(49),
  [348] = {.count = 1, .reusable = true}, SHIFT(6),
  [350] = {.count = 1, .reusable = true}, SHIFT(192),
  [352] = {.count = 1, .reusable = true}, SHIFT(152),
  [354] = {.count = 1, .reusable = true}, SHIFT(21),
  [356] = {.count = 1, .reusable = true}, SHIFT(4),
  [358] = {.count = 1, .reusable = true}, SHIFT(80),
  [360] = {.count = 1, .reusable = true}, SHIFT(79),
  [362] = {.count = 1, .reusable = true}, SHIFT(27),
  [364] = {.count = 1, .reusable = true}, SHIFT(26),
  [366] = {.count = 1, .reusable = true}, SHIFT(67),
  [368] = {.count = 1, .reusable = true}, SHIFT(78),
  [370] = {.count = 1, .reusable = true}, SHIFT(23),
  [372] = {.count = 1, .reusable = true}, SHIFT(197),
  [374] = {.count = 1, .reusable = true}, SHIFT(56),
  [376] = {.count = 1, .reusable = true}, SHIFT(185),
  [378] = {.count = 1, .reusable = true}, SHIFT(163),
  [380] = {.count = 1, .reusable = true}, SHIFT(25),
  [382] = {.count = 1, .reusable = true}, SHIFT(148),
  [384] = {.count = 1, .reusable = true}, SHIFT(41),
  [386] = {.count = 1, .reusable = true}, SHIFT(103),
  [388] = {.count = 1, .reusable = true}, SHIFT(86),
  [390] = {.count = 1, .reusable = true}, SHIFT(31),
  [392] = {.count = 1, .reusable = true}, SHIFT(42),
  [394] = {.count = 1, .reusable = false}, SHIFT(13),
  [396] = {.count = 1, .reusable = true}, SHIFT(43),
  [398] = {.count = 1, .reusable = true}, SHIFT(171),
  [400] = {.count = 1, .reusable = true}, SHIFT(167),
  [402] = {.count = 1, .reusable = true}, SHIFT(19),
  [404] = {.count = 1, .reusable = true}, SHIFT(18),
  [406] = {.count = 1, .reusable = true}, SHIFT(128),
  [408] = {.count = 1, .reusable = true}, SHIFT(175),
  [410] = {.count = 1, .reusable = true}, SHIFT(176),
  [412] = {.count = 1, .reusable = true}, SHIFT(126),
  [414] = {.count = 1, .reusable = true}, SHIFT(141),
  [416] = {.count = 1, .reusable = true}, SHIFT(143),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_slot_sub_node, 5),
  [420] = {.count = 1, .reusable = true}, SHIFT(183),
  [422] = {.count = 1, .reusable = true}, SHIFT(118),
  [424] = {.count = 1, .reusable = true}, SHIFT(144),
  [426] = {.count = 1, .reusable = true}, SHIFT(73),
  [428] = {.count = 1, .reusable = true}, SHIFT(17),
  [430] = {.count = 1, .reusable = true}, SHIFT(5),
  [432] = {.count = 1, .reusable = true}, SHIFT(187),
  [434] = {.count = 1, .reusable = true}, SHIFT(81),
  [436] = {.count = 1, .reusable = true}, SHIFT(99),
  [438] = {.count = 1, .reusable = true}, SHIFT(98),
  [440] = {.count = 1, .reusable = true}, SHIFT(24),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_text_sub_node, 6),
  [444] = {.count = 1, .reusable = true}, SHIFT(8),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_answers_sub_node, 5),
  [448] = {.count = 1, .reusable = true}, SHIFT(63),
  [450] = {.count = 1, .reusable = true}, SHIFT(190),
  [452] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 5),
  [454] = {.count = 1, .reusable = true}, SHIFT(111),
  [456] = {.count = 1, .reusable = true}, SHIFT(94),
  [458] = {.count = 1, .reusable = true}, SHIFT(7),
  [460] = {.count = 1, .reusable = true}, SHIFT(110),
  [462] = {.count = 1, .reusable = true}, SHIFT(22),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [466] = {.count = 1, .reusable = true}, REDUCE(sym_else_sub_node, 5),
  [468] = {.count = 1, .reusable = true}, SHIFT(33),
  [470] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [472] = {.count = 1, .reusable = true}, SHIFT(195),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_terms_sub_node, 6),
  [476] = {.count = 1, .reusable = true}, SHIFT(108),
  [478] = {.count = 1, .reusable = true}, SHIFT(74),
  [480] = {.count = 1, .reusable = true}, SHIFT(76),
  [482] = {.count = 1, .reusable = true}, SHIFT(193),
  [484] = {.count = 1, .reusable = true}, SHIFT(75),
  [486] = {.count = 1, .reusable = true}, SHIFT(149),
  [488] = {.count = 1, .reusable = true}, SHIFT(199),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 2),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_comment, 1),
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
