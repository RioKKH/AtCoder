#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N; // 棒の数
    vector<int> L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }

    sort(L.begin(), L.end());

    int count = 0;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                // 3辺の長さが異なるかを確認する
                bool cond1 = L[i] != L[j] && L[j] != L[k] && L[i] != L[k];

                // 三角不等式を満たすかどうかを確認する
                bool cond2 = L[i] + L[j] > L[k];
                if (cond1 && cond2)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
