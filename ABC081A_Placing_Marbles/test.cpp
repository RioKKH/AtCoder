#include <iostream>
// #include <bitset>

const unsigned int S1 = (1 << 2);

int main()
{
    //unsigned int a = 101;
    //std::cout << std::bitset<3>(a) << std::endl;
    //std::cout << (((std::bitset<3>(a) & std::bitset<3>(S1))) >> 2) << std::endl;
    int a = 211;
    int s1 = a / 100;
    int s2 = (a - 100*s1) / 10;
    int s3 = (a - 100*s1 - 10*s2);
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    std::cout << s3 << std::endl;
}
