#include <iostream>

/**
 * これは2次元の動的計画法で、以下の様な表を作って
 * 問題を解くものです。
 * これはカードが３枚で、それぞれ2, 2, 3が書かれて
 * いた場合に合計が7となるような組合せが存在するかを
 * ２次元の動的計画法を用いて解く場合の例になります。
 *
 *          0 1 2 3 4 5 6 7
 * カード0  o x x x x x x x
 * カード1  o x o x x x x x
 * カード2  o x o x o x x x
 * カード3  o x o o o o x o
 */
int main()
{
    int N, S, A[69];
    bool dp[69][10009];

    // 入力
    std::cin >> N >> S;
    for (int i = 1; i <= N; i++)
    {
        std::cin >> A[i];
    }

    // 動的計画法 (i = 0)
    dp[0][0] = true;
    for (int i = 1; i <= S; i++)
    {
        dp[0][i] = false;
    }

    // 動的計画法 (i >= 1)
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j <= S; j++)
        {
            if (j < A[i])
            {
                if (dp[i - 1][j] == true)
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
            if (j >= A[i])
            {
                if (dp[i - 1][j] == true || dp[i - 1][j - A[i]] == true)
                {
                    dp[i][j] = true;
                }
                else
                {
                    dp[i][j] = false;
                }
            }
        }
    }

    // 出力
    if (dp[N][S] == true)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    return 0;
}
