#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <functional>

#define INT_MAX 987654321

using namespace std;

typedef pair<int,int> pii;

int Vertices[20001];
vector<pair<int,int>> Edges[20001];

bool comp(pii a, pii b) {
        if(a.second < b.second){return true;} 
        return false;
    };

int main(){
    // init
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    //get input
    int V, E;   cin >> V >> E;
    int startV; cin >> startV;
    for(int i=0; i<E; i++){
           int startV, EndV, Weight; cin >> startV >> EndV >> Weight;
           Edges[startV].push_back({EndV,Weight});
           
    }
    for(int i=1; i<=V; i++){
        Vertices[i] = INT_MAX;   
    }
 
    //pq
    priority_queue<pii, vector<pii>, function<bool(pii, pii)>> pq(comp);
    pq.push({startV, 0});
    Vertices[startV] = 0;
    
    // dijk
    while(!pq.empty()){
        pair<int,int> cur = pq.top(); pq.pop();
        int curV = cur.first; int curD = -cur.second;
        if(curD > Vertices[curV]) continue;
        for(auto p : Edges[curV]){
            int nextV = p.first; int nextD = p.second;
            int distanceSum = curD+nextD;
            if(Vertices[nextV] > distanceSum) {
                Vertices[nextV] = distanceSum;
                pq.push({nextV,-distanceSum});
            }
                
        }
    }
    
    for(auto i=1; i<=V; i++){
        if(Vertices[i] == INT_MAX) cout << "INF" << '\n';
        else cout << Vertices[i] << '\n';
    }
    
    return 0;
}
    