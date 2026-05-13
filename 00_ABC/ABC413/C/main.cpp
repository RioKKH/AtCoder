#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long Q;
    cin >> Q;

    // 工夫せずにforループなどで長大なqueueを作ると時間計算量が爆発する。
    // そこでランレングス圧縮を用いる。
    queue<pair<long long, long long>> que;

    for (long long i = 0; i < Q; i++)
    {
        long long a;
        cin >> a;
        if (a == 1)
        {
            long long c, x;
            cin >> c >> x;
            // que.push(make_pair(c, x));
            que.emplace(c, x);
        }
        else if (a == 2)
        {
            long long k, sum = 0;
            cin >> k;

            // 先頭ブロックを丸ごと削除できる間は丸ごと削除する
            while (!que.empty() && que.front().first <= k)
            {
                sum += que.front().first * que.front().second;
                // 削除した個数分、残りの削除数を減らす
                k -= que.front().first;
                // 先頭ブロックを削除(丸ごと削除してので)
                que.pop();
            }
            // 最後に半端に残った分を部分的に削除する
            if (k != 0) // まだ削除する必要がある場合
            {
                que.front().first -= k; // この時点で que.front().first > k
                sum += k * que.front().second;
            }

            cout << sum << endl;
        }
        else
        {
            cout << "Something wrong with this code." << endl;
        }
    }

    return 0;
}
