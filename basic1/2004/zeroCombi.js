const readline = require('readline');
rl = readline.createInterface({input : process.stdin, output: process.stdout});

rl.on('line', (input)=>{
    const [input1, input2] = input.split(' ').map(e=>parseInt(e));
    const count2 = countTwo(input1) - countTwo(input1-input2) - countTwo(input2);
    const count5 = countFive(input1) - countFive(input1-input2) - countFive(input2);
    console.log(count5 > count2 ? count2 : count5);
})

rl.on('close', ()=>{
    process.exit();
})

function countFive(N){
    let ret = 0;
    let n = N;
    while(n>4){
        n = parseInt(n/5);
        ret += n;
    }
    return ret;
}

function countTwo(N){
    let ret = 0;
    let n = N;
    while(n>1){
        n = parseInt(n/2);
        ret += n;
    }
    return ret;
}