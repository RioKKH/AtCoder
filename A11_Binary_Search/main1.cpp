#include <iostream>
using namespace std;

int N; // 配列Aの要素数
int X; // 探索する要素の数値
int A[100009]; // 小さい順に数値が並べられている配列


// 整数Xが何番目に存在するかを返す
// 二分探索は探索範囲を各ステップ毎に半減させる探索方法
int search(int x)
{
    int L = 1; // 現時点での探索範囲の左端
    int R = N; // 現時点での探索範囲の右端
    while (L <= R)
    {
        int M = (L + R) / 2; // 現時点での探索範囲の中点。割り切れない場合には切り捨てる
        if (x <  A[M]) R = M - 1; // 探索する数値xが現在の中点Mの数値A[M]より小さい場合、右端をM-1とする
        if (x == A[M]) return M;  // 答えはMである
        if (x >  A[M]) L = M + 1; // 探索する数値xが現在の中点Mの数値A[M]より大きい場合、左端をM+1とする
    }
    return -1; // 整数Xが存在しない。ただしこの問題の制約から-1が返される事はない
}

int main()
{
    cin >> N >> X;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    // 二分探索を行う binary search
    int Answer = search(X);
    cout << Answer << endl;
    return 0;
}

