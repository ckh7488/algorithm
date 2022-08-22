#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ret = 1;
    while(n>0){
        ret=ret*n--;
    }
    cout << ret;
    return 0;
}