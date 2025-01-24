#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

typedef struct MSD {
    int msd;
    int digits;
} MSD;

int getNumber(long n, std::vector<int> &num) {
    long quotient = 0;
    int remainder = 0;
    while (true) {
        quotient = n / 10;
        remainder = n % 10;
#ifdef DEBUG
        std::cout << "quotient: " << quotient << " remainder: " << remainder
                  << std::endl;
#endif
        if (quotient == 0) {
            num.push_back(remainder);
            break; // 商が0になったら終了
        } else {
            num.push_back(remainder);
            n = quotient;
        }
    }
    std::reverse(num.begin(), num.end());
    return 0;
}

bool isSnakeNumber(int num, MSD msd) {
    int prev_digit = msd.msd;
    num /= static_cast<int>(std::pow(10, msd.digits - 1));
    while (num > 0) {
        int current_digit = num % 10;
        if (current_digit >= prev_digit) {
            return false;
        }
        prev_digit = current_digit;
        num /= 10;
    }
    return true;
}

void getMostSignificantDigit(int number, MSD &msd) {
    if (number == 0) {
        return 0;
    }
    msd.digits = static_cast<int>(std::log10(number)) + 1;
    msd.msd = number / static_cast<int>(std::pow(10, msd.digits - 1));
}

void showNumber(const std::vector<int> num) {
    std::cout << "#### DEBUG ####" << std::endl;
    for (const auto &n : num) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return;
}

int main() {
    long L, R;
    std::cin >> L >> R;

    long count = 0;

    for (long num = L; num <= R; num++) {
        MSD msd = {0, 0};
        getMostSignificantDigit(num, msd);
        isSnakeNumber(num, msd) ? count++ : count;
    }
    std::cout << count << std::endl;
    return 0;
}
