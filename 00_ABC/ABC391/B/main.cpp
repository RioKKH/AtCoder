#include <iostream>
#include <vector>

// . --> 白色
// # --> 黒色

int show(const char **U, const int V)
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            std::cout << U[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}

int main()
{
    int N, M;
    std::cin >> N >> M;
    // std::cout << N << std::endl;
    // std::cout << M << std::endl;

    std::vector<std::vector<char>> S(N, std::vector<char>(N));
    std::vector<std::vector<char>> T(N, std::vector<char>(N));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cin >> S[i][j];
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            std::cin >> T[i][j];
        }
    }

    // std::cout << "start of loop" << std::endl;
    for (int a = 0; a <= N - M; a++)
    {
        for (int b = 0; b <= N - M; b++)
        {
            bool match = true;
            for (int i = 0; i < M; i++)
            {
                for (int j = 0; j < M; j++)
                {
                    if (S[a + i][b + j] != T[i][j])
                    {
                        match = false;
                        break;
                    }
                }
                if (!match)
                    break;
            }
            if (match)
            {
                std::cout << (a + 1) << " " << (b + 1) << std::endl;
                return 0;
            }
        }
    }
    // std::cout << "end of loop" << std::endl;
    return 0;
}
