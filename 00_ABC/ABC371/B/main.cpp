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

    // 各戸に長男が既存かどうかを記憶するバケット
    // true:  長男が存在する
    // false: 長男が存在しない
    vector<bool> T(N + 1, false);

    int a = 0;
    char b = {};

    for (int i = 1; i <= M; i++)
    {
        cin >> a >> b;
        if (T[a] == false && b == 'M')
        {
            cout << "Yes" << endl;
            T[a] = true;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
