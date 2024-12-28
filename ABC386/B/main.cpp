#include <iostream>
#include <string>

void show(std::string S) {
    int size = S.size();
    for (int i = 0; i < size; i++) {
        std::cout << S.at(i) << " ";
    }
    // for (const auto &s : S) {
    //     std::cout << s << " ";
    // }
    std::cout << std::endl;
    return;
}

int main() {
    std::string S;
    std::cin >> S;
    // show(S);
    int size = S.size();
    // show(S);
    int count = 0;
    char curr;
    char next;

    for (int i = 0; i < size; i++) {
        if (i < size - 1) {
            curr = S[i];
            next = S[i + 1];
            if (curr == '0' && next == '0') {
                i++;
                count++;
            } else {
                count++;
            }
        } else {
            count++;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
