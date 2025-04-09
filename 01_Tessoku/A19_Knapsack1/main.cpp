#include <iostream>
#include <algorithm>

/**
 * 以下のコマンドを実行して、メモリ制限を緩和すること
 * ulimit -s unlimited
 */

int main()
{
    long long N, W, w[109], v[109];
    long long dp[109][100009];

    // 入力と配列の初期化
    std::cin >> N >> W;
    for (int i = 1; i <= N; i++)
    {
        std::cin >> w[i] >> v[i];
    }
    for (int i = 0; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            // dp[i][j] = -1LL;
            dp[i][j] = -1'000'000'000'000'000LL;
        }
    }

    // 動的計画法
    dp[0][0] = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (j < w[i])
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = std::max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
            }
        }
    }

    // 答えの出力
    long long Answer = 0;
    for (int i = 0; i <= W; i++)
    {
        Answer = std::max(Answer, dp[N][i]);
    }
    std::cout << Answer << std::endl;

    return 0;
}
