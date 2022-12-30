#include <iostream>
#include <algorithm>
using namespace std;

int N; // ホテルの客室数
int A[100009]; // 何人部屋？
int P[100009]; // 1 ~ (L-1)までを格納
int Q[100009]; // (R + 1) ~ Nまでを格納

int D; // 工事期間
int L[100009]; // 工事中の部屋 start
int R[100009]; // 工事中の部屋 end

int main()
{
    // 入力
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i]; // 客室の収容人数を読み込み
    }

    cin >> D;
    for (int d = 1; d <= D; d++)
    {
        cin >> L[d] >> R[d]; // 工事のスケジュール(start, end)
    }

    // 答えを直接計算するプログラム
    // 計算量O(ND)
    for (int d = 1; d <= D; d++)
    {
        int Answer = 0;
        // for文で最大値を計算する 変数iは部屋番号を表す
        for (int i = 1; i <= N; i++) // 各営業日毎に
        {
        if (L[d] <= i && i <= R[d]) continue; // 工事中の部屋をのぞいて
            Answer = max(Answer, A[i]); // 最も大きい部屋を確認
        }
        cout << Answer << endl; // d日目の一番大きい部屋が何人部屋であるかを出力
    }

    return 0;
}
