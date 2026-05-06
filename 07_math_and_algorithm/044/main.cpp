#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

vector<int> bfs(int start, const Graph &G)
{
    int N = G.size();
    // 頂点0 (1-indexedでは頂点1)からの全頂点への距離を管理するvector
    // スタート地点が0固定なので1次元のvectorでよい。
    vector<int> dist(N, -1);
    queue<int> que;

    // 始点の処理
    que.push(start);
    dist[start] = 0;

    while (!que.empty())
    {
        int v = que.front();
        que.pop();

        // 隣接頂点を探索する
        for (const auto &next : G[v])
        {
            if (dist[next] == -1) // 未訪問
            {
                dist[next] = dist[v] + 1;
                que.push(next);
            }
        }
    }
    return dist;
}

int main()
{
    int N, M;
    cin >> N >> M;

    // グラフを構築する
    Graph G(N);
    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        G[A].push_back(B);
        G[B].push_back(A);
    }

    // 頂点0 (1-indexedでは頂点1)から全頂点への距離を求める
    vector<int> distance = bfs(0, G);

    for (int i = 0; i < N; i++)
    {
        cout << distance[i] << endl;
    }

    return 0;
}
