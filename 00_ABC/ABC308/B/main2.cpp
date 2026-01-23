#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    vector<string> C(N);
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
    }

    vector<string> D(M);
    for (int i = 0; i < M; i++)
    {
        cin >> D[i];
    }

    vector<int> P(M + 1);
    for (int i = 0; i <= M; i++)
    {
        cin >> P[i];
    }

    // D[i]からインデックスへのマップを作成
    // この変換関係をmap として作成することが大事
    // 計算量をO(N + M) に削減させるキモとなる
    map<string, int> price_index;
    for (int i = 0; i < M; i++)
    {
        price_index[D[i]] = i + 1; // P[1] ~ P[M]に対応
    }

    int amount = 0;
    for (int i = 0; i < N; i++)
    {
        if (price_index.count(C[i]))
        { // 非0である→
            amount += P[price_index[C[i]]];
        }
        else
        {
            amount += P[0];
        }
    }
    cout << amount << endl;
    return 0;
}
