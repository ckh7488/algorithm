const inputArr = require('fs').readFileSync('/dev/stdin').toString().split(' ').map(e=>parseInt(e));

const A = inputArr[0];
const B = inputArr[1];
const C = inputArr[2];

console.log((A+B)%C);
console.log(((A%C) + (B%C))%C);
console.log((A*B)%C);
console.log(((A%C) * (B%C))%C);