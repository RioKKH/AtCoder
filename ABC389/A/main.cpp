#include <iostream>
#include <string>

int main() {
    std::string S;
    std::cin >> S;
    std::cout << (S[0] - '0') * (S[2] - '0') << std::endl;

    return 0;
}
