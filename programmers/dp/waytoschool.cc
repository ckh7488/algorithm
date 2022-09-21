#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    vector<vector<int>> map(m+1,vector<int>(n+1));
    for(auto p : puddles){
        map[p[0]][p[1]] = -1;
    }
    map[1][1] = 1;
    int l,u;
    for(int i=1; i<m+1; i++){
        for(int j=1; j<n+1; j++){
            l=0; u=0;
            if(map[i][j]) continue;
            if(map[i][j-1] > -1) u = map[i][j-1];
            if(map[i-1][j] > -1) l = map[i-1][j];
            map[i][j] += (u+l)%1000000007;
            
        }
    }
    
    
    return (map[m][n]);