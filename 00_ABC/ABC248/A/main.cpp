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
    /**
     * バケット
     * あるデータの中に各整数が含まれるかどうかを効率的に管理する方法
     * T[X]:= True (X が含まれる時
     * T[X]:= False (Xが含まれない時)
     */

    constexpr int NUM = 10;
    string S;
    cin >> S; // 長さ9であることが保証されている

    // バケットの長さは0~9の10になる
    vector<bool> T(NUM, false);

    // Sの長さは9
    for (int i = 0; i < 9; i++)
    {
        // 文字列処理の基本パターンを用いてバケットのインデックスとする
        T[S[i] - '0'] = true;
    }

    for (int i = 0; i < NUM; i++)
    {
        if (T[i] == false)
        {
            cout << i << endl;
        }
    }

    return 0;
}
