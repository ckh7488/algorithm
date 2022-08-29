const fs = require('fs');
const line =
    fs
    .readFileSync('/dev/stdin')
    // .readFileSync('input')
    .toString().split('\n').map(e => e.split(' ').map(x => parseInt(x)));

let line1 = line[0];
let line2 = line[1];

const numArr = line2.map(e => { const a = e - line1[1]; return a > 0 ? a : -a }).sort((a, b) => a - b);
if (numArr.length <= 1) console.log(numArr[0]);
else {
    let tmp = GCD(numArr[0], numArr[1]);
    for(let i=2; i<numArr.length; i++){
        tmp = GCD(tmp, numArr[i]);
    }
    console.log(tmp);
}

function GCD(a, b) {
    const tmp = a % b;
    if (tmp === 0) return b;
    return GCD(b, tmp);
}