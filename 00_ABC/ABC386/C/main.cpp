#include <iostream>
#include <string>

void show(const auto &K, const auto &S, const auto &T) {
    std::cout << K << std::endl;
    std::cout << S << std::endl;
    std::cout << T << std::endl;
    return;
}

int main() {
    int K = 0;
    std::string S, T;
    bool is_same_size = false;

    std::cin >> K;
    std::cin >> S;
    std::cin >> T;
    // show(K, S, T);

    int diff = S.size() - T.size();
    if (std::abs(diff) > 1) {
        std::cout << "No" << std::endl;
        return 0;
    } else if (std::abs(diff) == 1) {
        is_same_size = false;
    }
    is_same_size = true;

    int idx_S = 0;
    int idx_T = 0;
    int num_of_difference = 0;
    if (S.size() > T.size()) {
        for (int i = 0; i < T.size(); i++) {
            if (S.at(idx_S) == T.at(idx_T)) {
                idx_S++;
                idx_T++;
            } else {
                if (is_same_size) {
                    idx_S++;
                    num_of_difference++;
                } else {
                    std::cout << "No" << std::endl;
                }
            }
        }
    } else if (S.size() == T.size()) {
        for (int i = 0; i < S.size(); i++) {
            if (S.at(i) == T.at(i)) {
                continue;
            } else {
                num_of_difference++;
            }
        }
    } else if (S.size() < T.size()) {
        for (int i = 0; i < S.size(); i++) {
            if (S.at(idx_S) == T.at(idx_T)) {
                idx_S++;
                idx_T++;
            } else {
                if (is_same_size) {
                    idx_T++;
                    num_of_difference++;
                } else {
                    std::cout << "No" << std::endl;
                }
            }
        }
    }
    if (num_of_difference <= K) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}
