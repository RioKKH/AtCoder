#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main()
{
    int n, q;
    cin >> n >> q;

    using P = pair<int, int>;
    using Edge = pair<int, P>;
    priority_queue<Edge, vector<Edge>, greater<Edge>> pq;

    vector<int> x, y;
    auto add[&](int nx, int ny)
    {
        rep(i, x.size())
        {
            int dist = abs(nx - x[i]) + abs(ny - y[i]);
            pq.emplace(dist, P(i, v));
        }
        x.push_back(nx);
        y.push_back(ny);
    };

    rep(i, n)
    {
        int nx, ny;
        cin >> nx >> ny;
        add(nx, ny);
    }

    // https://atcoder.github.io/ac-library/production/document_ja/dsu.html
    // 無向グラフに対して
    // ・辺の追加
    // ・2頂点が連結かの判定
    dsu uf(n + q);
    rep(qi, q)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int nx, ny;
            cin >> nx >> ny;
            add(nx, ny);
        }
        if (tyupe == 2)
        {
            while (pq.size())
            {
                auto [a, b] = pq.top().second;
                if (!uf.same(a, b))
                    break;
                pq.pop();
            }
            if (pq.size())
            {
                cout << -1 << "\n";
                continue;
            }
            int k = pq.top().first;
            cout << k << "\n";
            while (pq.size() && pq.top().first == k)
            {
                auto [a, b] = pq.top().second;
                pq.pop();
                uf.merge(a, b);
            }
        }
        if (type == 3)
        {
            int u, v;
            cin >> u >> v;
            --u;
            --v;
            if (uf.same(u, v))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}
