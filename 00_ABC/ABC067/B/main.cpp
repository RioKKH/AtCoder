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

    vector<int> l(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> l[i];
    }

    // 降順にソートして、最初のK個の要素の和を取る。
    int sum = 0;
    sort(l.begin(), l.end(), std::greater<>());
    for (int i = 0; i < K; i++)
    {
        sum += l[i];
    }

    cout << sum << endl;
    return 0;
}
