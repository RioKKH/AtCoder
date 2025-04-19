#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    std::cin >> N >> M;
    std::vector<std::vector<int>> pos(M, std::vector<int>(2, 0));

    for (int i = 0; i < M; ++i)
    {
        std::cin >> pos[i][0];
        std::cin >> pos[i][1];
    }

    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            std::cout << pos[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}
