#include <iostream>
#include <algorithm>

int main()
{
    int N;
    int h[100009] = {};
    int dp[100009] = {};

    // データ入力
    std::cin >> N;
    for (int i = 1; i <= N; i++)
    {
        std::cin >> h[i];
    }

    // 動的計画法
    dp[1] = abs(h[1] - h[1]);
    dp[2] = dp[1] + abs(h[1] - h[2]);
    for (int i = 3; i <= N; i++)
    {
        dp[i] = std::min(dp[i - 1] + abs(h[i - 1] - h[i]),
                         dp[i - 2] + abs(h[i - 2] - h[i]));
    }

    // 結果出力
    std::cout << dp[N] << std::endl;
    return 0;
}
