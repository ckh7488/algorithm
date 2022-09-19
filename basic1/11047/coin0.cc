#include <iostream>
#include <vector>
using namespace std;
int main(){
    // get input
    int N,K;
    cin >> N >> K;
    vector<int> coins(N);
    for(int i=0; i<N; i++){
        cin >> coins[N-i-1];
    }
    int coinCount[N] = {0};
    // algorithm
    int ans = 0;
    int i = 0;
    int tmp = 0;
    while(ans != K){
        tmp = ans + coins[i];
        if(tmp <= K) { ans = tmp; coinCount[i]++;}
        else i++;
    }
    int ret = 0;
    for(auto x : coinCount){
        ret += x;
    }
    cout << ret;
    return 0;
}