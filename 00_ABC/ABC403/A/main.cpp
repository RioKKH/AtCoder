#include <iostream>

int main()
{
    int N;
    int temp = 0;
    int sum = 0;
    std::cin >> N;
    for (int i = 1; i <= N; i++)
    {
        std::cin >> temp;
        if ((i % 2) == 1)
        {
            sum += temp;
        }
    }
    std::cout << sum << std::endl;
    return 0;
}
