#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int search(const int &N, const int &X, int *A)
{
    // int answer = 0;
    int L = 1;
    int R = N;
    while (L <= R)
    {
        int M = (L + R) / 2;
        // std::cout << "(L:M:R) = " << L << M << R << std::endl;
        if (X < A[M])
        {
            R = M - 1;
        }
        if (X == A[M])
        {
            return M;
        }
        if (X > A[M])
        {
            L = M + 1;
        }
    }
    return -1; // 答えが見つからなかった場合
}

int main()
{
    int N, X;
    int A[100000];

    std::cin >> N >> X;
    for (int i = 1; i <= N; ++i)
    {
        std::cin >> A[i];
    }
    sort(A, A + N);

    int answer = search(N, X, A);
    std::cout << answer << std::endl;
    return 0;
}
