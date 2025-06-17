#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

// oj t -S で実行する

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, n) a[i] = i + 1;
    int offset = 0;

    rep(qi, q)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            int p, x;
            cin >> p >> x;
            p--;
            a[(offset + p) % n] = x;
        }
        if (type == 2)
        {
            int p;
            cin >> p;
            p--;
            cout << a[(offset + p) % n] << '\n';
        }
        if (type == 3)
        {
            int k;
            cin >> k;
            offset = (offset + k) % n;
        }
    }
    return 0;
}
