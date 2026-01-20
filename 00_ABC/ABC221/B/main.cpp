#include <bits/stdc++.h>
using namespace std;

/**
 * 全探索問題
 */

int main()
{
    std::string S, T;
    cin >> S;
    cin >> T;
    size_t length = S.size();
    int count = 0;
    string result = "Yes";
    for (size_t i = 0; i < length; i++)
    {
        if (S[i] == T[i])
        {
            continue;
        }
        else if (S[i] != T[i])
        {
            if (i == length - 1)
            {
                result = "No";
                break;
            }
            else if (S[i] == T[i + 1] && S[i + 1] == T[i])
            {
                if (count > 0)
                {
                    result = "No";
                    break;
                }
                count++;
                i++;
            }
            else
            {
                result = "No";
                break;
            }
        }
    }
    cout << result << endl;
    return 0;
}
