#include <iostream>
#include <algorithm>
using namespace std;

void recur(int arr[], int depth, int N, int M, bool visited[]){
    if(depth == M) {
        for(int i=0; i<M; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i=1; i<N+1; i++){
        if(visited[i]) continue;
        visited[i] = true;
        arr[depth] = i;
        recur(arr, depth+1, N,M, visited);
        visited[i] = false;
    }
}

int main(){
    int N,M;
    cin >> N >> M;
    bool visited[N+1] = {false};
    int answer[M];
    recur(answer,0,N,M,visited);

    return 0;
}