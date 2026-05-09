#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> results;

    // 2^M通りの全パターンを試す
    for (int bit = 0; bit < (1 << M); bit++)
    {
        vector<int> selected;

        // 各ビットをチェックする
        for (int i = 0; i < M; i++)
        {
            if (bit & (1 << i)) // i番目のビットが1ならば
            {
                selected.push_back(i + 1); // i+1を選ぶ  1-indexed
            }
        }

        // ちょうどN個選ばれているかチェック
        if (static_cast<int>(selected.size()) == N)
        {
            results.push_back(selected);
        }
    }

    // 辞書順でソートする
    sort(results.begin(), results.end());

    // 出力する
    for (const auto &seq : results)
    {
        for (int i = 0; i < N; i++)
        {
            cout << seq[i];
            if (i < N - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
