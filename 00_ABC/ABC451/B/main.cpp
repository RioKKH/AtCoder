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

    vector<int> A(M + 1, 0);
    vector<int> B(M + 1, 0);

    int a, b;
    for (int i = 0; i < N; i++)
    {
        cin >> a >> b;
        A[a]++, B[b]++;
    }

    for (int i = 1; i <= M; i++)
    {
        cout << (B[i] - A[i]) << endl;
    }
    return 0;
}
