#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n+1];
    int DP[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i+1];
    }
    DP[0] = 0;
    DP[1] = arr[1];
    DP[2] = arr[2] + arr[1];

    for(int i=3; i<=n; i++){
        DP[i] = max(DP[i-3]+arr[i]+arr[i-1], DP[i-2]+arr[i]);
        DP[i] = max(DP[i-1], DP[i]);
    }    

    cout << DP[n];
    return 0;
}