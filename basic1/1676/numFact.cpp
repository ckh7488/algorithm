#include <iostream>
using namespace std;
int main()
{
    int n;
    int ret = 0;
    cin >> n;
    do
    {
        n = n/5;
        ret += n;

    } while (n>=5);
    cout << ret;
    return 0;
}