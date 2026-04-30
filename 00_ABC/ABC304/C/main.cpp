#include <bits/stdc++.h>
using namespace std;

void dfs(
    int person,
    const vector<vector<int>> &G,
    vector<bool> &visited)
{
    visited[person] = true; // 現在の人を感染させる
    for (int next : G[person])
    {
        if (!visited[next])
        {
            dfs(next, G, visited);
        }
    }
}

int main()
{
    int N, D;
    cin >> N >> D;

    vector<int> X(N);
    vector<int> Y(N);
    for (int i = 0; i < N; i++)
    {
        cin >> X[i] >> Y[i];
    }

    // 隣接リスト形式でグラフを表現する
    vector<vector<int>> G(N);
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            // 距離の2乗で比較する
            int distSq = (X[i] - X[j]) * (X[i] - X[j]) +
                         (Y[i] - Y[j]) * (Y[i] - Y[j]);
            if (distSq <= D * D)
            {
                G[i].push_back(j);
                G[j].push_back(i);
            }
        }
    }

    vector<bool> visited(N, false);
    dfs(0, G, visited);

    // 結果出力
    for (int i = 0; i < N; i++)
    {
        if (visited[i])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
