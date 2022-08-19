#include <iostream>

using namespace std;

void Eratosthenes(int n, bool *mem)
{
    for (int i = 2; i < n; i++)
    {
        if (mem[i-1] == true)
        {
            continue;
        }
        for (int t = i + i; t <= n; t += i)
        {
            mem[t-1] = true;
        }
    }
    return;
}

int main()
{
    string n;
    string tmp;
    bool mem[1000] = {true};
    int res = 0;

    Eratosthenes(1000, mem);

    cin >> n;
    for (int i = 0; i < stoi(n); i++)
    {
        cin >> tmp;
        if (!mem[stoi(tmp) - 1])
        {
            res++;
        }
    }
    cout << res;
    return 0;
}
