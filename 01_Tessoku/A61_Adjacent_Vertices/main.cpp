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

    for (int i = 1; i <= M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    for (int i = 1; i <= N; i++)
    {
        cout << i << ": {";
        for (int j = 0; j < static_cast<int>(G[i].size()); j++)
        {
            cout << G[i][j];
            if (j < static_cast<int>(G[i].size()) - 1)
            {
                cout << ", ";
            }
        }
        cout << "}" << endl;
    }
    return 0;
}
