from tree_sitter import Language, Parser

Language.build_library(
  # Store the library in the `build` directory
  'build/eqideo.so',

  # Include one or more languages
  [
    './tree-sitter-eqideo',
  ]
)

EQIDEO = Language("build/eqideo.so", "eqideo")

parser = Parser()
parser.set_language(EQIDEO)

tree = parser.parse(bytes("""
                          $$
                          a * b = c
                          $$
""", "utf8"))

print(tree.root_node.type)
