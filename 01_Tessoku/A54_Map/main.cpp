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
    map<string, int> table;

    for (int i = 0; i < Q; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            string name;
            int score;
            cin >> name >> score;
            table[name] = score;
        }
        if (a == 2)
        {
            string name;
            cin >> name;
            cout << table[name] << endl;
        }
    }
    return 0;
}
