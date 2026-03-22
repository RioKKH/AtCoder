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

    vector<int> A(N); // 非負の整数 (0も含むよ！)
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    // バケットは 0 ~ 2000までなのでサイズが2001のベクターを確保する必要がある。
    vector<bool> T(2001, false);
    for (int i = 0; i < N; i++)
    {
        T[A[i]] = true;
    }

    // バケットを操作するのでA_iの取りうる値である0 ~ 2000で走査する
    for (int i = 0; i <= 2000; i++)
    {
        if (T[i] == false)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
