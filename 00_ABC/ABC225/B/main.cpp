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
    int N;
    cin >> N;
    vector<vector<int>> G(N + 1, vector<int>(0, 0));
    // グラフ(今回は木(?))情報読み取り
    for (int i = 1; i <= N - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    // グラフを使って集計する
    bool isStar = false;
    for (int i = 1; i <= N; i++)
    {
        // debug print
        // cout << i << " " << static_cast<int>(G[i].size()) << endl;
        if (static_cast<int>(G[i].size()) == N - 1)
        {
            isStar = true;
        }
    }
    if (isStar)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
