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
    unsigned long long answer = 0;
    for (int i = 0; i < 64; i++)
    {
        unsigned long long a;
        cin >> a;

        // OK --> これがベストの書き方だろう
        // answer += a << i;

        // NG --> 1がint型で32ビットの為！
        // C/C++では左オペランドの型が一時オブジェクトの型となるのでNGとなる
        // answer += a * (1 << i);

        // 改良版
        answer += a * (1ULL << i);
    }
    cout << answer << endl;
    return 0;
}
