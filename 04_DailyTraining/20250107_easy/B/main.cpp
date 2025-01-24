#include <iostream>

int main() {
    int X = 0;
    std::cin >> X;

    if (X == 0) {
        std::cout << "No" << std::endl;
    } else if (X % 100 == 0) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}
