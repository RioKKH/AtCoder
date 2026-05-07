#include <bits/stdc++.h>
using namespace std;

void rec(int N)
{
    if (N == 1)
    {
        cout << 1;
        return;
    }

    rec(N - 1);
    cout << " " << N << " ";
    rec(N - 1);
}

int main()
{
    int N;
    cin >> N;

    rec(N);
    cout << endl;

    return 0;
}
