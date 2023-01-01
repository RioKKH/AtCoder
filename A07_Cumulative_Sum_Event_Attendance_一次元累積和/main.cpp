#include <iostream>

int N, D;
int L[100000];
int R[100000];
int Fluctuation[100000];
int Sum[100000];

// 差分を計算した後に累積和をとるテクニックをいもす法という
int main()
{
    std::cin >> D >> N;

    for (int i=0; i < N; i++)
    {
        std::cin >> L[i] >> R[i];
    }

    // 前日比で記録する
    for (int i = 0; i < N; i++)
    {
        Fluctuation[L[i]] += 1;
        Fluctuation[R[i] + 1] -= 1;
    }

    Sum[0] = 0;
    for (int i = 1; i <= D; i++)
    {
        Sum[i] = Sum[i-1] + Fluctuation[i];
    }

    for (int i = 1; i <= D; i++)
    {
        std::cout << Sum[i] << std::endl;
    }

    return 0;
}

