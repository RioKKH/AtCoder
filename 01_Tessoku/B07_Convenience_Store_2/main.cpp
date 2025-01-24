#include <iostream>

int N, T;
int L[500009];
int R[500009];
int Answer[500009];
int B[500009];

// いもす法
int main()
{
    std::cin >> T >> N;
    // load data from stdin to the arrays.
    for (int i = 1; i <= N; i++) std::cin >> L[i] >> R[i];

    // initialize the array of B
    for (int t = 0; t <= T; t++) B[t] = 0;

    // conduct imosu method
    for (int i = 1; i <= N; i++)
    {
        B[L[i]] += 1;
        B[R[i]] -= 1; // 時刻t + 0.5での集計値なのでR[i]としてよい
    }

    // Calculate aggregation sum.
    Answer[0] = B[0];
    for (int t = 1; t <= T; t++)
    {
        Answer[t] = Answer[t-1] + B[t];
    }

    // print out
    for (int t = 0; t < T; t++)
    {
        std::cout << Answer[t] << std::endl;
    }

    return 0;
}
