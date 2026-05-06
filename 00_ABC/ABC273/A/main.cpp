#include <bits/stdc++.h>
using namespace std;

int f(int x)
{
    if (x == 0) // 再帰を抜ける初期値
    {
        return 1;
    }
    return x * f(x - 1);
}

int main()
{
    int N;
    cin >> N;

    int answer = f(N);

    cout << answer << endl;
    return 0;
}
