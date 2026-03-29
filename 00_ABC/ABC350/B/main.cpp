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
    vector<bool> T(N + 1, true);

    // クエリをvectorに保存しておく
    vector<int> S(Q, 0);
    for (int i = 0; i < Q; i++)
    {
        cin >> S[i];
    }

    for (int i = 0; i < Q; i++)
    {
        T[S[i]] = !T[S[i]]; // boolを反転させる vector<bool>.flip()もある
    }
    // print_vector(T);
    // 0番目の要素は除外する。
    int answer = std::count(T.begin() + 1, T.end(), true);
    cout << answer << endl;

    return 0;
}
