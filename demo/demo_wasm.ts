
import Parser = require('web-tree-sitter');


demo()

async function demo() {
    console.log(__dirname)
    await Parser.init()
    const parser = new Parser()
    const wasm = __dirname+'/parser/tree-sitter-decisiongraph.wasm'
    const lang = await Parser.Language.load(wasm)
    parser.setLanguage(lang)
  
    //Then you can parse some source code,

    const sourceCode = '[ask:{text: txt }{answers: {yes: [todo : ] } }]';
    // console.log(sourceCode);
    const tree = parser.parse(sourceCode);
    //and inspect the syntax tree.

    //console.log(tree.rootNode.toString());

    // //Traverse
    // //https://tree-sitter.github.io/tree-sitter/using-parsers#walking-trees-with-tree-cursors

    // let cursor = tree.rootNode.walk();
    //console.log(cursor);
    // console.log(cursor.nodeType);

    // cursor.gotoFirstChild();
    // console.log(cursor.nodeType);
    // console.log(cursor.currentNode());

    // cursor.gotoFirstChild();
    // console.log(cursor.nodeType);
    // console.log(cursor.currentNode());
    // console.log(cursor.currentNode().text);

    // cursor.gotoFirstChild();
    // console.log(cursor.currentNode());
    // cursor.gotoNextSibling();
    // console.log(cursor.currentNode().text);


    // tree = parser.parse('[>nn< todo: wot]');
    // let cursor = tree.rootNode.walk();
    // //console.log(cursor);
    // //console.log(cursor.nodeType);
    // //console.log(cursor.currentNode().descendantsOfType('node_id'))

    // tree = parser.parse('[todo: wot]');
    // let cursor = tree.rootNode.walk();
    // console.log(cursor.currentNode().descendantsOfType('todo_node'))




    tree = parser.parse('[ask:{text: txt }{  : {yes: [todo : ] } }]');
    let cursor = tree.rootNode.walk();
    console.log(tree.rootNode.toString());
    console.log(cursor.currentNode().namedDescendantForPosition({row: 0, column: 19}).type)
}