#include <iostream>

int main()
{
    int N; // N枚のカード
    int K; // この合計値をカードの組み合わせで作ることができるか
    int A[22]; // i枚目のカードに書かれた数値はA[i]
    std::cin >> N >> K;
    for (int i = 0; i < N; ++i) std::cin >> A[i];

    // bit全探索を用いる方法
    // Bit Brute-force search  全探索は書かれた整数n合計 / Answerは現時点での答え
    bool Answer = false;

    // N枚のカードの組み合わせを整数値に対応させた場合の上限は2^{N-1}になるので
    // forループの脱出条件を2^{N}とする。
    for (int i = 0; i < (1 << N); ++i)
    {
        // 1
        // 10
        // 100
        // 100 ...と桁を増やしていく
        int sum = 0;
        for (int j = 0; j < N; ++j) //
        {
            int divisor = (1 << j);
            // ビットが立っているかどうかを確認する。ビットが立っていればi番目の数値をsumに足しこむ
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
