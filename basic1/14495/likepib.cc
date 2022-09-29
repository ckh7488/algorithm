#include <iostream>
using namespace std;
int main(){
    // init
    unsigned long memo[120] = {0};
    memo[1] = 1;
    memo[2] = 1;
    memo[3] = 1;
    int N; cin >> N;
    //
    for(int n=4; n<=N; n++){
        memo[n] = memo[n-1] + memo[n-3];
    }
    cout << memo[N];

    return 0;
}