#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print_vector(const vector<T> &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i];
        if (i < size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    queue<int> que;
    for (int i = 0; i < Q; i++)
    {
        int a;
        cin >> a;

        if (a == 1)
        {
            int q;
            cin >> q;
            que.push(q);
        }
        else if (a == 2)
        {
            cout << que.front() << endl;
            que.pop();
        }
    }
    return 0;
}
