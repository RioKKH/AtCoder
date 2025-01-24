#include <iostream>

int H, W, Q;
int X[1509][1509];
int Z[1509][1509];
int A[10009];
int B[10009];
int C[10009];
int D[10009];

// 二次元いもす法
int main()
{
    // 入力
    // Xが元データ。2次元累積和をメモするのがZ
    std::cin >> H >> W;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            std::cin >> X[i][j];
        }
    }
    
    // 配列A, B, C, Dの初期化
    std::cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        std::cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    // 配列Zの初期化
    for (int i = 0; i <= H; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            Z[i][j] = 0;
        }
    }

    // 横方向に累積和をとる
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            Z[i][j] = Z[i][j - 1] + X[i][j];
        }
    }

    // 縦方向に累積和をとる
    for (int j = 1; j <= W; j++)
    {
        for (int i = 1; i <= H; i++)
        {
            Z[i][j] = Z[i - 1][j] + Z[i][j];
        }
    }

    // 答えを求める
    for (int i = 1; i <= Q; i++)
    {
        std::cout << Z[C[i]][D[i]] + Z[A[i]-1][B[i]-1] - Z[A[i]-1][D[i]] - Z[C[i]][B[i]-1] << std::endl;
    }

    return 0;
}

