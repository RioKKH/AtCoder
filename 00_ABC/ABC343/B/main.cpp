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
    vector<vector<int>> A(N + 1, vector<int>(N + 1));

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 1; i <= N; i++)
    {
        // 先ずはデータを集計する。
        // vector<int>型に行ごとのデータを集計すればよい
        vector<int> one;
        for (int j = 1; j <= static_cast<int>(A[i].size()); j++)
        {
            if (A[i][j] == 1)
            {
                one.push_back(j);
            }
        }

        // 行ごとに集計したデータを行ごとに出力する
        for (int j = 0; j < static_cast<int>(one.size()); j++)
        {
            cout << one[j];
            if (j < static_cast<int>(one.size()) - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
