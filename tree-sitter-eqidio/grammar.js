module.exports = grammar({
    name: 'eqidio',

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

        eqtex: $ => seq("$$", $._eqtex_statement, "$$"),
        eqtex_char: $ => /[A-Za-z0-9]/,
        eqtex_text: $ => /[A-Za-z]+/,

        _eqtex_statement: $ => choice(
            $._eqtex_expression,
            $.eqtex_equasion,
        ),
        _eqtex_expression: $ => choice(
            $._number,
            $.eqtex_sum,
            $.eqtex_product,
            $.eqtex_symbol,
            $.eqtex_power
        ),
        _eqtex_term: $ => choice(
            $._number,
            $.eqtex_symbol
        ),
        _eqtex_factor: $ => choice(
            $._number,
            $.eqtex_symbol
        ),
        _eqtex_component: $ => choice(
            $._number,
            $.eqtex_product,
            $.eqtex_symbol
        ),
        eqtex_sum: $ => seq(
            choice(
                seq("-", field("opposite", $._eqtex_component)),
                $._eqtex_component
            ), repeat1(choice(
                seq("-", field("opposite", "-", $._eqtex_component)),
                seq("+", $._eqtex_component)
            ))),
        _term_or_wrapped: $ => choice(
            $._eqtex_term,
            seq("{", $._eqtex_expression, "}"),
        ),
        eqtex_product: $ => seq($._eqtex_factor, optional(choice("*", "\\times")), repeat1($._eqtex_factor)),
        eqtex_power: $ => prec.right(seq($._term_or_wrapped, "^", field("exponent", $._term_or_wrapped))),
        eqtex_symbol: $ => seq($.eqtex_text,
            optional(seq("_", field("subscript", choice(
            $.eqtex_char,
            seq("{", $.eqtex_text, "}"),
        )))),
        ),
        eqtex_equasion: $ => seq($._eqtex_expression, "=", $._eqtex_expression),

        _argument: $ => choice($.natural, $.integer, $.floating_point, $.enum_value, $.duration, $.variable),
    },

    extras: $ => [$._newline, $._whitespace],
});

