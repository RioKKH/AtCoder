#include <iostream>

int main()
{

    int N, Q;
    int *A, *L, *R, *S;

    std::cin >> N >> Q;
    A = (int *)malloc(sizeof(int) * (N+1)); // 0日目を考慮するために[0, N]の配列を確保する
    S = (int *)malloc(sizeof(int) * (N+1));

    L = (int *)malloc(sizeof(int) * Q);
    R = (int *)malloc(sizeof(int) * Q);

    A[0] = 0; // 0日目の参加者は当然0人
    for (int i = 1; i <= N; ++i) { std::cin >> A[i]; }
    for (int i = 0; i <  Q; ++i) { std::cin >> L[i] >> R[i]; }

    // 累積和を計算する
    S[0] = 0; // 0日目までの累積参加者は当然0人
    for (int i = 1; i <= N; ++i)
    {
        S[i] = A[i] + S[i-1];
    }

    for (int i = 0; i < Q; ++i)
    {
        std::cout << S[R[i]] - S[L[i] - 1] << std::endl;
    }

    free(A);
    free(L);
    free(R);
}
