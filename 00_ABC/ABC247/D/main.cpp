#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll Q;
    cin >> Q;

    queue<pair<ll, ll>> que;
    for (int i = 0; i < Q; i++)
    {
        ll a;
        cin >> a;
        if (a == 1)
        {
            ll x, c;
            cin >> x >> c;
            // first : 追加する数値
            // second : 追加する個数
            que.emplace(x, c);
            // que.push(make_pair(x, c));
        }
        else if (a == 2)
        {
            ll c, sum = 0;
            cin >> c;

            // 先頭ブロックを丸ごと削除できる間は丸ごと削除する
            while (!que.empty() && que.front().second <= c)
            {
                sum += que.front().first * que.front().second;
                c -= que.front().second;
                que.pop();
            }
            // 最後に半端に残った分を先頭ブロックから部分的に削除する
            if (c != 0)
            {
                que.front().second -= c; // second > c
                sum += c * que.front().first;
            }
            cout << sum << endl;
        }
        else
        {
            cout << "something wrong." << endl;
        }
    }

    return 0;
}
