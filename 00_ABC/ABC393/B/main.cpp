#include <bits/stdc++.h>
using namespace std;

/**
 * ABC 393 B - A..B..C
 * これも全探索の問題
 */
int main()
{
    string S;
    cin >> S;

    int cnt = 0;
    int possible_interval = (S.length() % 2 == 0) ? (int)(S.length() / 2 - 1) : (int)(S.length() / 2);

    for (int i = 0; i < (int)S.length(); i++)
    {
        for (int j = 1; j <= possible_interval; j++)
        {
            if (i + j * 2 < (int)S.length() && S[i] == 'A')
            {
                // Aの場合
                if (S[i + j] == 'B' && S[i + j * 2] == 'C')
                {
                    cnt++;
                }
            }
            else
            {
                // A以外の場合
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
