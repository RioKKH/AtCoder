#include <bits/stdc++.h>
using namespace std;

struct POS
{
    int X;
    int Y;
    POS(int x, int y) : X(x), Y(y) {}
};

// 0, 45, 90, 135, 180, 225, 270, 315
const int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
const int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

bool canMove(int h, int w, int H, int W,
             const vector<string> &GRID,
             const vector<vector<bool>> &visited)
{
    // GRIDの範囲外チェック
    if ((h < 0) || (h >= H) || (w < 0) || (w >= W))
    {
        return false;
    }
    // センサーでないマスはスキップする
    if (GRID[h][w] != '#')
    {
        return false;
    }
    // 訪問済みチェック
    if (visited[h][w])
    {
        return false;
    }
    return true;
}

void dfs(int h, int w, int H, int W,
         const vector<string> &GRID,
         vector<vector<bool>> &visited)
{
    // 現在地を訪問済みにする
    visited[h][w] = true;

    // 8方向を探索する
    for (int d = 0; d < 8; d++)
    {
        int nh = h + dy[d];
        int nw = w + dx[d];

        if (canMove(nh, nw, H, W, GRID, visited))
        {
            dfs(nh, nw, H, W, GRID, visited);
        }
    }
}

int main()
{
    int H, W;
    cin >> H >> W;

    // H x W のグリッドを作成する
    vector<string> G(H);
    for (int i = 0; i < H; i++)
    {
        cin >> G[i];
    }

    vector<vector<bool>> visited(H, vector<bool>(W, false));
    int sensorCount = 0; // 連結成分の数
    // 全マスを走査する
    for (int h = 0; h < H; h++)
    {
        for (int w = 0; w < W; w++)
        {
            // センサーがあり、未訪問ならば新しい連結成分
            if (G[h][w] == '#' && !visited[h][w])
            {
                dfs(h, w, H, W, G, visited);
                sensorCount++; // DFS開始回数 = 連結成分の数
            }
        }
    }

    cout << sensorCount << endl;

    return 0;
}
