#include <iostream>

int main() {
    int X;
    int PRO = 0;
    int SUM = 0;
    std::cin >> X;

    for (int LHS = 1; LHS <= 9; LHS++) {
        for (int RHS = 1; RHS <= 9; RHS++) {
            PRO = LHS * RHS;
            if (PRO != X) {
                SUM += PRO;
            }
        }
    }
    std::cout << SUM << std::endl;
    return 0;
}
