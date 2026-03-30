#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M; // 食べたお皿の数, 個別の価格を持つ料理の種類
    cin >> N >> M;
    vector<string> C(N + 1); // 食べたお皿の色
    vector<string> D(M + 1); // 個別の値段を持つお皿の色
    vector<int> P(M + 1);    // 各お皿の値段, 但しP0はDiに含まれないお皿の値段

    for (int i = 1; i <= N; i++)
    {
        cin >> C[i];
    }
    for (int i = 1; i <= M; i++)
    {
        cin >> D[i];
    }
    for (int i = 0; i <= M; i++)
    {
        cin >> P[i];
    }

    map<string, int> dishes;
    for (int i = 1; i <= N; i++)
    {
        dishes[C[i]]++;
    }

    int amount = 0;
    for (const auto &[label, num] : dishes)
    {
        // ここで毎回D配列を検索することで計算量が O(N x M)となってしまう
        // main2.cppを読むとよい
        auto it = find(D.begin(), D.end(), label);
        if (it == D.end())
        {
            amount += P[0] * num;
        }
        else
        {
            // イテレータからインデックスを取得する
            int index = distance(D.begin(), it);
            amount += P[index] * num;
        }
    }
    cout << amount << endl;

    return 0;
}
