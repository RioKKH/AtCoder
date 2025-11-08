#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> H(N + 1, 0);
    vector<int> B(M + 1, 0);

    // i個目の頭パーツの重さ
    for (int i = 1; i <= N; i++)
    {
        cin >> H[i];
    }
    // i個目の体パーツの重さ
    for (int i = 1; i <= M; i++)
    {
        cin >> B[i];
    }
    sort(H.begin() + 1, H.end());
    sort(B.begin() + 1, B.end());

    int num = 0;
    int i = 1, j = 1;
    for (; i <= N; i++)
    {
        for (; j <= M; j++)
        {
            if (H[i] <= B[j])
            {
                num++;
                j++;
                break;
            }
            else
            {
                continue;
            }
        }
    }
    if (num >= K)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
