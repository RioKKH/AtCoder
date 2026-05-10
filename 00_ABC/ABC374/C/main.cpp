#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> K(N);
    for (int i = 0; i < N; i++)
    {
        cin >> K[i];
    }

    // 2^N通りの全パターンを試す
    long long min_of_max = LONG_LONG_MAX;
    for (int bit = 0; bit < (1 << N); bit++)
    {
        vector<int> selected;

        // 各ビットをチェックする
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i))
            {
                selected.push_back(i);
            }
        }

        // ビットが立っているグループと立っていないグループの和を求める
        long long sum_of_A = 0; // bitが1のグループ
        long long sum_of_B = 0; // bitが0のグループ
        for (int i = 0; i < N; i++)
        {
            if (bit & (1 << i)) // i番目のビットが1ならばA
            {
                sum_of_A += K[i];
            }
            else // i番目のビットが0ならばB
            {
                sum_of_B += K[i];
            }
        }
        min_of_max = min(min_of_max, max(sum_of_A, sum_of_B));
        // cout << sum_of_A << " " << sum_of_B << " " << min_of_max << endl;
    }
    cout << min_of_max << endl;

    return 0;
}
