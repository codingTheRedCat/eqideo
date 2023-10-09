module.exports = grammar({
    name: 'eqidio',

    externals: $ => [
        $.comment,
        $.eol,
        $._newline
    ],

    rules: {
        source_file: $ => repeat($._statement),
        _statement: $ => choice($.command, $.environment_command, $.latex),

        _whitespace: $ => /[ \t]+/,
        identifier: $ => /[a-zA-Z][a-zA-Z0-9_]*/,
        natural: $ => /\+?[0-9]+/,
        integer: $ => /-[0-9]+/,
        floating_point: $ => /[-+]?[0-9]*(\.?[0-9]+|([eE][-+]?[0-9]+)){1,2}/,

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

        latex: $ => seq("$$", optional(/[^$]+/), "$$"),
        _argument: $ => choice($.natural, $.integer, $.floating_point, $.enum_value, $.duration, $.variable),
    },

    extras: $ => [$._newline, $._whitespace],
});

