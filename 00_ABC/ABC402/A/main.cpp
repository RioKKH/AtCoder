#include <iostream>
#include <string>

int main()
{
    std::string S;
    std::cin >> S;
    for (const auto &s : S)
    {
        if (std::isupper(s))
        {
            std::cout << s;
        }
    }
    std::cout << std::endl;
}
