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

    vector<int> p(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }

    // 昇順にソートして最初からK個の和をとればよい
    sort(p.begin(), p.end());
    int sum = 0;
    for (int i = 0; i < K; i++)
    {
        sum += p[i];
    }
    cout << sum << endl;

    return 0;
}
