#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s1 = "abc";
    std::string s2 = "ABC";
    std::string s3 = "abcd";

    if (s1 < s2)
    {
        std::cout << "s1 < s2 is correct." << std::endl;
    }
    else
    {

        std::cout << "s1 < s2 is not correct." << std::endl;
    }

    (s1 < s3) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;
    (s1 > s3) ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;

    return 0;
}
