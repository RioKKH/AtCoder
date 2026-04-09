#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print_vector(const vector<T> &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i];
        if (i < size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    int N, D;
    cin >> N >> D;
    vector<string> S(N);
    for (auto &s : S)
    {
        cin >> s;
    }

    int ans = 0, cur = 0;
    for (int j = 0; j < D; j++)
    {
        bool can = true;
        for (int i = 0; i < N; i++)
        {
            if (S[i][j] != 'o')
            {
                // S[i][j] == 'o' --> true(1)
                // S[i][j] != 'o' --> false(0)
                can = false;
            };
        }
        if (can)
        {
            cur++; // 'o'が続いている場合
        }
        else
        {
            cur = 0; // 'x'が出て'o'が途切れた場合
        }
        ans = max(ans, cur);
    }
    cout << ans << endl;
    return 0;
}
