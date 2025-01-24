#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string S, T;
    std::string ans = "No";
    std::cin >> S;
    std::cin >> T;
    std::vector<int> diff;
    // std::cout << "size: " << diff.size() << std::endl;

    if (S == T) {
        ans = "Yes";
    }
    for (int i = 0; i < static_cast<int>(S.size()); i++) {
        if (S[i] != T[i]) {
            if (0 < i) {
                std::swap(S[i - 1], S[i]);
                if (S == T) {
                    ans = "Yes";
                }
                std::swap(S[i - 1], S[i]);
            }
            if (i + 1 < static_cast<int>(S.size())) {
                std::swap(S[i], S[i + 1]);
                if (S == T) {
                    ans = "Yes";
                }
                std::swap(S[i], S[i + 1]);
            }
            break;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}
