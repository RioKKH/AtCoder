#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T;
    cin >> S >> T;

    string answer = "No";
    auto it = S.find(T);
    if (it == string::npos)
    {
        answer = "No";
    }
    else
    {
        answer = "Yes";
    }
    cout << answer << endl;
    return 0;
}
