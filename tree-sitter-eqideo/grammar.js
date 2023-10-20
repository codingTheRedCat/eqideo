module.exports = grammar({
    name: 'eqideo',

    externals: $ => [
        $.comment,
        $.eol,
        $._newline
    ],

    rules: {
        source_file: $ => repeat($._statement),
        _statement: $ => choice($.command, $.environment_command, $.eqtex),

        _whitespace: $ => /[ \t]+/,
        identifier: $ => /[a-zA-Z][a-zA-Z0-9_]*/,
        natural: $ => /\+?[0-9]+/,
        integer: $ => /-[0-9]+/,
        floating_point: $ => /[-+]?[0-9]*(\.?[0-9]+|([eE][-+]?[0-9]+)){1,2}/,

        _number: $ => choice($.natural, $.integer, $.floating_point),
        enum_value: $ => prec.right(seq("@", $.identifier)),
        duration: $ => /(((\d+m)|(\d+s)|(\d+ms))_?)+/,
        variable: $ => seq("*", $.identifier),

        command: $ => seq(
            field("id", $.identifier),
            optional(seq(
                optional(field("duration", $.duration)),
                optional(field("runtime", $.variable)),
            )),
            ";",
            repeat(field("argument", $._argument)),
            choice(";", $.eol),
        ),
        environment_command: $ => seq(
            "_",
            field("id", $.identifier),
            repeat(field("argument", $._argument)),
            choice(";", $.eol),
        ),

        eqtex: $ => seq("$$", $._eqtex_expression, "$$"),
        eqtex_char: $ => /[A-Za-z0-9]/,
        eqtex_text: $ => /[A-Za-z]+/,
        eqtex_symbol: $ => seq($.eqtex_text,
            optional(seq("_", field("subscript", choice($.eqtex_char, seq("{", $.eqtex_text, "}"))))),
        ),

        _eqtex_term: $ => prec("term", choice(
            $._number,
            $.eqtex_symbol,
            $.eqtex_brackets,
            $.eqtex_power,
            $.eqtex_fraction,
        )),
        _eqtex_component: $ => prec("component", choice(
            $._eqtex_term,
            $.eqtex_product,
        )),
        _eqtex_expression: $ => prec("expression", choice(
            $._eqtex_component,
            $._eqtex_wrapped,
            $.eqtex_sum,
            $.eqtex_equations,
        )),
        eqtex_brackets: $ => prec("brackets", choice(
            seq("(", $._eqtex_expression, ")"),
            seq("[", $._eqtex_expression, "]"),
        )),
        _eqtex_wrapped: $ => prec("wrapped", seq("{", $._eqtex_expression, "}")),

        eqtex_sum: $ => prec("sum", seq(
            choice(
                seq("-", field("opposite", $._eqtex_component)),
                $._eqtex_component
            ), repeat1(choice(
                seq("-", field("opposite", $._eqtex_component)),
                seq("+", $._eqtex_component)
            )))),
        _eqtex_term_or_wrapped: $ => prec("term_or_wrapped", choice(
            $._eqtex_term,
            $._eqtex_wrapped,
        )),
        eqtex_product: $ => prec("product", seq($._eqtex_term, optional(choice("*", "\\times")), repeat1($._eqtex_term))),
        eqtex_fraction: $ => prec("fraction", seq("\\frac", $._eqtex_wrapped, $._eqtex_wrapped)),
        eqtex_power: $ => prec.right("power", seq($._eqtex_term_or_wrapped, "^", field("exponent", $._eqtex_term_or_wrapped))),
        eqtex_equations: $ => prec.right("equations", seq($._eqtex_expression, "=", $._eqtex_expression)),
    
        _argument: $ => choice($.natural, $.integer, $.floating_point, $.enum_value, $.duration, $.variable),
    },

    extras: $ => [$._newline, $._whitespace],

    precedences: $ => [
        ["brackets", "wrapped", "term_or_wrapped", "power", "fraction", "product", "sum", "term", "component", "expression", "equations"]
    ],
});

