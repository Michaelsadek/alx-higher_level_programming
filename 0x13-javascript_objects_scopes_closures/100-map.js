#!/usr/bin/node

const list = require('./100-data.js').list;
console.log(list);
console.log(list.map((item, index) => item * index));

const array1 = [1, 4, 9, 16];

// Pass a function to map
const map1 = array1.map((x) => x * 2);

console.log(map1);
// Expected output: Array [2, 8, 18, 32]
