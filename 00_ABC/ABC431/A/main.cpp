#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, B;

    cin >> H >> B;
    int diff = B - H;
    if (diff > 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << -1 * diff << endl;
    }
    return 0;
}
