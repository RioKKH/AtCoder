#include <iostream>
#include <vector>

int main() {
    int N, M;
    std::cin >> N >> M;

    std::vector<int> A(M), B(M);
    for (int i = 0; i < M; i++) {
        std::cin >> A.at(i) >> B.at(i);
    }

    return 0;
}
