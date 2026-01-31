#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int N = S.size();
    string smin = S;
    string smax = S;

    for (int i = 0; i < N; i++)
    {
        S = S.substr(1, N - 1) + S[0];
        // cout << S << endl;
        smin = min(smin, S);
        smax = max(smax, S);
    }

    cout << smin << endl;
    cout << smax << endl;
    return 0;
}
