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
        identifier: $ => /[^0-9\{}()\[\]<>\-+=,!@#$%^&*][^\{}()\[\]<>\-+=,!@#$%^&*]*/,
        integer: $ => /\[+-]?[0-9]+/,
        floating_point: $ => /[-+]?[0-9]*(\.?[0-9]+|([eE][-+]?[0-9]+)){1,2}/,

        _number: $ => choice($.integer, $.floating_point),
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

        _argument: $ => choice($._number, $.enum_value, $.duration, $.variable),

        eqtex: $ => seq("$$", $._eqtex_expression, "$$"),

        eqtex_text: $ => /[A-Za-z]+/,
        eqtex_number: $ => /[-]?[0-9]+(.[0-9]+)?/,

        eqtex_symbol: $ => choice(
            $.eqtex_number,
            $.eqtex_text,
        ),

        eqtex_power: $ => seq($._eqtex_powerable, "^", "{", $._eqtex_expression, "}"),

        _eqtex_powerable: $ => choice(
            $.eqtex_symbol,
            $.eqtex_brackets,
            $.eqtex_root,
        ),

        eqtex_product: $ => seq($._eqtex_productable, repeat1($._eqtex_productable)),

        _eqtex_productable: $ => choice(
            $.eqtex_symbol,
            $.eqtex_brackets,
            $.eqtex_power,
            $.eqtex_fraction,
            $.eqtex_root,
        ),

        eqtex_opposite: $ => prec(2, seq("-", $._eqtex_oppositable)),

        _eqtex_oppositable: $ => choice(
            $.eqtex_symbol,
            $.eqtex_brackets,
            $.eqtex_power,
            $.eqtex_product,
            $.eqtex_fraction,
            $.eqtex_root,
        ),

        eqtex_sum: $ => prec(1, seq(choice($._eqtex_oppositable, $.eqtex_opposite), repeat1(choice(
            seq("+", $._eqtex_oppositable),
            $.eqtex_opposite,
        )))),

        eqtex_fraction: $ => seq("\\frac", "{", $._eqtex_expression, "}", "{", $._eqtex_expression, "}"),

        eqtex_root: $ => choice(
            seq("\\sqrt", "{", $._eqtex_expression, "}"),
            seq("\\root", "{", $._eqtex_expression, "}", "{", $._eqtex_expression, "}"),
        ),

        eqtex_brackets: $ => choice(
            seq("(", $._eqtex_expression, ")"),
            seq("[", $._eqtex_expression, "]"),
        ),
        
        eqtex_equations: $ => seq($._eqtex_equationable, repeat1(seq("=", $._eqtex_equationable))),

        _eqtex_equationable: $ => choice(
            $.eqtex_symbol,
            $.eqtex_brackets,
            $.eqtex_power,
            $.eqtex_product,
            $.eqtex_opposite,
            $.eqtex_sum,
            $.eqtex_fraction,
            $.eqtex_root,
        ),

        _eqtex_expression: $ => choice(
            $.eqtex_symbol,
            $.eqtex_power,
            $.eqtex_brackets,
            $.eqtex_product,
            $.eqtex_opposite,
            $.eqtex_sum,
            $.eqtex_equations,
            $.eqtex_fraction,
            $.eqtex_root,
        ),

    },

    extras: $ => [$._newline, $._whitespace],

});

