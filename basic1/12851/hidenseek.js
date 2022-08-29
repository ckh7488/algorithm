const [a, b] =
    require('fs')
        // .readFileSync('/dev/stdin')
        .readFileSync('input')
        .toString()
        .trim()
        .split(' ')
        .map(e => parseInt(e));

if (a === b) { console.log(0); console.log(1); return; }
let myQ = [a];
const visited = Array(100001);
const counts = Array(100001);
visited[a] = true;
counts[a] = 0;
let numRoad = 0;
while (myQ.length > 0) {
    let item = myQ.pop();
    [item - 1, item + 1, item * 2]
        .filter(e => {
            if (-1 < e && e < 100001) return true;
        })
        .forEach(x=>{
            if(x === b ) {
                if(isNaN(counts[x])){ numRoad++; counts[x] = counts[item]+1; return; }
                if(counts[x] > counts[item]) { numRoad++; return ;}
                return;
            }
            if(visited[x]) return;
            visited[x] = true;
            counts[x] = counts[item]+1;
            myQ.unshift(x);
        })
    // console.log(myQ);
}

console.log(counts[b]);
console.log(numRoad);
