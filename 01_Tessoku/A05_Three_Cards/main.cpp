#include <iostream>

int main()
{
    int N, K;
    std::cin >> N >> K;

    int answer = 0;
    for (int i = 1; i <= N; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            int k = K - i - j;
            if (1 <= k && k <= N)
            {
                answer += 1;
            }
        }
    }

    std::cout << answer << std::endl;

    return 0;
}

