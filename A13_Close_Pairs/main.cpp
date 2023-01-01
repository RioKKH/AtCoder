#include <iostream>
using namespace std;

int N; // 黒板に書かれている整数の数
int K; // K以下である数値がなん通りあるかを数える
int A[100'009]; // i番目の整数の値はA[i]
// i番目の値A[i]がどこまで差分がK以下となる関係を満たすことが出来たかというインデックスの値を格納する配列
int R[100'009];

// しゃくとり法で数え上げる
int main()
{
    // 入力
    cin >> N >> K;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // しゃくとり法
    for (int i = 1; i <= N-1; i++)
    {
        // スタート地点を決める
        if (i == 1) R[i] = 1;
        else R[i] = R[i-1]; // 一つ前のステップで求まったＲの値から開始してよい

        // ギリギリまで増やしていく
        // A[i]とA[R[i]]の値がK以下である限り、R[i]の値(Aのインデックス)を一つずつ
        // 増やしてく(配列Ａを一つずつ右にずらしていく)
        while (R[i] < N && A[R[i] + 1] - A[i] <= K)
        {
            R[i] += 1;
        }
    }

    // 出力 (答えは最大50億程度になるので、long long型を使う必要がある)
    long long Answer = 0;
    for (int i = 1; i <= N-1; i++)
    {
        Answer += (R[i] - i);
    }
    cout << Answer << endl;

    return 0;
}
