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

/**
 * XORの演算
 * A xor A = 0であることを利用すると
 * A xor C = Bの両辺に A を xorすると
 * A xor (A xor C) = A xor B
 * (A xor A) xor C = A xor B
 * 0 xor C = A xor B
 * C = A xor B (∵ 0 xor C = C)
 * と書けることを利用する
 */
int main()
{
    int A, B;
    cin >> A >> B;
    cout << (A ^ B) << endl;
    return 0;
}
