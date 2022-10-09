#include <iostream>
using namespace std;
int main(){
    int N, M;   cin >> N >> M;
    long long countArr[N] = {0, };
    long long accumArr[N+1] = {0, };
    for(int i=1; i<=N; i++){
        cin >> accumArr[i];
        accumArr[i] += accumArr[i-1]; 
        accumArr[i] %= M;
        countArr[accumArr[i]]++;     
    }
    for(auto i : accumArr){
        cout << i << ", ";
    }
    cout << "\n";
    long long ret = countArr[0];
    for(int i=0; i<N; i++){
        ret+=(countArr[i]*(countArr[i]-1))/2;
    }
    cout << ret;
}