#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    // 上の型から順番に「2進法に変換した値」を決める
    for (int i = 9; i >= 0; --i)
    {
        int divisor = (1 << i); // 2のi乗
        std::cout << (N / divisor) % 2; // 割り算の結果に応じて0または1を出力
    }

    std::cout << std::endl; // 最後に改行する
    return 0;
}
