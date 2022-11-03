#include <iostream>

int main()
{
    int N, K;
    std::cin >> N >> K;
    // 3000 * 3000 * 3000 = 27,000,000,000
    // 27G回の計算が必要→家庭用計算機では2秒以内に終わらせることができない

    int answer = 0;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            for (int k = 1; k <= N; ++k)
            {
                if (i + j + k == K)
                {
                    answer += 1;
                }
            }
        }
    }

    std::cout << answer << std::endl;

    return 0;
}

