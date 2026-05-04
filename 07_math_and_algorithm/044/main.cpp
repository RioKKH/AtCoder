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

    // グラフを構築する
    vector<vector<int>> G(N);
    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        G[A].push_back(B);
        G[B].push_back(A);
    }

    // 頂点1始まりでBFSを実行する
    return 0;
}
