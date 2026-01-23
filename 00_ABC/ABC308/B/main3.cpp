#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M; // 食べたお皿の数, 個別の価格を持つ料理の種類
    cin >> N >> M;
    vector<string> C(N + 1); // 食べたお皿の色
    vector<string> D(M + 1); // 個別の値段を持つお皿の色
    vector<int> P(M + 1);    // 各お皿の値段, 但しP0はDiに含まれないお皿の値段

    /**
     * 入力:
     * C = [_, "red", "green", "blue"]  // C[0]は未使用
     * D = [_, "blue", "red"]           // D[0]は未使用
     * P = [800, 2800, 1600]            // P[0]=800, P[1]=2800, P[2]=1600
     */

    for (int i = 1; i <= N; i++)
    {
        cin >> C[i];
    }
    for (int i = 1; i <= M; i++)
    {
        cin >> D[i];
    }
    for (int i = 0; i <= M; i++)
    {
        cin >> P[i];
    }

    // D[i]からインデックスへのマップを作成
    // この変換関係をmapとして作成することが大事
    // 計算量をO(N + M)に削減させるキモとなる
    map<string, int> price_index;
    for (int i = 1; i <= M; i++)
    {
        price_index[D[i]] = i; // P[1] ~ P[M] に対応
    }

    int amount = 0;
    for (int i = 1; i <= N; i++)
    {
        // map::count(key)
        // キーが存在する:   1を返す
        // キーが存在しない: 0を返す
        if (price_index.count(C[i]))
        {
            amount += P[price_index[C[i]]];
        }
        else
        {
            amount += P[0];
        }
    }
    cout << amount << endl;

    return 0;
}
