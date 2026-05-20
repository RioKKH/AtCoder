#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    // '('の位置を記録するスタック
    stack<int> stck;
    // 対応するペアを記録するリスト
    vector<pair<int, int>> pairs;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '(')
        {
            // '('を見つけたらその位置をpush (1-indexed)
            stck.push(i + 1);
        }
    }
    return 0;
}
