#include <iostream>

int main()
{
    int D, N;
    int *L, *R, *F, *A;

    std::cin >> D >> N;
    // std::cout << D << " " << N << std::endl;
    L = (std::int32_t *)malloc(sizeof(std::int32_t) * (N + 10));
    R = (std::int32_t *)malloc(sizeof(std::int32_t) * (N + 10));
    F = (std::int32_t *)malloc(sizeof(std::int32_t) * (D + 10));
    A = (std::int32_t *)malloc(sizeof(std::int32_t) * (D + 10));

    for (int i = 1; i <= N; i++) std::cin >> L[i] >> R[i];

    for (int i = 1; i <= N; i++)
    {
        F[L[i]] += 1; 
        F[R[i] + 1] -= 1;
    }

    A[0] = 0;
    for (int d = 1; d <= D; d++)
    {
        A[d] = A[d - 1] + F[d];
    }

    for (int d = 1; d <= D; d++)
    {
        std::cout << A[d] << std::endl;
    }

    return 0;
}
