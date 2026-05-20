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
    int N, M;
    cin >> N >> M;

    set<int> A;
    for (int i = 0; i < N; i++)
    {
        int a = 0;
        cin >> a;
        A.insert(a);
    }
    int size = A.size();
    if (size >= N)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    if (size == M)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
