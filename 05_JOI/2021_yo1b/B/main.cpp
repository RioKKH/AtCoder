#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    string S;
    cin >> S;

    string answer = "No";
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                if (S[i] == 'I' && S[j] == 'O' && S[k] == 'I')
                {
                    answer = "Yes";
                }
            }
        }
    }
    cout << answer << endl;

    return 0;
}
