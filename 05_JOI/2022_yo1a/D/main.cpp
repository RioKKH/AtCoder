#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M; // 宝箱の数, 鍵の数
    cin >> N >> M;

    vector<int> A(N + 1); // 宝箱の開錠コード
    set<int> B;           // 鍵の開錠コード setで持たせる
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    for (int i = 1; i <= M; i++)
    {
        int tmp;
        cin >> tmp;
        B.insert(tmp);
    }

    int cnt = 0; // 開けられる宝箱の個数
    for (auto &b : B)
    {
        for (int i = 1; i <= N; i++)
        {
            if (b == A[i])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
