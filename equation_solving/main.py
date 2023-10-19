from tree_sitter import Language, Parser

Language.build_library(
  # Store the library in the `build` directory
  'build/eqido.so',

  # Include one or more languages
  [
    './tree-sitter-eqido',
  ]
)

eqido = Language("build/eqido.so", "eqido")