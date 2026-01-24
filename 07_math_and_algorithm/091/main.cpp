#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;

    int result = 0;
    for (int i = 1; i <= N - 2; i++)
    {
        for (int j = i + 1; j <= N - 1; j++)
        {
            for (int k = j + 1; k <= N; k++)
            {
                if (i + j + k == X)
                {
                    result++;
                }
            }
        }
    }
    cout << result << endl;
    return 0;
}
