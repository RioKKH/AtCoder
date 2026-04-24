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

    // 隣接リスト形式でグラフを作成する
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // グラフを集計する
    int answer = 0;
    for (int i = 1; i <= N; i++)
    {
        int count = 0;
        for (const auto &g : G[i])
        {
            if (i > g)
            {
                count++;
            }
        }
        if (count == 1)
        {
            answer++;
        }
    }
    cout << answer << endl;
}
