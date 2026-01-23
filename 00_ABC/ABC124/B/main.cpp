#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int cnt = 0;    // 海を見られる旅館の数
    int max = 0;    // 西から東にスキャンする際の各時点での最大値
    int height = 0; // 旅館の高さ
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> height;
        if (max <= height)
        {
            cnt++;
            max = height;
        }
    }
    cout << cnt << endl;

    return 0;
}
