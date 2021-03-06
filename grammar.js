//https://regex101.com/r/dU5fO8/73
const alpha = /[^:\s0-9;.,`"'|<=>/\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
const alpha_numeric = /[^+:\s;.,`"'|<=>/\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/
const string_regex = /[^;`|<=>\\\[\]{}\uFEFF\u2060\u200B\u00A0]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/


const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments
};


module.exports = grammar({
  name: 'decisiongraph',

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  externals: $ => [
    $._comment_block,
    //$.free_text,
  ],

  rules: {
    source_file: $ => $.decision_graph,

    decision_graph: $ => repeat1($._top_level_node),

    _top_level_node: $ =>
      choice(
        $.ask_node,
        $.continue_node,
        $.todo_node,
        $.call_node,
        $.reject_node,
        $.set_node,
        $.section_node,
        $.part_node,
        $.consider_node,
        $.when_node,
        $.import_node,
        $.end_node
      ),

    todo_node: $ => seq(
      "[", optional($.node_id), "todo", ":", optional($.free_text_no_end_bracket), "]"
    ),

    //free_text: $ => /([a-zA-Z0-9._,/~?!()@#$%^&*_+-]|[a-zA-Z0-9._,/~?!()@#$%^&*_+-]\s[a-zA-Z0-9._,/~?!()@#$%^&*_+-])+/,
    //free_text: $ => /[a-zA-Z0-9._,/~?!()@#$%^&*_+-]|\s+/,
    free_text: $ => /([`'’:;\[\]a-zA-Z0-9._,/~?!()@#$%^&*_+-]|([`'’:;\[\]a-zA-Z0-9._,/~?!()@#$%^&*_+-]\s*))+/,

    free_text_no_end_bracket: $ => /([`'’:;\[a-zA-Z0-9._,/~?!()@#$%^&*_+-]|([`'’:;\[a-zA-Z0-9._,/~?!()@#$%^&*_+-]\s*))+/,

    free_text_no_colon: $ => /([`'’;\[\]a-zA-Z0-9._,/~?!()@#$%^&*_+-]|([`'’;\[\]a-zA-Z0-9._,/~?!()@#$%^&*_+-]\s*))+/,


    ask_node: $ => seq(
      "[", optional($.node_id), "ask", ":", $.text_sub_node, optional($.terms_sub_node), $.answers_sub_node, "]"
    ),

    text_sub_node: $ => seq(
      "{", optional($.node_id), "text", ":", optional($.free_text), "}"
    ),

    terms_sub_node: $ => seq(
      "{", optional($.node_id), "terms", ":", repeat($.term_sub_node), "}" //TODO: should this really be 0-or-more instead of 1-or-more?
    ),

    term_sub_node: $ => seq(
      "{", optional($.free_text_no_colon), ":", optional($.free_text), "}"
    ),

    answers_sub_node: $ => seq(
      "{", "answers", ":", repeat1($.answer_sub_node), "}"
    ),

    answer_sub_node: $ => seq(
      "{", optional($.free_text_no_colon), ":", optional($.decision_graph), "}"
    ),

    call_node: $ => seq(
      "[", optional($.node_id), "call", ":", $.node_reference, "]"
    ),

    node_reference: $ => seq(
      optional(seq($.decision_graph_name, ">")), $.node_id_value
    ),

    consider_node: $ => seq(
      "[", optional($.node_id), "consider", ":", $.slot_sub_node, $.consider_options_sub_node, optional($.else_sub_node), "]"
    ),

    slot_sub_node: $ => seq(
      "{", "slot", ":", $.slot_reference, "}"
    ),

    consider_options_sub_node: $ => seq(
      "{", "options", ":", repeat1($.consider_option_sub_node), "}"
    ),

    consider_option_sub_node: $ => seq(
      "{", $._slot_values, ":", $.decision_graph, "}"
    ),

    else_sub_node: $ => seq(
      "{", "else", ":", $.decision_graph, "}"
    ),

    when_node: $ => seq(
      "[", optional($.node_id), "when", ":", repeat1($.when_answer_sub_node), optional($.else_sub_node), "]" //TODO: it seems though that the java lib only allowys 1 when sub node
    ),

    when_answer_sub_node: $ => seq(
      "{", $.assignment_slot, ":", $.decision_graph, "}"
    ),

    section_node: $ => seq(
      "[", optional($.node_id), "section", ":", optional($.info_sub_node), $.decision_graph, "]"
    ),

    info_sub_node: $ => seq(
      "{", optional($.node_id), "title", ":", optional($.free_text_no_end_bracket), "}"
    ),

    continue_node: $ => seq(
      "[", optional($.node_id), "continue", "]"
    ),

    part_node: $ => seq(
      "[--", $.node_id, $.decision_graph, "--]"
    ),

    end_node: $ => seq(
      "[", optional($.node_id), "end", "]"
    ),

    reject_node: $ => seq(
      "[", optional($.node_id), "reject", ":", optional($.free_text_no_end_bracket), "]"
    ),

    set_node: $ => seq(
      "[", optional($.node_id), "set", ":", $.assignment_slot, "]"
    ),

    assignment_slot: $ => seq(
      choice(
        prec.left(seq($.assignment_slot, ";", $.assignment_slot)),
        prec(1, $.aggregate_assignment_slot),
        prec(0, $.atomic_assignment_slot)
      )
    ),

    aggregate_assignment_slot: $ => seq(
      $.slot_reference, "+=", $._slot_values
    ),

    atomic_assignment_slot: $ => seq(
      $.slot_reference, "=", $.slot_value
    ),

    slot_reference: $ => seq(
      $.slot_identifier, repeat(seq("/", $.slot_identifier))
    ),

    _slot_values: $ => choice(
      seq(
        "{",
        $.slot_value,
        repeat(seq(
          ",",
          $.slot_value
        )),
        "}"
      ),
      seq(
        $.slot_value,
        repeat(seq(
          ",",
          $.slot_value
        ))
      )
    ),

    slot_value: $ => {
      return token(seq(alpha, repeat(alpha_numeric)))
    },

    slot_identifier: $ => {
      return token(seq(alpha, repeat(alpha_numeric)))
    },

    import_node: $ => seq(
      "[", "#import", $.decision_graph_name, ":", $.file_path, "]"
    ),

    file_path: $ => /[^<>"\|?*\[\]\n]*[^<>"\|?*\[\]\s]/,    //TODO: for now, we are not allowing [ ] in a file path

    decision_graph_name: $ => /[a-zA-Z0-9._\-\+]+/,

    node_id: $ => seq(
      ">", $.node_id_value, "<"
    ),

    node_id_value: $ => /[a-zA-Z0-9._\-\+]+/,

    comment: $ => prec(PREC.COMMENT, choice(
      seq('<--', /.*/),
      $._comment_block
    )),

    comment_line: $ =>
      seq('<--', /.*/),

    description: $ => token(prec(PREC.STRING,
      seq('[', repeat(string_regex), ']'),
    ))
  },



});