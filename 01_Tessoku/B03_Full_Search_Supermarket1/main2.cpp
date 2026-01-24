#include <bits/stdc++.h>
using namespace std;

/**
 * 任意の個数の場合のコード
 * bit brute force search
 * ビット全探索を用いた解法
 * 但し、問題は3個選んだ場合の組合せなので、このコードは不適切
 */
int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    string answer = "No";
    for (int i = 0; i < (1 << N); i++)
    {
        int sum = 0;
        for (int j = 0; j < N; ++j)
        {
            // ビットが立っているかどうかを確認する
            int divisor = (1 << j);
            if ((i / divisor) % 2 == 1)
            {
                sum += A[j];
                cout << sum << endl;
            }
        }
        if (sum == 1000)
        {
            answer = "Yes";
            break;
        }
    }
    cout << answer << endl;
    return 0;
}
