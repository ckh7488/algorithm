#include <iostream>

using namespace std;

int main(){
    string input;
    int charArr[26] = { };


    getline(cin, input);

    int counter = 1;
    for(auto c : input){
        if(charArr[c-97] == 0) { charArr[c-97] = counter; };
        counter++;
    }

    for(auto alp : charArr){
        cout << alp-1 << " " ;
    }

    return 0;
}