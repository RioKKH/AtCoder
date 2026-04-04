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
    int N, K;
    cin >> N >> K;

    vector<int> count(N, 0);

    // お菓子i
    for (int i = 0; i < K; i++)
    {
        int d;
        cin >> d;
        // 持っている人jの数
        for (int j = 0; j < d; j++)
        {
            // cout << "d: " << d << " i:" << i << " j: " << j << endl;
            int name_idx; // 持っている人の名前 (インデックス表記)
            cin >> name_idx;
            count[name_idx - 1]++;
        }
    }

    // print_vector(count);

    int answer = 0;
    for (const auto &c : count)
    {
        if (c == 0)
        {
            answer++;
        }
    }
    cout << answer << endl;
    return 0;
}
