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
    int N, K;
    cin >> N >> K;
    vector<string> S(N);

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }
    vector<string> subS(K);
    for (int i = 0; i < K; i++)
    {
        subS[i] = S[i];
    }
    sort(subS.begin(), subS.end());
    for (int i = 0; i < K; i++)
    {
        cout << subS[i] << endl;
    }
    return 0;
}
