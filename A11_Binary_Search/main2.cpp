#include <iostream>
#include <algorithm>
using namespace std;

int N; // 配列の長さ
int X; // 探索する数値
int A[100009]; // 数値を格納する配列。

int search(int x)
{
    // 二分探索
    // std::lower_bound(first, last, value)
    int pos = lower_bound(A + 1, A + N + 1, x) - A;
    if (pos <= N && A[pos] == x)
    {
        return pos;
    }
    return -1;
}

int main()
{
    // 入力
    cin >> N >> X;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    // 配列のソート
    // ここで、関数sort(A+L, A+R)ではA[L]からA[R-1]までの部分をソートする
    sort(A + 1, A + N + 1);

    /* テストとしてソート結果を出力させてみる
    for (int i = 1; i <= N; i++)
    {
        cout << A[i] << endl;
    }
    */

    int Answer;
    Answer = search(X);
    cout << Answer << endl;;

    return 0;
}
