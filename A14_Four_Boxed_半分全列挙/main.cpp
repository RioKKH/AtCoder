#include <iostream>
#include <algorithm>
using namespace std;

int N; // 各箱に入っているカードの枚数
int K; // 各箱から1枚ずつカードを取り出した時、4枚のカードの合計数
int A[1'009]; // 1つ目の箱
int B[1'009]; // 2つ目の箱
int C[1'009]; // 3つ目の箱
int D[1'009]; // 4つ目の箱
int P[1'000'009]; // AとBの箱のカードの組み合わせ
int Q[1'000'009]; // CとDの箱のカードの組み合わせ

int main()
{
    // 入力
    cin >> N >> K;
    for (int x = 1; x <= N; x++) cin >> A[x];
    for (int y = 1; y <= N; y++) cin >> B[y];
    for (int z = 1; z <= N; z++) cin >> C[z];
    for (int w = 1; w <= N; w++) cin >> D[w];

    // 半分全列挙 ステップ1 ---------------------------------------------------
    // AとＢからカードを取り出したときに考えられるすべての値を格納した配列Pを作成
    for (int x = 1; x <= N; x++)
    {
        for (int y = 1; y <= N; y++)
        {
            P[(x-1)*N + y] = A[x] + B[y];
        }
    }

    // CとDからカードを取り出したときに考えられるすべての値を格納した配列Qを作成
    for (int z = 1; z <= N; z++)
    {
        for (int w = 1; w <= N; w++)
        {
            Q[(z-1)*N + w] = C[z] + D[w];
        }
    }
    
    // 半分全列挙 ステップ2 ---------------------------------------------------
    // 配列Ｑを小さい順にソート
    sort(Q+1, Q+(N*N)+1);

    // 二分探索
    for (int i = 1; i <= N*N; i++)
    {
        // Qの配列の中にK-P[i]になる数が歩かないかを二分探索で探す
        int pos1 = lower_bound(Q+1, Q+(N*N)+1, K - P[i]) - Q;
        if (pos1 <= N*N && Q[pos1] == K - P[i])
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    // 見つからなかった場合
    cout << "No" << endl;

    return 0;
}


