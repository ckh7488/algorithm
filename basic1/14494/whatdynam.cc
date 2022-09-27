#include <iostream>
#include <vector>
#include <functional>
using namespace std;

int main(){
    unsigned long mod = 1e9+7;
    int N, M; cin >> N >> M;    
    vector<vector<unsigned long>> acumMap(N+1, vector<unsigned long>(M+1,0));
    for (int y=1; y<=N; y++){
        acumMap[y][1] = 1;
    }
    for ( int x=1; x<=M; x++){
        acumMap[1][x] = 1;
    }

    function<int(int,int)> recurDP = [&](int x, int y)->int{
        if(acumMap[x][y] != 0) return acumMap[x][y];
        acumMap[x][y] = (recurDP(x-1,y)%mod+recurDP(x-1,y-1)%mod+recurDP(x,y-1)%mod)%mod;
        return acumMap[x][y];
    };
    int ret = recurDP(N,M);
    cout << ret;

    return 0;
}