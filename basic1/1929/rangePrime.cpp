#include <iostream>

using namespace std;

int main()
{
    int n1;
    int n2;
    cin >> n1 >> n2;
    bool mem[n2] = {true};

    for (int i = 2; i <= n2; i++)
    {
        if (mem[i - 1] == true)
        {
            continue;
        }
        if (i >= n1)
        {
            cout << i << '\n';
        }
        for (int t = i + i; t <= n2; t += i)
        {
            mem[t - 1] = true;
        }
    }
    return 0;
}
