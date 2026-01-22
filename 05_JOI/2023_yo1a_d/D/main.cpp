#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N + 1, 0);

    int tmp;
    for (int i = 1; i <= 2 * N - 1; ++i)
    {
        cin >> tmp;
        A[tmp]++;
    }

    // debug
    // for (const auto &a : A)
    // {
    //     cout << a << endl;
    // }

    int result = 0;
    for (int i = 1; i <= N; i++)
    {
        if (A[i] == 1)
        {
            result = i;
            break;
        }
    }
    cout << result << endl;
    return 0;
}
