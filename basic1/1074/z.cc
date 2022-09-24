#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int zFun(int len, int r, int c, int count){
    if(len == 1 ) return count;
    int div = len/2;
    int nr = r;
    int nc = c;
    int num = 0;
    if((r/div)%2 == 1) {num+=2; nr = r-div;}
    if((c/div)%2 == 1) {num+=1; nc = c-div;}
    return zFun(div, nr, nc, count+num*(div*div));
}

int main(){
    int N, r, c;
    cin >> N >> r >> c;
    int squareLen = pow(2,N);
    
    cout << zFun(squareLen, r, c, 0);
    
    return 0;
}

