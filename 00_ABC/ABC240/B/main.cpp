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
    int a, N;
    set<int> A;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        A.insert(a);
    }
    cout << A.size() << endl;
    return 0;
}
