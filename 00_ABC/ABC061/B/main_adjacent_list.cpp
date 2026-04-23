#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> G(N + 1, 0);

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        // 隣接行列の時は、a --> bという形でどこからどこに続く道
        // かという情報も記録していたが、今回求められているのは
        // a --> どこかしらの都市 という形で道の数だけが分かれば
        // よいので各都市からつながる道の数だけを始点の都市を
        // インデックスとする隣接リストの形でカウントすればよい。
        G[a]++;
        G[b]++;
    }
    for (int i = 1; i <= N; i++)
        cout << G[i] << endl;
    {
    }
    return 0;
}
