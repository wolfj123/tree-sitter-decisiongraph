
var Parser = require('web-tree-sitter');


demo()

async function demo() {
    await Parser.init()
    let parser = new Parser()
    let wasm = __dirname+'/parser/tree-sitter-decisiongraph.wasm'
    let lang = await Parser.Language.load(wasm)
    parser.setLanguage(lang)
  
    //Then you can parse some source code,

    //let sourceCode = '[ask:{text: txt }{answers: {yes: [todo : ] } }]';
    // console.log(sourceCode);
    //let tree = parser.parse(sourceCode);
    //and inspect the syntax tree.

    let tree = parser.parse(
        `[ask:
            {text: txt}
            {answers:
              {y:[todo:]}
              {1 2 3 4: [todo:]}}]`
    
    );
    let cursor = tree.rootNode.walk();
    console.log(tree.rootNode.toString());
    console.log(cursor.currentNode().namedDescendantForPosition({row: 0, column: 19}).type)
}