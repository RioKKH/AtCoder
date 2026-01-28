#include <bits/stdc++.h>
#include <iomanip>
#include <pthread.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    int n = S.length();

    double max_rate = 0.0;

    // cout << "String: " << S << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 3; j <= n; j++)
        {
            // string substring = S.substr(i, j - i);
            // cout << "i:" << i << "j:" << j << ":" << substring << endl;
            int length = j - i;

            if (S[i] != 't' || S[j - 1] != 't')
                // if (S[i] != S[j - 1])
                continue;

            // ターゲット文字
            char target = S[i];
            int count = 0;

            for (int k = i; k < j; k++)
            {
                if (S[k] == target)
                {
                    count++;
                }
            }

            double filling_rate = (double)(count - 2) / (double)(length - 2);
            max_rate = max(max_rate, filling_rate);
        }
    }

    cout << fixed << setprecision(17) << max_rate << endl;

    return 0;
}
