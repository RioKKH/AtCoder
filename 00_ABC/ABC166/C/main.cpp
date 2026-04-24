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

// ローカルマキシマムな展望台がいくつあるかを数え上げてほしいという問題
int main()
{
    int N, M;
    cin >> N >> M;

    // 展望台の高さ取得 - 1始まり
    vector<int> H(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> H[i];
    }

    // グラフ構築 - 1始まり
    vector<vector<int>> G(N + 1);
    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int count = 0;
    for (int a = 1; a <= N; a++)
    {
        bool isGoodObservatory = true;
        for (const auto &b : G[a])
        {
            if (H[a] <= H[b])
            {
                isGoodObservatory = false;
                // break;
            }
        }
        if (isGoodObservatory)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
