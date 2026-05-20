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

    for (int i = 0; i < static_cast<int>(S.size()); i++)
    {
        if (S[i] == '(')
        {
            // '('を見つけたらその位置をpush (1-indexed)
            stck.push(i + 1);
        }
        else if (S[i] == ')')
        {
            int left = stck.top();
            int right = i + 1; // 1-indexed
            stck.pop();

            // ペアを記録する どちらの形でもOK
            pairs.push_back({left, right});
            // pairs.emplace_back(left, right);
        }
    }

    // 本来はソートする必要はないが、出力形式がvectorに入れた順ではない場合
    sort(pairs.begin(), pairs.end(),
         [](auto &a, auto &b)
         { return a.second < b.second; });

    // 回答出力
    for (const auto &[l, r] : pairs)
    {
        cout << l << " " << r << endl;
    }
    return 0;
}
