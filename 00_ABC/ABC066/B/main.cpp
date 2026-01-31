#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int N = S.size();

    int max_length = 0;
    for (int i = 1; i < N; i++)
    {
        if ((N - i) % 2 != 0)
        {
            // 奇数長は偶文字列にはならない
            continue;
        }
        else
        {
            string first = S.substr(0, (N - i) / 2);
            string second = S.substr((N - i) / 2, (N - i) / 2);
            // cout << first << ":" << second << endl;
            if (first == second)
            {
                max_length = max(max_length, N - i);
            }
        }
    }
    cout << max_length << endl;
    return 0;
}
