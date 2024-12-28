#include <atcoder/dsu>
#include <iostream>

void show1(const std::vector<int> &V) {
    for (const auto &v : V) {
        std::cout << v << std::endl;
    }
}

void show3(const std::vector<int> &V1, const std::vector<int> &V2,
           const std::vector<int> &V3) {
    for (int i = 0; i < int(V1.size()); i++) {
        std::cout << V1.at(i) << " " << V2.at(i) << " " << V3.at(i)
                  << std::endl;
    }
}

int main() {
    int N, Q;
    std::cin >> N >> Q;
    // std::vector<int> t(Q), u(Q), v(Q);

    // サイズNのUnion-Findを宣言する
    atcoder::dsu uf(N);

    // クエリ処理
    int type, u, v;
    for (int i = 0; i < Q; ++i) {
        std::cin >> type >> u >> v;
        if (type == 1) {
            std::cout << (uf.same(u, v) ? 1 : 0) << std::endl;
        } else {
            uf.merge(u, v);
        }
    }

    // show3(t, u, v);

    return 0;
}
