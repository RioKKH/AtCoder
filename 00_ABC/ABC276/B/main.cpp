#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print_vector(const vector<T> &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i];
        if (i < size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    int N, M;
    cin >> N >> M;
    // N個の都市
    // M本の道路
    // この問題では隣接行列表現を用いてグラフを表現する
    vector<vector<int>> G(N + 1);
    for (int i = 1; i <= M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    for (int i = 1; i <= N; i++)
    {
        sort(G[i].begin(), G[i].end());
        cout << G[i].size();
        for (const auto g : G[i])
        {
            cout << " " << g;
        }
        cout << endl;
    }

    return 0;
}
