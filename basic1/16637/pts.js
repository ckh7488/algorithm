let fs = require('fs');
let input = fs.readFileSync('/dev/stdin').toString().split('\n');

// let inp1 = input[0];
let inp2 = input[1];

solver()

function solver() {
    let ans = -Math.pow(2,31)
    const operatorArr = []
    const numArr = []
    separator(operatorArr, numArr)
    const lockArr = Array(operatorArr.length).fill(0)
    
    function recurFunc(lockArr, oA, nA){
        for(let i=0; i<lockArr.length; i++){
            if(lockArr[i]>0) continue; 
            const OA = [...oA], NA=[...nA], lA = [...lockArr];
            i > 0 ? lA[i-1]++ : null
            i < lA.length-1 ? lA[i+1]++ : null
            lA[i]++
            excute(OA, NA, i, lA)
            recurFunc(lA, OA, NA)
        }
        
        ans = Math.max(ans,excuteAll([...oA],[...nA]));
        // console.log(ans)
        
        
    }
    // console.log(operatorArr,numArr)
    recurFunc(lockArr, operatorArr, numArr)
    console.log(ans)
}

function separator(oA,nA){
    for (let i of inp2) {
        if (isOperator(i)) {
            oA.push(i)
        } else {
            nA.push(parseInt(i))
        }
    }
}


function excuteAll(oA,nA){
    // console.log("end",oA,nA)
    for(let i of oA){
        if(i === "+") {nA[0] = nA[0]+nA[1]; nA.splice(1,1); continue;}
        if(i === "-") {nA[0] = nA[0]-nA[1]; nA.splice(1,1); continue;}
        if(i === "*") {nA[0] = nA[0]*nA[1]; nA.splice(1,1); continue;}
        if(i === "/") {nA[0] = nA[0]/nA[1]; nA.splice(1,1); continue;}
    }
    // console.log(nA)
    return nA[0]
}

function isOperator(c) {
    if (c === "+" || c === "-" || c === "*" || c === "/") {
        return true
    }
    return false
}

function excute(oA, nA, i, lockArr){
    // console.log("start",nA)
    if(oA[i] === "+") {nA[i]=nA[i]+nA[i+1]; nA.splice(i+1,1); oA.splice(i,1); lockArr.splice(i,1); return;}
    if(oA[i] === "-") {nA[i]=nA[i]-nA[i+1]; nA.splice(i+1,1); oA.splice(i,1); lockArr.splice(i,1); return;}
    if(oA[i] === "*") {nA[i]=nA[i]*nA[i+1]; nA.splice(i+1,1); oA.splice(i,1); lockArr.splice(i,1); return;}
    // if(oA[i] === "/") {nA[i]=nA[i]/nA[i+1]; nA.splice(i+1,1); oA.splice(i,1); lockArr.splice(i,1); return;}
    // console.log("end",nA)
}