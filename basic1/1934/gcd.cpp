#include <iostream>

using namespace std;

int GCD(int, int);

int main(){
    string len;
    getline(cin, len);
    string line;
    for(int i=0; i< stoi(len); i++){
        int a,b;
        cin >> a >> b ;
        cout << a*b/GCD(a,b) << endl;
    }

    return 0;
}

int GCD(int a, int b){
    const int tmp = a%b;
    if(tmp == 0) return b;
    return GCD(b,tmp);
}