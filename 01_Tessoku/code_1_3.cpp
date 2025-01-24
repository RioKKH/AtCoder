#include <iostream>
#include <bitset>

int main()
{
    int a, b, c, d;
    // std::cin >> a >> b;
    a = 1;
    b = 2;
    c = 4;
    d = 8;

    std::cout << std::bitset<4>(a) << std::endl;
    std::cout << std::bitset<4>(b) << std::endl;
    std::cout << std::bitset<4>(c) << std::endl;
    std::cout << std::bitset<4>(d) << std::endl;

    std::cout << "a AND b = " << std::bitset<4>(a & b) << std::endl; // a AND b
    std::cout << "a OR  b = " << std::bitset<4>(a | b) << std::endl; // a OR  b
    std::cout << "a XOR b = " << std::bitset<4>(a ^ b) << std::endl; // a XOR b

    return 0;
}
