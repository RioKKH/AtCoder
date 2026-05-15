#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    stack<string> stck;
    for (int i = 0; i < Q; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            string s;
            cin >> s;
            stck.push(s);
        }
        else if (a == 2)
        {
            cout << stck.top() << endl;
        }
        else if (a == 3)
        {
            stck.pop();
        }
        else
        {
            cout << "something wrong with input." << endl;
            return -1;
        }
    }
    return 0;
}
