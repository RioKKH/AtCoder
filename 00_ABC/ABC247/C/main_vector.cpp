#include <bits/stdc++.h>
using namespace std;

vector<int> rec(int N)
{
    if (N == 1)
    {
        return {1};
    }

    // S_{n-1}を取得する
    vector<int> prev = rec(N - 1);

    // S_{N} = S_{N-1} + [N] + S_{N-1};
    // S_{N-1}
    vector<int> result = prev;
    // S_{N-1} + N
    result.push_back(N);
    // S_{N-1} + N + S_{N-1}
    result.insert(result.end(), prev.begin(), prev.end());

    return result;
}

int main()
{
    int N;
    cin >> N;

    vector<int> S = rec(N);

    for (int i = 0; i < static_cast<int>(S.size()); i++)
    {
        cout << S[i];
        if (i < static_cast<int>(S.size()) - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
