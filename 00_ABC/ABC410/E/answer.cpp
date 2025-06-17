#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

void chmax(int &a, int b)
{
    a = max(a, b);
}

int main()
{
    int n, h, m;
    cin >> n >> h >> m;
    vector dp(n + 1, vector<int>(h + 1, -1));
    dp[0][h] = m;

    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        rep(j, h + 1) if (dp[i][j] != -1)
        {
            if (a <= j)
            {
                chmax(dp[i + 1][j - a], dp[i][j]);
            }
            if (b <= dp[i][j])
            {
                chmax(dp[i + 1][j], dp[i][j] - b);
            }
        }
        if (dp[i + 1] == vector<int>(h + 1, -1))
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;

    return 0;
}
