#include <iostream>

using namespace std;

int main(){
    string s;
    while(getline(cin, s))
    {
        int res[4] = {0};
        for(auto c : s)
        {
            if('a' <= c && c <= 'z')
            {
                res[0]++;
            }
            else if('A' <= c && c <= 'Z')
            {
                res[1]++;
            }
            else if ('0' <= c && c <= '9')
            {
                res[2]++;
            }
            else if (c == ' ')
            {
                res[3]++;
            }
        }
        cout << res[0] << ' ' << res[1] << ' ' <<  res[2] << ' ' <<  res[3] << endl;
    }

    return 0;
}