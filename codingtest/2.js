let rule = 'abcdefghijklmnopqrstuvwxyz'
let A = 'zyxavbasde'
let B = 'tqwtazjgsr'


function sol(rule,A,B){
    const radix = rule.length;
    let table = {};
    for(let i=0; i<10; i++){
        table[rule[i]] = i;
    }
    for(let i=10; i<radix; i++){
        table[rule[i]] = String.fromCharCode(87+i);
    }
    console.log(rule, radix, table);

    let ans = minsFun(A.split('').map(e=>table[e]).join(''),B.split('').map(e=>table[e]).join(''), radix);
    console.log("A인풋을 26진수 : ",A.split('').map(e=>table[e]).join(''));
    console.log("B인풋을 26진수 : ",B.split('').map(e=>table[e]).join(''));
    console.log("26진수답 : ",ans);
    return ans.toString().split('').map(e=>{
        if(isNaN(e)){return rule[e.charCodeAt()-87]}
        return rule[e]
    }).join('');


}

function minsFun(a,b,radix){
    let ans = parseInt(a,radix) - parseInt(b,radix);
    console.log("10진수로 A-B : ",ans);
    return ans.toString(radix);
}


console.log(sol(rule,A,B));