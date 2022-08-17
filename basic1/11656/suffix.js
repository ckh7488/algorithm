const inputStr = require('fs').readFileSync('/dev/stdin').toString().trim();
console.log(inputStr.split('').map((e,idx)=>inputStr.slice(idx)).sort().join("\n"));