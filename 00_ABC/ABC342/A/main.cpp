#include <bits/stdc++.h>
using namespace std;

/**
 * 全探索問題
 * 条件数も少ないし、文字列の長さも短いので、
 * 全部数え上げてしまえばよい
 * mapを使うことで簡単に表現できるというのがこの問題のキモ
 */

int main()
{
    std::string S;
    std::cin >> S;

    // 各文字の出現回数をカウント
    map<char, int> cnt;
    for (const char &c : S)
    {
        cnt[c]++;
    }

    // 1回しか出現しない文字を探す
    char target = '\0';
    for (const auto p : cnt)
    {
        if (p.second == 1)
        {
            target = p.first;
            break;
        }
    }

    // その文字を探す
    for (int i = 0; i < (int)S.size(); i++)
    {
        if (S[i] == target)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}
