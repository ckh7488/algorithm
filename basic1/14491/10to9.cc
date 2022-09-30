#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int ret = 0;
    int i = 0;
    int X; cin >> X;
    while(X){
       ret += X%9 * pow(10,i);
       X = X/9;
       i++;
    }
    cout << ret;
    return 0;
}