const input = require('fs').readFileSync('/dev/stdin').toString().split(' ').map(e=>parseInt(e));
const GCD = (a,b)=>{
    const tmp = a%b;
    if(tmp === 0) return b;
    return GCD(b,tmp);
}
const gcd = GCD(input[0],input[1]);
console.log(`${gcd}\n${input[1]*input[0]/gcd}`)