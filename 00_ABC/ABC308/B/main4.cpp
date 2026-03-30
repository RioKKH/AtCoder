#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<string> C(N + 1);
    vector<string> D(M + 1);
    vector<int> P(M + 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> C[i]; // N個の食べたお皿
    }
    for (int i = 1; i <= M; i++)
    {
        cin >> D[i]; // M種類のお皿の色
    }
    for (int i = 0; i <= M; i++)
    {
        cin >> P[i]; // M種類のお皿の色に基づく金額 + 色なしの金額
    }

    map<string, int> price_index;
    for (int i = 1; i <= M; i++)
    {
        // お皿の色の名前:D[i]とインデックスiの対応付け。
        // 値段にはP[price_index[C[i]=<色の名前>]]でアクセス可能
        price_index[D[i]] = i;
    }

    int amount = {};
    for (int i = 1; i <= N; i++)
    {
        // auto it = price_index.find(C[i]);
        decltype(price_index)::iterator it = price_index.find(C[i]);
        if (it != price_index.end())
        { // 見つかった場合
            amount += P[price_index[C[i]]];
        }
        else
        { // Dに含まれない色のお皿だった場合
            amount += P[0];
        }
    }
    cout << amount << endl;
    return 0;
}
