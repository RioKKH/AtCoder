#include <bits/stdc++.h>
using namespace std;

/**
 * 回文 (Palindrome)の最大長を求めるアルゴリズム
 */

bool isPalindrome(const string &s, int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string S;
    cin >> S;

    const int N = static_cast<int>(S.size());

    int ans = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = i; j < N; j++)
        {
            if (isPalindrome(S, i, j))
            {
                ans = max(ans, j - i + 1);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
