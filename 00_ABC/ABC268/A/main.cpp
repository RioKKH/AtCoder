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
    set<int> A;
    for (int i = 0; i < 5; i++)
    {
        int a;
        cin >> a;
        A.insert(a);
    }
    cout << static_cast<int>(A.size()) << endl;
    return 0;
}
