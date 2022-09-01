#include <iostream>
using namespace std;

int DP[1001] = {0,1,3};

int main(){
    int n;
    cin >> n;
    for(int i=3; i<=n; i++){
        DP[i]=(DP[i-1]+2*DP[i-2])%10007;
    }
    cout << DP[n];
}