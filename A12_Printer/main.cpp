#include <iostream>
using namespace std;

long long N; // プリンターの数
long long K; // K枚目のチラシ
long long A[100009]; // プリンターiはA[i]秒ごとに1枚印刷。プリンターiのスループット


// 答えがx以下かを判定し、Yesであればtrue, Noであればfalseを返す
bool check(long long x)
{
    long long sum = 0;
    for (int i = 1; i <= N; i++)
    {
        // x / A[i]の小数点以下切り捨て
        sum += x / A[i];
    }
    if (sum >= K) return true;
    return false;
}


// 答えで二分探索する方法
// 答えは〇〇以下ですか、という判定問題に対して用いる方法
int main()
{
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    // 二分探索
    // Leftは探索範囲の左端を、Rightは探索範囲の右端を表す
    long long Left = 1;
    long long Right = 1'000'000'000;
    while (Left < Right)
    {
        long long Mid = (Left + Right) / 2;
        bool Answer = check(Mid);
        if (Answer == false) Left  = Mid + 1; // 答えがMid + 1以上である事がわかる
        if (Answer == true)  Right = Mid;     // 答えがMid以下である事がわかる
    }

    // 出力 (この時Left == Rightとなっている)
    cout << Left << endl;
    return 0;
}

