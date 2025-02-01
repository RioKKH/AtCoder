#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

int main()
{
    int N, W;
    std::cin >> N >> W;

    std::map<int, std::vector<std::pair<int, int>>> columns;
    std::vector<int> disappear_time(N + 1, 1e9); // 1-indexed, 初期値を十分に大きい値

    for (int i = 1; i <= N; i++)
    {
        int X, Y;
        std::cin >> X >> Y;
        columns[X].emplace_back(Y, i); // Y座標、ブロック番号
    }

    // 各列毎に処理
    for (auto &[col, blocks] : columns)
    {
        sort(blocks.begin(), blocks.end()); // Y座標でソート
        int current_time = 0;               // 現在のシミュレーション時刻
        int last_y = 0;                     // 最後に処理したブロックのy座標
        int filled_count = 0;               // 1行目にあるブロックの数

        for (auto &[y, index] : blocks)
        {
            // 下に落とせる場合は落とす
            current_time += (y - last_y - 1);
            last_y = y;

            // もし１行目にブロックが埋まったら、全てのブロックが消滅する
            filled_count++;
            if (filled_count == W)
            {
                filled_count = 0; // リセット
                current_time++;   // 1行目が消える
            }

            // ブロックindexの消滅時刻を記録
            disappear_time[index] = current_time;
        }
    }

    // クエリ処理
    int Q;
    std::cin >> Q;
    // std::cout << "Q: " << Q << std::endl;

    for (int i = 0; i < Q; i++)
    {
        // while (Q--)
        // {
        int T, A;
        std::cin >> T >> A;
        // std::cout << T << " " << A << std::endl;
        if (disappear_time[A] > T)
        {
            std::cout << "Yes" << std::endl;
        }
        else
        {
            std::cout << "No" << std::endl;
        }
    }
    return 0;
}
