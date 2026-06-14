#include <bits/stdc++.h>
#include <cstdint>
using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;

    ll K = 0;
    ll tgt_num = 1;
    for (int i = 0; i < N; i++)
    {
        ll A;
        cin >> A;
        if (A != tgt_num)
        {
            K++;
        }
        else if (A == tgt_num)
        {
            tgt_num++;
        }
    }
    // if ((N - K != tgt_num - 1) || (tgt_num == 1))
    // 一つでも見つかっていればOKとなるので、-1と返すのは
    // 結局 tgt_num == 1となっているかどうかだけで判定できる。
    if (tgt_num == 1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << K << endl;
    }
    return 0;
}
