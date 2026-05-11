#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    // データ入力
    int C;
    vector<vector<int>> A(M);

    for (int i = 0; i < M; i++)
    {
        cin >> C;
        A[i].resize(C);
        for (int j = 0; j < C; j++)
        {
            int a;
            cin >> a;
            A[i][j] = a;
        }
    }

    /** デバッグプリント
    for (int i = 0; i < M; i++)
    {
        for (const auto &a : A[i])
        {
            cout << a;
        }
        cout << endl;
    }
    */

    int answer = 0;

    // 2^M通りの全パターンを試す
    for (int bit = 0; bit < (1 << M); bit++)
    {
        set<int> S = {}; // 集合Siの組合せで構成される数値の集合
        for (int i = 0; i < M; i++)
        {
            if (bit & (1 << i)) // i番目のビットが1ならば
            {
                for (const auto &a : A[i])
                {
                    // A[i]に含まれる数字を集合Sに追加する
                    S.insert(a);
                }
            }
        }
        // 1 ~ Nのすべての数字を含んでいる場合
        if (static_cast<int>(S.size()) == N)
        {
            answer++;
        }
    }

    cout << answer << endl;
    return 0;
}
