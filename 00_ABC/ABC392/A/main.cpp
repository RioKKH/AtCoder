#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A1, A2, A3;

    cin >> A1 >> A2 >> A3;
    if (A1 * A2 == A3)
        cout << "Yes" << endl;
    else if (A2 * A3 == A1)
        cout << "Yes" << endl;
    else if (A3 * A1 == A2)
        cout << "Yes" << endl;
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
