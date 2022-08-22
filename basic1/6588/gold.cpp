#include <iostream>

using namespace std;

int main()
{
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool eratos[1000001] = {1, 1};
    for (int i = 2; i < 1000001; i++)
    {
        if (eratos[i] == 0)
        {
            for (int j = i + i; j < 1000001; j = i + j)
            {
                eratos[j] = 1;
            }
        }
    }

    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        for (int k = 2; n / 2 >= k; k++)
        {
            int tmp = n - k;
            if (eratos[k] == 0 && eratos[tmp] == 0)
            {
                cout << n << " = " << k << " + " << tmp << "\n";
                break;
            }
        }
    }
    return 0;
}