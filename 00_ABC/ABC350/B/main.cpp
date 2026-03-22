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
    int N, Q;
    cin >> N >> Q;

    // i番目の要素に歯が生えているかどうか
    // true: 生えてる
    // false: 抜けている
    vector<bool> T(N, true);
    return 0;
}
