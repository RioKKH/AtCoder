#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    bool has_lower = false;
    bool has_upper = false;

    for (const auto &s : S)
    {
        if ('a' <= s && s <= 'z')
        {
            has_lower = true;
        }
        else if ('A' <= s && s <= 'Z')
        {
            has_upper = true;
        }
        else
        {
            cout << "something wrong with input data." << endl;
            return -1;
        }
    }

    // 確認
    bool no_duplication = true;

    int size = S.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (S[i] == S[j])
            {
                no_duplication = false;
            }
        }
    }

    if (has_lower && has_upper && no_duplication)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
