#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

void recurWrapper(char alp[], int L, int C)
{
    char res[L];
    std::function<void(int, int)> recur = [&](int depth, int pos)
    {
        if (depth == L)
        {
            int cons = 0;
            int vowel = 0;
            for (int i = 0; i < L; i++)
            {
                if (res[i] == 'a' || res[i] == 'e' || res[i] == 'i' || res[i] == 'o' || res[i] == 'u')
                    vowel++;
                else
                    cons++;
            }
            if (cons > 1 && vowel > 0)
            {
                for(int i=0; i<L; i++)
                    cout << res[i];
                cout << '\n';
            }
            return;
        }

        for (int i = pos; i < C; i++)
        {
            res[depth] = alp[i];
            recur(depth + 1, i + 1);
        }
    };

    recur(0, 0);
}

int main()
{
    int L, C;
    cin >> L >> C;
    char alp[C];
    for (int i = 0; i < C; i++)
    {
        cin >> alp[i];
    }

    sort(alp, alp + C);
    recurWrapper(alp, L, C);
    return 0;
}