#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    stack<string> stck;
    for (int i = 0; i < Q; i++)
    {
        string s;
        cin >> s;
        if (s == "READ")
        {
            cout << stck.top() << endl;
            stck.pop();
        }
        else
        {
            stck.push(s);
        }
    }
    return 0;
}
