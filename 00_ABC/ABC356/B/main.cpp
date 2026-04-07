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
    vector<int> A(M);
    vector<vector<int>> X(N, vector<int>(M)); // N行M列

    for (int j = 0; j < M; j++)
    {
        cin >> A[j];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> X[i][j];
        }
    }

    // 集計
    vector<int> total(M);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            total[j] += X[i][j];
        }
    }

    string answer = "Yes";
    for (int j = 0; j < M; j++)
    {
        if (total[j] < A[j])
        {
            answer = "No";
            break;
        }
    }
    cout << answer << endl;
    return 0;
}
