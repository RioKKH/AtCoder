#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    string T = "";
    for (int i = 0; i < 50; i++)
    {
        T += "oxx";
    }

    if (T.find(S) != string::npos)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
