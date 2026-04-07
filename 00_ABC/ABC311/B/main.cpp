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
    int N, D;
    cin >> N >> D;
    vector<string> S(N);
    for (auto &s : S)
    {
        cin >> s;
    }

    int answer = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < D; j++)
        {
            S[i][j];
        }
    }
    return 0;
}
