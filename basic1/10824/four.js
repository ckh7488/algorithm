const inputArr = require('fs').readFileSync('/dev/stdin').toString().split(' ');

console.log(parseInt(inputArr[0]+inputArr[1]) + parseInt(inputArr[2]+inputArr[3]));