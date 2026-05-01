#include <bits/stdc++.h>
using namespace std;

void dfs(int i,
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

    // 交友関係を表現するグラフを隣接リスト方式で作成する
    vector<vector<int>> G(N + 1);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // グラフを走査して連結成分を探索する。各連結成分のサイズを管理する。
    vector<bool> visited(N + 1, false);
    int max_size = 0; // 連結成分の最大サイズ
    for (int i = 1; i <= N; i++)
    {
        if (!visited[i])
        {
            int size = 0;
            dfs(i, G, visited, size);
            max_size = max(max_size, size);
        }
    }
    cout << max_size << endl;
    return 0;
}
