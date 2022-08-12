#include <iostream>

using namespace std;

int main(){
    string input;
    int charArr[26] = {0};


    getline(cin, input);

    for(auto c : input){
        charArr[c-97]++;
    }

    for(auto alp : charArr){
        cout << alp << " " ;
    }

    return 0;
}