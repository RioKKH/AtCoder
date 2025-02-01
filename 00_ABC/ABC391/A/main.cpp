#include <iostream>

int main()
{
    std::string D;
    std::cin >> D;
    if (D == "N")
        std::cout << "S" << std::endl;
    if (D == "E")
        std::cout << "W" << std::endl;
    if (D == "W")
        std::cout << "E" << std::endl;
    if (D == "S")
        std::cout << "N" << std::endl;
    if (D == "NE")
        std::cout << "SW" << std::endl;
    if (D == "NW")
        std::cout << "SE" << std::endl;
    if (D == "SE")
        std::cout << "NW" << std::endl;
    if (D == "SW")
        std::cout << "NE" << std::endl;

    return 0;
}
