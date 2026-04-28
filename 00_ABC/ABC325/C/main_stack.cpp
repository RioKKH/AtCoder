#include <bits/stdc++.h>
using namespace std;

const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

// 再帰関数を使わないDFS (スタックを使用)
void dfs_iterative(int sh, int sw, int H, int W,
                   const vector<string> &G,
                   vector<vector<bool>> &visited)
{
    // 再帰関数を用いない場合のDFSではスタックを用いる
    stack<pair<int, int>> st;
    st.push({sh, sw});
    visited[sh][sw] = true;

    while (!st.empty())
    {
        auto [h, w] = st.top();
        st.pop();

        for (int d = 0; d < 8; d++)
        {
            int nh = h + dy[d];
            int nw = w + dx[d];

            if (nh < 0 || nh >= H || nw < 0 || nw >= W)
                continue;
            if (G[nh][nw] != '#')
                continue;
            if (visited[nh][nw])
                continue;

            visited[nh][nw] = true;
            st.push({nh, nw});
        }
    }
}

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> G(H);
    for (int i = 0; i < H; i++)
    {
        cin >> G[i];
    }

    vector<vector<bool>> visited(H, vector<bool>(W, false));
    int sensorCount = 0;

    for (int h = 0; h < H; h++)
    {
        for (int w = 0; w < W; w++)
        {
            if (G[h][w] == '#' && !visited[h][w])
            {
                dfs_iterative(h, w, H, W, G, visited);
                sensorCount++;
            }
        }
    }
    cout << sensorCount << endl;
    return 0;
}
