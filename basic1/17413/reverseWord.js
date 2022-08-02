const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', (line) => {
  let ret = '';
  let currentStr = '';
  let state = true;   // true : 태그밖, false : 태그 안.
  
  for(let c of line){
    if(c === "<"){
      ret += revFun(currentStr);
      currentStr = '';
    }
    if(c === ">"){
      ret += currentStr+">";
      currentStr = "";
      continue;
    }
    currentStr += c;
  }
  ret += revFun(currentStr);
  console.log(ret);

  if(line === 'END') rl.close();
})

  .on('close', () => {
    process.exit();
})



const revFun = (str) => {
  return str.split(' ').map(e => [...e].reverse().join('')).join(' ');
}