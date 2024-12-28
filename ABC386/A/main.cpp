#include <iostream>
#include <set>

int main() {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;
    std::set<int> st{A, B, C, D};

    if (st.size() == 2) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}
