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
    int N;
    cin >> N;
    vector<int> d(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> d[i];
    }

    // d_iの値は1以上100以下なので、0~100までのバケットを準備する
    // 実際につかうのはそのうちの1~100までとなる。
    vector<bool> T(101, false);
    for (int i = 1; i <= N; i++)
    {
        T[d[i]] = true;
    }

    // バケットを走査する。trueになっている個数が鏡餅の段数となる
    int answer = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (T[i])
            answer++;
    }
    cout << answer << endl;
    return 0;
}
