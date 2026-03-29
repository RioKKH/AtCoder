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

    vector<string> S(N);
    set<string> T;

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    string t;
    for (int i = 0; i < M; i++)
    {
        cin >> t;
        T.insert(t);
    }

    int count = 0;
    for (const auto &s : S)
    {
        for (auto it = T.begin(); it != T.end(); it++)
        {
            if (s.substr(3, 3) == *it)
            {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}
