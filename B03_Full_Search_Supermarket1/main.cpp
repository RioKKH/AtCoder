#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    int* A;
    A = (int *)malloc(sizeof(int) * N);

    for (int i = 0; i < N; ++i)
    {
        std::cin >> A[i];
    }

    bool answer = false;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + 1; j < N; ++j)
        {
            for (int k = j + 1; k < N; ++k)
            {
                if (A[i] + A[j] + A[k] == 1000)
                {
                    answer = true;
                }
            }
        }
    }

    if (answer)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    free(A);
    return 0;
}

