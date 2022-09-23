#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void star(int i, int j, int N){
    if((i/(N/3))%3 == 1 && (j/(N/3))%3 == 1) cout << " ";
    else if(N/3 == 1 ) cout << "*";
    else star(i,j, N/3);
}

int main(){
    int N;
    cin >> N;
    vector<vector<int>> board(N,vector<int>(N,0));
    for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                star(i,j,N);
            }
            cout << "\n";
        }
    
    return 0;
}

