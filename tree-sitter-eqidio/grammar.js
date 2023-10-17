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

        eqtex: $ => seq("$$", $._eqtex_expression, "$$"),
        eqtex_char: $ => /[A-Za-z0-9]/,
        eqtex_text: $ => /[A-Za-z0-9]+/,
        _eqtex_script_content: $ => choice(
            $.eqtex_char,
            seq("{", $.eqtex_text, "}"),
        ),

        _eqtex_expression: $ => choice(
            $._number,
            $.eqtex_sum,
            $.eqtex_product,
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
        eqtex_sum: $ => seq($._eqtex_component, repeat1(seq("+", $._eqtex_component))),
        eqtex_product: $ => seq($._eqtex_factor, optional(choice("*", "\\times")), repeat1($._eqtex_factor)),
        eqtex_symbol: $ => seq($.eqtex_text,
            optional(seq("_", field("subscript", $._eqtex_script_content))),
            optional(seq("^", field("superscript", $._eqtex_script_content))),
        ),

        _argument: $ => choice($.natural, $.integer, $.floating_point, $.enum_value, $.duration, $.variable),
    },

    extras: $ => [$._newline, $._whitespace],
});

