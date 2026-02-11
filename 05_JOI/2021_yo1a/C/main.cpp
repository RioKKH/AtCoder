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

template <typename T>
void print_set(const set<T> &S)
{
    int size = S.size();
    if (size == 0)
    {
        cout << endl;
    }
    else
    {
        for (const auto &s : S)
        {
            cout << s << endl;
        }
    }
    return;
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);

    // vector<int> answer;
    set<int> answer;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int j = 0; j < M; j++)
    {
        cin >> B[j];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i] == B[j])
            {
                answer.insert(A[i]);
            }
        }
    }

    print_set(answer);

    return 0;
}
