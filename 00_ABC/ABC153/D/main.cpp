#include <bits/stdc++.h>
using namespace std;

long long f(long long N)
{
    if (N == 1)
    {
        return 1;
    }
    return f(N / 2) * 2 + 1;
}

int main()
{
    long long N;
    cin >> N;
    long long answer = f(N);
    cout << answer << endl;
    return 0;
}
