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
    int H, W;
    cin >> H >> W;

    vector<string> S(H);
    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
    }

    // 8方向のベクトル (上、右上、右、右下、下、左下、左、左上)
    // 近傍座標の効率的な扱い方。典型的なテクニックなので覚えること
    int di[] = {-1, -1, 0, 1, 1, 1, 0, -1}; // x
    int dj[] = {0, 1, 1, 1, 0, -1, -1, -1}; // y

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (S[i][j] == '#')
            {
                cout << '#';
                continue;
            }

            // 周囲の爆弾をカウント
            int count = 0;
            for (int d = 0; d < 8; d++)
            {
                int ni = i + di[d]; // 新しい行
                int nj = j + dj[d]; // 新しい列

                // 範囲内かチェック
                if (ni >= 0 && ni < H && nj >= 0 && nj < W)
                {
                    if (S[ni][nj] == '#')
                    {
                        count++;
                    }
                }
            }
            cout << count;
        }
        cout << endl;
    }
    return 0;
}
