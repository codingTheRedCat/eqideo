module.exports = grammar({
    name: 'eqidio',

    externals: $ => [
        $.comment
    ],

    rules: {
        source_file: $ => repeat($._statement),
        _statement: $ => choice($.command, $.environment_command),

        _whitespace: $ => /\s+/,
        identifier: $ => /[a-zA-Z][a-zA-Z0-9_]*/,
        natural: $ => /\+?[0-9]+/,
        integer: $ => /-[0-9]+/,
        floating_point: $ => /[-+]?[0-9]*(\.?[0-9]+|([eE][-+]?[0-9]+)){1,2}/,

        enum_value: $ => prec.right(seq("@", $.identifier)),
        duration: $ => prec.right(repeat1(choice(
            seq(field("minutes", $.natural), "min"),
            seq(field("seconds", $.natural), "s"),
            seq(field("milliseconds", $.natural), "ms"),
        ))),
        variable: $ => prec.right(seq("*", optional(field("declaration", "=")), field("name", $.identifier))),

        command: $ => seq(
            field("name", $.identifier),
            optional(field("time", $.duration)),
            optional(field("controller", $.variable)),
            ";",
            optional(seq(field("argument", repeat($._argument)), ";"))
        ),
        _argument: $ => choice($.natural, $.integer, $.floating_point, $.enum_value, $.duration, $.variable),

        environment_command: $ => seq(
            "_",
            field("name", $.identifier),
            ";",
            optional(seq(field("argument", $._argument), ";"))
        ),
    },

    extras: $ => [$.comment, $._whitespace],
});

