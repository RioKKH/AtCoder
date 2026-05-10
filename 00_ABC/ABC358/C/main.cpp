#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    int answer = INT_MAX;

    // 2^N通りの全パターンを試す
    for (int bit = 0; bit < (1 << N); bit++)
    {
        vector<int> selected; // 選択された売り場

        // 各ビットをチェックする
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i)) // i番目のビットが1ならば
            {
                selected.push_back(i);
            }
        }

        // 選択されたお店のラインナップについてすべての味をカバーするかチェックする
        vector<int> results(M, 0);
        for (const auto &i : selected)
        {
            for (int j = 0; j < M; j++) // 用意された味を確認し...
            {
                if (S[i][j] == 'o')
                {
                    results[j] = 1; // 持っている味については1とする
                }
            }
        }

        bool have_all = true;
        for (int j = 0; j < M; j++)
        {
            if (results[j] == 0)
            {
                have_all = false;
            }
        }

        if (have_all)
        {
            answer = min(answer, static_cast<int>(selected.size()));
        }
    }

    // 全商店を回れば全味がそろうことは問題で保証されている
    // 従って例外処理はせずにanswerをそのまま出力すればよい。
    cout << answer << endl;
    return 0;
}
