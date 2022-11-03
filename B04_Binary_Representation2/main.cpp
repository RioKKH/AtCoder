#include <iostream>
#include <string>

int main()
{
    std::string N;
    std::cin >> N;

    int answer = 0;
    int NumOfDigits = N.size();
    for (int i = 0; i < NumOfDigits; ++i)
    {
        if (N[i] == '0')
        {
        }
        else if (N[i] == '1')
        {
            answer += (1 << (NumOfDigits - 1 - i));
        }
    }

    std::cout << answer << std::endl;
    return 0;
}

    
