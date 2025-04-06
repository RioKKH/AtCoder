#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; // サイコロの数
    cin >> N;
    vector<int> K(N);
    vector<unordered_map<int, int>> freq(N);

    for (int i = 0; i < N; i++)
    {
        cin >> K[i];
        for (int j = 0; j < K[i]; j++)
        {
            int x;
            cin >> x;
            freq[i][x]++;
        }
    }

    double ans = 0.0;
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++) // サイコロ(i, j)の組合せを全探索する
        {
            double prob = 0.0;
            // 小さいほうの辞書を走査して共通のキーのみ調べる
            if (freq[i].size() < freq[j].size())
            {
                for (auto &entry : freq[i])
                {
                    int v = entry.first;
                    int cnt_i = entry.second;
                    // サイコロ j にも v があれば
                    if (freq[j].count(v))
                    {
                        int cnt_j = freq[j][v];
                        prob += (double)cnt_i / K[i] * (double)cnt_j / K[j];
                    }
                }
            }
            else
            {
                for (auto &entry : freq[j])
                {
                    int v = entry.first;
                    int cnt_j = entry.second;
                    if (freq[i].count(v))
                    {
                        int cnt_i = freq[i][v];
                        prob += (double)cnt_i / K[i] * (double)cnt_j / K[j];
                    }
                }
            }
            ans = max(ans, prob);
        }
    }

    cout << fixed << setprecision(15) << ans << "\n";

    return 0;
}
