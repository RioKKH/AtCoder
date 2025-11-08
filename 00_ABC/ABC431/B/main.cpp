#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, N, Q;
    int total_weight = 0;

    cin >> X >> N;
    vector<int> W(N);
    vector<int> S(N, 0); // ステータス。現在の部品装着状況を示すとする
    //
    for (int i = 0; i < N; i++)
    {
        std::cin >> W[i];
    }

    cin >> Q;

    total_weight = X; // 初期重量はX
    for (int i = 0; i < Q; i++)
    {
        int P;
        cin >> P;
        if (S[P - 1])
        {
            // ついているので取り外す
            total_weight -= W[P - 1];
            S[P - 1] = 0;
        }
        else
        {
            // ついていないので取り付ける
            total_weight += W[P - 1];
            S[P - 1] = 1;
        }
        cout << total_weight << endl;
    }
    return 0;
}
