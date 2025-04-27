#include <bits/stdc++.h>
#include <unordered_set>

using namespace std;

int main()
{
    long long N, M, Q;
    long long X;
    long long Y;
    // N: ユーザー数
    // M: コンテストページ数
    // Q: クエリ数
    // X: ユーザーID
    // Y: コンテストID

    std::cin >> N >> M >> Q;

    // 全コンテストページを許可されたユーザー管理用のvector
    std::vector<bool> full(N + 1, false);

    // 個別コンテストページ付与管理用のvector
    std::vector<unordered_set<int>> indiv(N + 1);

    int top = 0;
    for (long long i = 0; i < Q; i++)
    {
        std::cin >> top;
        if (top == 1)
        {
            std::cin >> X >> Y;
            if (!full[X])
            {
                indiv[X].insert(Y);
            }
        }
        else if (top == 2)
        {
            std::cin >> X;
            full[X] = true;
            indiv[X].clear(); // 不要なのでメモリ解放
        }
        else if (top == 3)
        {
            std::cin >> X >> Y;
            bool ok = full[X] || indiv[X].find(Y) != indiv[X].end();
            std::cout << (ok ? "Yes\n" : "No\n");
        }
    }
    return 0;
}
