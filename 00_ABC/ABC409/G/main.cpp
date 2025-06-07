#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); i++)
using mint = modint998244353;

int main()
{
    int n;
    mint p, q;
    cin >> n >> p;
    p /= 100;
    q = mint(1) - p;

    rep(k, n)
    {
        mint ans;
        rep(i, n)
        {
            if (i < k)
                continue;
            mint now;
            now += p.pow(k) * q.pow(i - k) * p *;
        }
    }
    return 0;
}
