#include <bits/stdc++.h>
using namespace std;

using Graph = vector<string>;

// 探索するべき4方向 右、下、左、上
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

bool canMove(int y, int x, int R, int C,
             const vector<string> &MAZE,
             const vector<vector<int>> &visited)
{
    // MAZEの範囲外チェック
    if ((y < 0) || (y >= R) || (x < 0) || (x >= C))
    {
        return false;
    }
    // 壁チェック
    if (MAZE[y][x] == '#')
    {
        return false;
    }
    // 訪問済みチェック
    if (visited[y][x] != -1)
    {
        return false;
    }
    return true;
}

int bfs(int sy, int sx, int gy, int gx, int R, int C, const Graph &MAZE)
{
    // 迷路の各地点の距離を表す行列を作成し、距離を0で初期化しておく
    vector<vector<int>> dist(R, vector<int>(C, -1));
    queue<pair<int, int>> que;

    // 始点の処理
    que.push({sy, sx});
    dist[sy][sx] = 0;

    while (!que.empty())
    {
        auto [y, x] = que.front();
        que.pop();

        if (y == gy && x == gx)
        {
            return dist[y][x];
        }

        for (int d = 0; d < 4; d++)
        {
            int ny = y + dy[d];
            int nx = x + dx[d];

            // 範囲チェック
            if (canMove(ny, nx, R, C, MAZE, dist))
            {
                dist[ny][nx] = dist[y][x] + 1;
                que.push({ny, nx});
            }
        }
    }
    return -1; // 到達不可能
}

int main()
{
    int R, C, sy, sx, gy, gx;
    cin >> R >> C >> sy >> sx >> gy >> gx;
    // 1-indexedから0-indexedに変換する
    sy--;
    sx--;
    gy--;
    gx--;

    Graph MAZE(R);
    for (int i = 0; i < R; i++)
    {
        cin >> MAZE[i];
    }

    int distance = bfs(sy, sx, gy, gx, R, C, MAZE);
    if (distance != -1)
    {
        cout << distance << endl;
    }
    else
    {
        cout << "BFS: ゴールに到達不可能" << endl;
    }

    return 0;
}
