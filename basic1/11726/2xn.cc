#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int DP[n+1];
    DP[1] = 1;
    DP[2] = 2;
    for(int i=3; i <=n; i++){
         DP[i] = (DP[i-1] + DP[i-2])%10007;   
    }
    cout << DP[n];
    return 0;
}