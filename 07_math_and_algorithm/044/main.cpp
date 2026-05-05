#include <bits/stdc++.h>
using namespace std;

int bfs()
{
    return 0;
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
