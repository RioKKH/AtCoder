#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L, N;
    std::cin >> N >> L;

    // 正三角形になる場合、各点の間隔は必ず L/3となる
    // 間隔d_iは整数に限定されているので、L/3が割り切れない場合には、
    // 答えを持たない事になる。従って0を出力する。
    if (L % 3 != 0)
    {

        std::cout << 0 << std::endl;
        return 0;
    }

    std::vector<long long> d(N);
    std::vector<long long> pos(N); // 単位円上の点を表す
    for (int i = 0; i < N - 1; i++)
    {
        std::cin >> d[i];
        pos[i + 1] = (pos[i] + d[i]) % L;
    }

    int count = 0;
    long long dist = L / 3;

    return 0;
}
