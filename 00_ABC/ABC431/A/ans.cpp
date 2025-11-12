#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, B;

    cin >> H >> B;
    if (H <= B)
        cout << max(H - B, 0) << endl;

    return 0;
}
