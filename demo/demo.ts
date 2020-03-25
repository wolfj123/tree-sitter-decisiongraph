
const Parser = require('tree-sitter');
const DecisionGraph = require('tree-sitter-decisiongraph');

const parser = new Parser();
parser.setLanguage(DecisionGraph);
//Then you can parse some source code,

const sourceCode = 'myslot : one of a, b .';
const tree = parser.parse(sourceCode);
//and inspect the syntax tree.

console.log(tree.rootNode.toString());

//Traverse
//https://tree-sitter.github.io/tree-sitter/using-parsers#walking-trees-with-tree-cursors

let cursor = tree.rootNode.walk();
//console.log(cursor);
console.log(cursor.nodeType);

cursor.gotoFirstChild();
console.log(cursor.nodeType);
console.log(cursor.currentNode);

cursor.gotoFirstChild();
console.log(cursor.nodeType);
console.log(cursor.currentNode);

cursor.gotoNextSibling(); cursor.gotoNextSibling();
console.log(cursor.nodeType);
console.log(cursor.currentNode);


