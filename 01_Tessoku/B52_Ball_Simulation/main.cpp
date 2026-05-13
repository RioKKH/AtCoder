#include <bits/stdc++.h>
using namespace std;

int main()
{
    // N : N個のボール
    // X個目のボールを青で塗る
    int N, X;
    cin >> N >> X;

    // 色付きボールの初期配列
    // # : Aiは黒
    // . : Aiは白
    // @ : Aiは青
    string A;
    cin >> A;

    queue<int> que;
    que.push(X);
    X--; // 0-indexed
    A[X] = '@';

    while (!que.empty())
    {
        int org = que.front();
        int pos = org;
        pos--; // 0-indexed
        que.pop();

        if (A[pos - 1] == '.')
        {
            A[pos - 1] = '@';
            que.push(org - 1);
        }
        if (A[pos + 1] == '.')
        {
            A[pos + 1] = '@';
            que.push(org + 1);
        }
    }

    cout << A << endl;

    return 0;
}
