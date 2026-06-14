#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll X, Y;
    cin >> X >> Y;

    ll count = 0;
    ll elem = X;
    while (elem <= Y)
    {
        count++;
        elem *= 2;
    }
    cout << count << endl;

    return 0;
}
