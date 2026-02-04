#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    int a = 0; // 10^4
    int b = 0; // 10^3
    int c = 0; // 10^2
    int d = 0; // 10^1
    int e = 0; // 10^0

    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        // 整数の各桁の取り出し
        a = i % 100000 / 10000;
        b = i % 10000 / 1000;
        c = i % 1000 / 100;
        d = i % 100 / 10;
        e = i % 10 / 1;

        int tmp_sum = a + b + c + d + e;

        // デバッグプリント
        // cout << std::format("{}: {} {} {} {} {} {}",
        //                     i, a, b, c, d, e, tmp_sum)
        //      << endl;

        if (A <= tmp_sum && tmp_sum <= B)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
