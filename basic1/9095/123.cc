#include <iostream>
using namespace std;
int main(){
    int DP[12] = {0,1,2,4};    
    int n, q;
    cin >> n;
    
    for(int i=4; i<12; i++){
        DP[i] = DP[i-1] + DP[i-2] + DP[i-3];
    }
    while (cin >> q){
        cout << DP[q] << '\n';
    }
    return 0;
}