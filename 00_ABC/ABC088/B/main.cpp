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
    int N;
    cin >> N;

    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    sort(A.begin(), A.end(), std::greater<>());

    int alice = 0;
    int bob = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            alice += A[i];
        }
        else
        {
            bob += A[i];
        }
    }
    cout << (alice - bob) << endl;

    return 0;
}
