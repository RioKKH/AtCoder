#include <iostream>
#include <string>

int main()
{
    int N;
    std::string T, A;
    bool flag = false;

    std::cin >> N;
    std::cin >> T;
    std::cin >> A;

    for (int i = 0; i < N; i++)
    {
        if (T[i] == 'o' && A[i] == 'o')
        {
            flag = true;
            break;
        }
    }

    if (flag)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}
