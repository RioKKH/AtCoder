#include <bits/stdc++.h>
using namespace std;

using WeightedGraph = vector<vector<pair<int, int>>>;

int main()
{
    int N, M;
    cin >> N >> M;
    WeightedGraph G(N);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        G[a - 1].emplace_back(b - 1, w);
    }

    return 0;
}
