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
    int x;
    cin >> x;
    bitset<32> b(x);
    bitset<32> b(x);

    cout << b << endl;        // 元のビット列
    cout << ~b << endl;       // ビット反転 ~ を使う
    cout << (b << 1) << endl; // 左シフト
    cout << (b >> 1) << endl; // 右シフト
    return 0;
}
