#include <bits/stdc++.h>
using namespace std;

void dfs(
    int node,
    const vector<vector<int>> &graph,
    vector<bool> &visited)
{
    visited[node] = true;
    for (const auto &n : graph[node])
    {
        if (visited[n])
        {
            continue;
        }
        dfs(n, graph, visited);
    }
}

int main()
{
    int N, M;
    cin >> N >> M;

    vector<bool> visited(N + 1, false);
    vector<vector<int>> G(N + 1);

    // グラフを構成する
    for (int i = 0; i < M; i++)
    {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    int answer = 0;
    for (int i = 1; i <= N; i++)
    {
        // i番目の頂点が未訪問の場合連結成分の個数を+1する
        if (!visited[i])
        {
            answer++;
        }
        dfs(i, G, visited);
    }
    cout << answer << endl;

    return 0;
}
