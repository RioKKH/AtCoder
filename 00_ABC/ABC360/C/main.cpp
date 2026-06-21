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
    vector<int> A(N);
    vector<int> W(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        --A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> W[i];
    }

    // 集計用のテーブル
    vector<vector<long long>> table(N);
    for (int i = 0; i < N; i++)
    {
        table[A[i]].push_back(W[i]);
    }

    // テーブルを集計する為にまずはソートする
    for (int i = 0; i < N; i++)
    {
        sort(table[i].begin(), table[i].end());
    }

    // テーブルを集計する
    int answer = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < static_cast<int>(table[i].size()) - 1; j++)
        {
            answer += table[i][j];
        }
    }
    cout << answer << endl;
    return 0;
}
