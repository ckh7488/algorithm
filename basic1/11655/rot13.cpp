#include <iostream>

using namespace std;

int main(){
    string str;
    getline(cin, str);
    for(auto c : str){
        if('a'<= c)
        {
            if(c < 'a'+13)
            {
                cout << (char)(c+13);
            }
            else 
            {
                cout << (char)(c-13);
            }
        }
        else if('A' <= c)
        {
            if(c < 'A'+13)
            {
                cout << (char)(c+13);
            }
            else
            {
                cout << (char)(c-13);
            }
        }
        else
        {
            cout << c;
        }
    }

    return 0;
}