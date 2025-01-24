#include <iostream>

int main()
{
    int A, B;
    bool answer = false;

    std::cin >> A >> B;

    for (int i = A; i <= B; ++i)
    {
        if (100 % i == 0)
        {
            answer = true;
        }
    }

    if (answer) { std::cout << "Yes" << std::endl; }
    else { std::cout << "No" << std::endl; }

    return 0;
}

