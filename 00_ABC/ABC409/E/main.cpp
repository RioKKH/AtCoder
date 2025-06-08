#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

struct Edge
{
    int to, cost;
};

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    rep(i, n) cin >> x[i];

    vector<vector<Edge>> g(n);
    rep(i, n - 1)
    {
        int u, v, w;
        --u;
        --v;
        g[u].emplace_back(v, w);
        g[v].emplace_back(u, w);
    }

    ll ans = 0;
    auto dfs = [&](auto dfs, int v, int p = -1) -> int
    {
        int tot = x[v]; // 現在の頂点vの初期電化
        // 全ての隣接頂点を処理
        for (auto e : g[v])
        {
            if (e.to == p) // 親ノードは除外する
                continue;
            // 子ノードを再帰的に処理する
            int r = dfs(dfs, e.to, v);
            // 子ノードからの余剰電化を移動するコストを追加
            ans += (ll)e.cost * abs(r);
            // 子ノードの余剰電荷を現在のノードに統合する
            tot += r;
        }
        return tot;
    };
    dfs(dfs, 0);
    cout << ans << endl;
    return 0;
}
