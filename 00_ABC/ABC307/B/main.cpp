#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    bool answer = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                continue;

            string St = S[i] + S[j];
            int n = St.size();
            //  cout << "St: " << i << ":" << j << ":" << n << ":" << St << endl;
            std::string first = "";
            std::string second = "";
            if (n % 2 != 0)
            { // odd
                first = St.substr(0, (n - 1) / 2);
                second = St.substr((n + 1) / 2, (n - 1) / 2);
                // cout << "odd:" << first << ":" << second << endl;
            }
            else
            { // even
                first = St.substr(0, n / 2);
                second = St.substr(n / 2, n / 2);
                // cout << "even:" << n / 2 << ":" << first << ":" << second << endl;
            }

            reverse(second.begin(), second.end());
            if (first == second)
            {
                answer = true;
                break;
            }
        }
        if (answer)
            break;
    }
    if (answer)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
