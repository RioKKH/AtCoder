#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> ryori(M);
    for (int i = 0; i < M; ++i)
    {
        int K;
        cin >> K;
        ryori[i].resize(K);
        for (int j = 0; j < K; ++j)
        {
            cin >> ryori[i][j];
            --ryori[i][j]; // 0-indexed に直す
        }
    }

    // 逆リスト
    vector<vector<int>> inv(N);
    for (int i = 0; i < M; ++i)
    {
        for (int ing : ryori[i])
        {
            inv[ing].push_back(i);
        }
    }

    vector<int> rem_bad(M);
    for (int i = 0; i < M; ++i)
    {
        rem_bad[i] = (int)ryori[i].size();
    }

    vector<int> answer(N);
    int total_ok = 0;
    for (int day = 0; day < N; ++day)
    {
        int b;
        cin >> b;
        --b;
        for (int dish : inv[b])
        {
            if (--rem_bad[dish] == 0)
            {
                ++total_ok;
            }
        }
        answer[day] = total_ok;
    }

    for (int x : answer)
    {
        cout << x << "\n";
    }
}
