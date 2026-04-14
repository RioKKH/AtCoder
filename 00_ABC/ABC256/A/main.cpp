#include <bits/stdc++.h>
#include <iomanip>
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
    // pow()を使った場合 -----
    // cout << setprecision(20) << pow(2, N) << endl;

    // ビットシフトを使った場合 -----
    // cout << (1 << N) << endl;

    // for文を使った場合 -----
    int result = 1;
    for (int i = 0; i < N; ++i)
    {
        result *= 2;
    }
    cout << result << endl;
    return 0;
}
