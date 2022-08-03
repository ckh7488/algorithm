#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string laserStr;

    getline(cin, laserStr);

    int totNo = 0;
    int tmpNo = 0;
    int lpNum = 0;
    bool isLeftP = false;

    for(char i : laserStr)
    {
        if(i == '(')
        {
            lpNum++;
            isLeftP = true;
        }
        if(i==')')
        {
            lpNum--;
            if(isLeftP)
            {
                totNo += lpNum;
                isLeftP = false;
                continue;
            }
            totNo++;
        }
        
    }
    cout << totNo;


    return 0;
}