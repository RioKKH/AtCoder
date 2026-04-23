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
    // N: int N個の都市(node)
    // M: int M本の道路(edge)
    cin >> N >> M;

    vector<vector<int>> G(N + 1, vector<int>(N + 1));
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a][b] += 1;
        G[b][a] += 1;
    }

    // データの集計
    for (int i = 1; i <= N; i++)
    {
        int sum = 0;
        for (int j = 1; j <= N; j++)
        {
            sum += G[i][j];
        }
        cout << sum << endl;
    }

    return 0;
}
