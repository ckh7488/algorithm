
const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

rl.on('line', function(line) {
  let N = parseInt(line)
  const cols = Array(N)
  let ret = 0

  setQueen(0)
  console.log(ret)

  function setQueen(idx){
      if (idx === N) { ret++; return;}
      for (let i=0; i<N; i++){
          cols[idx] = i;
          if(isPossible(idx)){
              setQueen(idx+1)
          }
      }
  
  }
  
  
  function isPossible(idx){
      for (let i=0; i<idx; i++){
          if (cols[i] === cols[idx]) return false
          if (Math.abs(cols[i]-cols[idx]) === idx - i) return false
      }
      return true
  }
  
  rl.close();
}).on("close", function() {
  process.exit();
});



