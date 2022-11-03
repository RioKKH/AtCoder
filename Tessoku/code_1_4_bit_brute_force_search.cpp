#include <iostream>

int main()
{
    int N, K, A[22];
    std::cin >> N >> K;
    for (int i = 0; i < N; ++i) std::cin >> A[i];

    // bit全探索を用いる方法
    // Brute-force search  全探索は書かれた整数n合計 / Answerは現時点での答え
    bool Answer = false;

    for (int i = 0; i < (1 << N); ++i)
    {
        int sum = 0;
        for (int j = 0; j < N; ++j)
        {
            int divisor = (1 << j);
            if ((i / divisor) % 2 == 1) { sum += A[j]; }
        }

        if (sum == K)
        {
            Answer = true;
        }
    }

    if (Answer)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No"  << std::endl;
    }

    return 0;
}
