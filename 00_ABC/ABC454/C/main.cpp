#include <bits/stdc++.h>
using namespace std;

void dfs(const int &i,
         const vector<vector<int>> &graph,
         vector<bool> &visited,
         int &size)
{
    visited[i] = true;
    size++;

    for (const auto &g : graph[i])
    {
        if (!visited[g])
        {
            dfs(g, graph, visited, size);
        }
    }
}

int main()
{
    int N, M;
    cin >> N >> M;

    // 連結リスト形式でグラフを構築する。
    vector<vector<int>> G(N + 1);
    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        G[A].push_back(B);
        // この問題は有向グラフなのでA -> Bの方向のみ
        // G[B].push_back(A);
    }

    // アイテムについて探索すればよい
    vector<bool> visited(N + 1, false);
    // int max_size = 0;
    // for (int i = 1; i <= N; i++)
    // {
    //     if (!visited[i])
    //     {
    int size = 0;
    // アイテム1からスタートすることが題意より明らか
    dfs(1, G, visited, size);
    //         max_size = max(max_size, size);
    //     }
    // }
    cout << size << endl;
    return 0;
}
