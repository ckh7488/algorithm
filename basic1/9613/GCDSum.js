const [T, ...input] = require('fs')
    .readFileSync('/dev/stdin').toString().trim().split('\n');

console.log(input);

function GCD(a, b) {
    const tmp = a % b;
    if (tmp === 0) return b;
    return GCD(b, tmp);
}


function retGCDSum(arr) {
    let ret = 0;
    inp = arr.slice(1).sort((a, b) => a - b);
    for (let i = 0; i < inp.length; i++) {
        for (let j = i + 1; j < inp.length; j++) {
            ret += GCD(inp[i], inp[j]);
        }
    }
    return ret;
}

input.forEach(arr=>{
    console.log(retGCDSum(arr.split(' ').map(e=>parseInt(e))));
})