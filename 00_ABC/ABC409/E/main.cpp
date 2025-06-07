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
        int tot = x[v];
        for (auto e : g[v])
        {
            if (e.to == p)
                continue;
            int r = dfs(dfs, e.to, v);
            ans += (ll)e.cost * abs(r);
            tot += r;
        }
        return tot;
    };
    dfs(dfs, 0);
    cout << ans << endl;
    return 0;
}
