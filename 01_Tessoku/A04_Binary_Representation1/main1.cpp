#include <iostream>
#include <bitset>

int main()
{
    int N;
    std::cin >> N;

    std::cout << std::bitset<10>(N) << std::endl;

    return 0;
}
