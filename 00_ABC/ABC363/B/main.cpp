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
    int N, T, P;
    cin >> N >> T >> P;

    vector<int> L(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }

    sort(L.begin(), L.end());

    if (L[N - P] >= T)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << T - L[N - P] << endl;
    }

    return 0;
}
