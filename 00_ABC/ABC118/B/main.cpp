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
    map<int, int> count;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            int a;
            cin >> a;
            count[a]++;
        }
    }

    // 集計する
    int answer = 0;
    for (const auto &[key, value] : count)
    {
        if (value == N)
        {
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}
