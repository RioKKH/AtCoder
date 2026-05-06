#include <bits/stdc++.h>
using namespace std;

using MAZE = vector<string>;

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

bool canMove(int y, int x, int ny, int nx, int H, int W,
             const MAZE &maze,
             const vector<vector<int>> &visited)
{
    // カーペット(maze)の範囲外チェック
    if ((ny < 0) || ny >= H || (nx < 0) || nx >= W)
    {
        return false;
    }
    // 移動ルールチェック
    if (maze[ny][nx] == maze[y][x])
    {
        return false;
    }
    // 訪問済みチェック
    if (visited[ny][nx] != -1)
    {
        return false;
    }
    return true;
}

int bfs(int H, int W, const MAZE &maze)
{
    vector<vector<int>> dist(H, vector<int>(W, -1));
    queue<pair<int, int>> que;

    // (0, 0)スタート
    que.push({0, 0});
    dist[0][0] = 0;

    while (!que.empty())
    {
        auto [y, x] = que.front();
        que.pop();

        // ゴール
        if (y == H - 1 && x == W - 1)
        {
            return dist[y][x];
        }

        for (int d = 0; d < 4; d++)
        {
            int ny = y + dy[d];
            int nx = x + dx[d];

            // 移動可能かどうかのチェック
            if (canMove(y, x, ny, nx, H, W, maze, dist))
            {
                dist[ny][nx] = dist[y][x] + 1;
                que.push({ny, nx});
            }
        }
    }
    return -1;
}

int main()
{
    int H, W;
    cin >> H >> W;
    /**
     * . : 白
     * # : 黒
     * start : 左上 (0, 0)
     * goal  : 右下 (H-1, W-1)
     */
    MAZE maze(H);
    for (int i = 0; i < H; i++)
    {
        cin >> maze[i];
    }

    int distance = bfs(H, W, maze);
    cout << distance << endl;

    return 0;
}
