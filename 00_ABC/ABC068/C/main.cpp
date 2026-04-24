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
    vector<vector<int>> G(N + 1);

    // グラフの作成
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // グラフから情報を抽出する。
    // 島1からつながる島から島Nに行けるかどうかを調べればよい。
    bool answer = false;
    for (const auto &g : G[1])
    {
        for (const auto &_g : G[g])
        {
            if (_g == N)
            {
                answer = true;
            }
        }
    }
    if (answer)
    {
        cout << "POSSIBLE" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
