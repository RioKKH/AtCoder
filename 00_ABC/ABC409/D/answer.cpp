#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int l = -1;
    rep(i, n - 1)
    {
        if (s[i] > s[i + 1])
        {
            l = i;
            break;
        }
    }
    if (l != -1)
    {
        int r = n - 1;
        for (int i = l + 1; i < n - 1; i++)
        {
            if (s[l] < s[i + 1])
            {
                r = i;
                break;
            }
        }
        rotate(s.begin() + l, s.begin() + (l + 1), s.begin() + (r + 1));
    }
    cout << s << endl;
}

int main()
{
    /**
     * l 左端 次の文字の方が小さいということが見つかれば、そこをlとする
     * r 右端 rの位置に選択した文字列の最初の文字がくる
     */
    int T;
    cin >> T;
    rep(i, T) solve();
    return 0;
}
