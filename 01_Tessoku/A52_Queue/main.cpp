#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    queue<string> que;
    for (int i = 0; i < Q; i++)
    {
        int q;
        cin >> q;
        if (q == 1)
        {
            string s;
            cin >> s;
            que.push(s);
        }
        else if (q == 2)
        {
            cout << que.front() << endl;
        }
        else if (q == 3)
        {
            que.pop();
        }
    }
    return 0;
}
