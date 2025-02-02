#include <bits/stdc++.h>

int main()
{
    int N, M;
    std::cin >> N >> M;
    std::vector<std::string> S(N), T(M);

    // こんな読み込み方もできるらしい！
    for (auto &x : S)
    {
        std::cin >> x;
    }
    for (auto &x : T)
    {
        std::cin >> x;
    }

    return 0;
}
