const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', function(line) {
    console.log(iterfF(line))
    rl.close();
}).on("close", function() {
  process.exit();
});

function iterfF(str){
    let ans = 0;
    for(let i=0; i<str.length; i++){
        const Arr = failureFunc(str.slice(i));
        const tmpVal = Math.max(...Arr);
        if (tmpVal > ans) ans = tmpVal;
    }
    return ans;
}


// fF function
function failureFunc(str){
    const retArr = Array(str.length)
    retArr[0] = 0
    let j=0;
    for(let i=1; i<str.length; i++){
        while(j>0 && str[j] !== str[i]) j = retArr[j-1]
        if(str[i] === str[j]) retArr[i] = ++j
        else {retArr[i] = 0; j=0;}
    }
    return retArr
}
