#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    // S: 探索対象文字列
    // T: 探索する文字列。TがSの部分文字列か
    cin >> S >> T;

    int n = (int)S.size();
    int m = (int)T.size();

    string answer;
    for (int i = 0; i < n; i++)
    {
        answer = "Yes";
        for (int j = 0; j < m; j++)
        {
            if (T[j] != S[i + j])
            {
                answer = "No";
                break;
            }
        }
        if (answer == "Yes")
        {
            break;
        }
    }
    cout << answer << endl;
    return 0;
}
