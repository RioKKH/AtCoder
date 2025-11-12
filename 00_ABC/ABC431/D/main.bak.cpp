#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<tuple<int, long long, long long>> parts(N + 1);
    for (int i = 1; i < N + 1; i++)
    {
        int w;
        long long h, b;
        cin >> w >> h >> b;
        parts[i] = make_tuple(w, h, b);
    }

    // Wi + Biの降順でソートする
    sort(parts.begin() + 1, parts.end(), [](auto &a, auto &b)
         { return get<0>(a) + get<2>(a) > get<0>(b) + get<2>(b); });

    vector<int> sum(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        sum[i] = sum[i - 1] + get<0>(parts[i]);
    }

    // ここからDP
    vector<vector<long long>> dp(N + 1, vector<long long>(sum[N] + 1, -1e18));
    dp[0][0] = 0; // 0個の部品、頭の重さ0の時、嬉しさは0

    for (int i = 1; i <= N; i++)
    {
        int W = get<0>(parts[i]);
        long long H = get<1>(parts[i]);
        long long B = get<2>(parts[i]);

        for (int w = 0; w <= sum[i]; w++)
        {
            if (2 * w > sum[i])
                continue;

            if (w >= W && dp[i - 1][w - W] > -1e18)
            {
                dp[i][w] = max(dp[i][w], dp[i - 1][w - W] + H);
            }

            if (dp[i - 1][w] > -1e18)
            {
                dp[i][w] = max(dp[i][w], dp[i - 1][w] + B);
            }
        }
    }

    long long ans = 0;
    for (int w = 0; w <= sum[N]; w++)
    {
        if (2 * w <= sum[N])
        {
            ans = max(ans, dp[N][w]);
        }
    }

    cout << ans << endl;

    return 0;
}
