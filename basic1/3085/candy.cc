#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int retMax(string board[], int i, int j, int N);

int main(){
    int answer = 0;
    int N;
    cin >> N;
    string r[N];
    for(int i=0; i<N; i++){
        cin >> r[i];
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(answer == N) { cout << answer; return 0;}
            if(j != N-1) {
            swap(r[i][j],r[i][j+1]);
            answer = max(retMax(r,i,j,N),answer);
            swap(r[i][j],r[i][j+1]);
            }
            if(i == N-1) continue;
            swap(r[i][j],r[i+1][j]);
            answer = max(retMax(r,i,j,N),answer);
            swap(r[i][j],r[i+1][j]);
           
        }
    }
    cout << answer;
    return 0;
}


int retMax(string board[], int i, int j, int N){
    int len;
    int maxlen = 0;
    char cur;
    for(int a=i; a<i+2 && a<N; a++){
        cur = board[a][0];
        len = 1;
        for(int b=1; b<N; b++){
            if(cur == board[a][b]) len++;
            else { maxlen = max(maxlen, len); len=1; cur=board[a][b];}
        }
        maxlen = max(maxlen, len);
    }
    for(int b=j; b<j+2 && b<N; b++){
        cur = board[0][b];
        len = 1;
        for(int a=1; a<N; a++){
            if(cur == board[a][b]) len++;
            else { maxlen = max(maxlen, len); len=1; cur=board[a][b];}
        }
        maxlen = max(maxlen, len);
    }
    return maxlen;
}