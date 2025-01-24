#include <iostream>

int main()
{
    int N, X;
    int A[110];
    bool answer = false;

    std::cin >> N >> X;
    for (int i = 0; i < N; ++i) { std::cin >> A[i]; }


    for (int i = 0; i < N; ++i)
    {
        if (A[i] == X)
        {
            answer = true;
        }
    }

    if (answer)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No"  << std::endl;
    }
    return 0;
}
