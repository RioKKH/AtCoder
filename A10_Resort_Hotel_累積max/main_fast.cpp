#include <iostream>
#include <algorithm>
using namespace std;

int N; // ホテルの客室数
int A[100009]; // 各客室は何人部屋？
int P[100009]; // 1 ~ (L-1)までの累積maxを格納
int Q[100009]; // (R + 1) ~ Nまでの累積maxを格納

int D; // 工事期間
int L[100009]; // 工事中の部屋 start
int R[100009]; // 工事中の部屋 end


// 累積和を応用して累積Maxを求める問題
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

    // P[i]を求める。左から順に累積maxを求める
    P[1] = A[1];
    for (int i = 2; i <= N; i++)
    {
        P[i] = max(P[i-1], A[i]);
    }
    // Q[i]を求める。右から順に累積maxを求める
    Q[N] = A[N];
    for (int i = N - 1; i >= 1; i--)
    {
        Q[i] = max(Q[i + 1], A[i]);
    }

    // 左側累積maxを格納したP[]と右側累積maxを格納したQ[]を用いて
    // それぞれの日の最大部屋数を求める
    for (int d = 1; d <= D; d++)
    {
        cout << max(P[L[d] - 1], Q[R[d] + 1]) << endl;
    }
    return 0;
}
