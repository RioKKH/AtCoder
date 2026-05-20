#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    // AB...YZab...yzの順番とする
    // アルファベットが何回登場したかを管理するバケットを用いる
    vector<int> count(52, 0);
    bool has_lower = false;
    bool has_upper = false;

    for (const auto &c : S)
    {
        if ('A' <= c && c <= 'Z')
        {
            count[c - 'A']++;
            has_upper = true;
        }
        else if ('a' <= c && c <= 'z')
        {
            count[c - 'a' + 26]++;
            has_lower = true;
        }
    }

    bool no_duplication = true;
    for (int i = 0; i < 52; i++)
    {
        if (count[i] > 1)
        {
            no_duplication = false;
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
