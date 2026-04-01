#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string s = "c0Ba5Ab3D";
    std::cout << s << std::endl;
    sort(s.begin(), s.end());
    std::cout << s << std::endl;

    return 0;
}
