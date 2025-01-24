#include <iostream>

long long calcFactorial(const long long &N) {
    if (N == 0) {
        return 1;
    } else {
        return N * calcFactorial(N - 1);
    }
}

int main() {
    long long X = 0;
    long long temp = 0;
    long long N = 0;
    std::cin >> X;
    while (1) {
        temp = calcFactorial(N);
        // std::cout << N << ":" << temp << std::endl;
        // if (temp > 100) {
        if (temp > 3LL * 1000000000000000000LL) {
            std::cout << -1 << std::endl;
            break;
        }
        if (X == temp) {
            std::cout << N << std::endl;
            break;
        };
        N++;
    }
    return 0;
}
