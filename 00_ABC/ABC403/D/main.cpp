#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, D;
    std::cin >> N >> D;
    std::vector<int> A(N, 0);
    int AMAX = 0;

    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
        AMAX = std::max(AMAX, A[i]);
    }

    // D == 0の場合
    if (D == 0)
    {
        unordered_set<int> S(A.begin(), A.end());
        std::cout << (N - (int)S.size()) << std::endl;
        return 0;
    }

    // 出現回数を数える
    std::vector<int> cnt(AMAX + 1, 0);
    for (const int &x : A)
    {
        cnt[x]++;
    }

    std::sort(A.begin(), A.end());
    for (const auto &a : A)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    return 0;
}
