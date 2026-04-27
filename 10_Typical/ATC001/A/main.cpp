#include <bits/stdc++.h>
using namespace std;

// デバッグ用マクロ
#define DEBUG

#ifdef DEBUG
#define debug(x) cerr << #x << " = " << (x) << endl
#define debug2(x, y) cerr << #x << " = " << (x) << ", " << #y << " = " << (y) << endl
#else
#define debug(x)
define debug2(x, y)
#endif // DEBUG

// 右, 下, 左, 上
// 左上原点の座標系なので、下はh+1方向・上はh-1方向であることに注意。
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

bool canMove(int h, int w, int H, int W,
             const vector<string> &MAZE,
             const vector<vector<bool>> &visited)
{
    // MAZEの範囲外の場合
    if ((h < 0) || (h >= H) || (w < 0) || (w >= W))
    {
        return false;
    }
    // 壁の場合
    if (MAZE[h][w] == '#')
    {
        return false;
    }
    // 訪問済みの場合
    if (visited[h][w])
    {
        return false;
    }
    return true;
}

void dfs(int h, int w, int H, int W,
         const vector<string> &MAZE,
         vector<vector<bool>> &visited)
{
    // 現在地を訪問済みにする
    visited[h][w] = true;

    // 4方向を探索する
    for (int d = 0; d < 4; d++)
    {
        int nh = h + dy[d];
        int nw = w + dx[d];

        if (canMove(nh, nw, H, W, MAZE, visited))
        {
            dfs(nh, nw, H, W, MAZE, visited);
        }
    }
}

int main()
{
    int H, W;
    cin >> H >> W;

    vector<string> MAZE(H);
    vector<vector<bool>> visited(H, vector<bool>(W, false));

    for (int i = 0; i < H; i++)
    {
        cin >> MAZE[i];
    }

    // スタートとゴールを見つける
    int sh = 0, sw = 0, gh = 0, gw = 0;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (MAZE[i][j] == 's')
            {
                sh = i, sw = j;
            }
            if (MAZE[i][j] == 'g')
            {
                gh = i, gw = j;
            }
        }
    }

    // 探索開始
    dfs(sh, sw, H, W, MAZE, visited);

    // ゴール二到達できたかどうかを判定する
    if (visited[gh][gw])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
