#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> P(N + 1); // 人->見つめている人
    vector<int> Q(N + 1); // 人->ゼッケン
    vector<int> R(N + 1); // ゼッケン->人

    for (int i = 1; i <= N; i++)
    {
        cin >> P[i]; // 0は使わない。1~Nまでの数値を使う
    }
    for (int i = 1; i <= N; i++)
    {
        cin >> Q[i];
    }
    for (int i = 1; i <= N; i++)
    {
        R[Q[i]] = i;
    }

    for (int i = 1; i <= N; i++)
    {
        cout << Q[P[R[i]]];
        if (i <= N - 1)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
