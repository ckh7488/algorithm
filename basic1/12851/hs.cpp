#include <iostream>
#include <queue>
using namespace std;

#define Max 100000;

int main()
{
    // init
    int visited[100001] = {0};
    int a, b;
    queue<pair<int,int>> myQ;
    cin >> a >> b;
    myQ.push(make_pair(a,0));
    // get input

    // BFS
    int tmp;
    int step;
    int numStep = -1;
    int cnt = 0;
    while (!myQ.empty())
    {
        tmp = myQ.front().first;
        step = myQ.front().second;
        myQ.pop();
        if( numStep != -1 && numStep < step ) { continue; }
        if( tmp == b ) { cnt++; numStep = step; continue; }
        if( 0 > tmp || tmp > 100000 ){ continue; }
        if( visited[tmp] > 0 && step > visited[tmp]) { continue; }
        visited[tmp] = step;
        if (cnt == 0)
        {
            myQ.push(make_pair(tmp - 1,step+1));
            myQ.push(make_pair(tmp + 1,step+1));
            myQ.push(make_pair(tmp * 2,step+1));
        }
    }

    cout << numStep << '\n' << cnt;

    return 0;
}