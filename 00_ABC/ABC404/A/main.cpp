#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    map<char, int> cnt;
    for (const char &c : S)
    {
        cnt[c]++;
    }

    for (char c = 'a'; c <= 'z'; c++)
    {
        // string::npos
        // 型: size_t
        // 意味: no positionで該当する位置が存在しないことを意味する
        if (S.find(c) == string::npos)
        {
            cout << c << endl;
            break;
        }
        else
        {
        }
    }
    return 0;
}
