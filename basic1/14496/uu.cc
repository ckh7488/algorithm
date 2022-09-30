#include <iostream>
#include <queue>

using namespace std;
int main(){
    // init && get input
    queue<pair<int, int>> q;
    int start, goal; cin >> start >> goal;
    int N, M; cin >> N >> M;
    bool transitionArr[1001][1001] = {false};
    vector<bool> visitMap(N, false); 
   
    int fromVertice, toVertice;
    for(int i=0; i<M; i++){
        cin >> fromVertice >> toVertice;
        transitionArr[fromVertice][toVertice] = true;
        transitionArr[toVertice][fromVertice] = true;
    }

    q.push(pair<int, int>(start,0));
    visitMap[start] = true;
    while(!q.empty()){
        pair<int,int> now = q.front(); q.pop();
        if(now.first == goal){
            cout << now.second;
            return 0;
        }
        visitMap[now.first] = true;
        for(int i = 1; i<=N; i++){ 
            if(transitionArr[now.first][i] && !visitMap[i]) {
                q.push(pair<int,int>(i,now.second+1));
                visitMap[i] = true;
            }
        }
    }
    cout << -1;
    return 0;
}