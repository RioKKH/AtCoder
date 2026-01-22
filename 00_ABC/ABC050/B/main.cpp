#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; // 問題数
    cin >> N;
    vector<int> T(N + 1, 0); // 問題を解くのに使う時間
    for (int i = 1; i <= N; i++)
    {
        cin >> T[i];
    }

    int M; // ドリンクの種類
    cin >> M;
    vector<pair<int, int>> effectiveness(M + 1); // <問題番号, 解答時間>
    for (int i = 1; i <= M; i++)
    {
        cin >> effectiveness[i].first >> effectiveness[i].second;
    }

    for (int i = 1; i <= M; i++)
    {
        int pi = effectiveness[i].first;
        int xi = effectiveness[i].second;
        int time = 0;
        for (int j = 1; j <= N; j++)
        {
            if (j == pi)
            {
                time += xi;
            }
            else
            {
                time += T[j];
            }
        }
        cout << time << endl;
    }

    return 0;
}
