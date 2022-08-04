let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');
let tot = input[0];
let myArr = input[1].split(' ').map(e=>Number(e));
const myStack = [];
for (let i = 0; i < tot; i++) {
    while (myStack.length != 0 && myArr[myStack[myStack.length - 1]] < myArr[i]) {
        myArr[myStack.pop()] = myArr[i];
    }
    myStack.push(i);
}

while(myStack.length){
    myArr[myStack.pop()] = -1;
}

console.log(myArr.join(' '));


