#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    stack<int> stck;
    for (int i = 0; i < Q; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            int x;
            cin >> x;
            stck.push(x);
        }
        else if (a == 2)
        {
            if (stck.empty())
            {
                cout << "0" << endl;
            }
            else
            {
                cout << stck.top() << endl;
                stck.pop();
            }
        }
        else
        {
            cout << "something wrong with input data" << endl;
        }
    }
    return 0;
}
