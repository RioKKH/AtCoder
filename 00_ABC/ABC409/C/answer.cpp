#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;

int main()
{
    int n, L;
    cin >> n >> L;

    vector<int> x(n);
    rep(i, n - 1)
    {
        int d;
        cin >> d;
        x[i + 1] = (x[i] + d) % L;
    }

    vector<int> cnt(L);
    rep(i, n) cnt[x[i]]++;

    if (L % 3 != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    int r = L / 3;

    ll ans = 0;
    rep(a, n)
    {
        int x1 = (x[a] + r) % L;
        int x2 = (x1 + r) % L;
        ans += (ll)cnt[x1] * cnt[x2];
    }
    ans /= 3;
    cout << ans << endl;
    return 0;
}
