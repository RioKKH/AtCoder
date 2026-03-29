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

    vector<string> S(N);
    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    set<string> SS;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                // skip;
            }
            else
            {
                SS.insert(S[i] + S[j]);
            }
        }
    }
    cout << SS.size() << endl;
    return 0;
}
