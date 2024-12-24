#include <atcoder/dsu>
#include <iostream>
#include <vector>

void show(const std::vector<int> &V) {
    for (const auto &v : V) {
        std::cout << v << std::endl;
    }
}

int main() {
    int N, Q;
    std::cin >> N >> Q;
    std::vector<int> t(Q), u(Q), v(Q);

    for (int i = 0; i < Q; i++) {
        std::cin >> t.at(i) >> u.at(i) >> v.at(i);
    }

    show(t);
    show(u);
    show(v);

    return 0;
}
