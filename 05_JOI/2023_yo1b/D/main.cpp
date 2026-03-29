#include <algorithm>
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

    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cin >> M;
    vector<int> B(M, 0);
    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    int score = 0;

    for (int i = 0; i < N; i++)
    {
        score += A[i];

        // ２分探索を用いる場合
        sort(B.begin(), B.end());
        auto it = std::lower_bound(B.begin(), B.end(), score);
        if (it != B.end() && *it == score)
        {
            score = 0;
        }

        // 普通にforで全探索する場合
        // for (int j = 0; j < M; j++)
        // {
        //     if (score == B[j])
        //     {
        //         score = 0;
        //         break;
        //     }
        // }
    }
    cout << score << endl;

    return 0;
}
