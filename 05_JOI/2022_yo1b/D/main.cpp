#include <bits/stdc++.h>
#include <climits>
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

    map<int, int> count;
    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        count[a]++;
    }

    // 最小出現回数を求める
    int min_count = INT_MAX;
    for (const auto &[num, cnt] : count)
    {
        min_count = min(min_count, cnt);
    }

    // mapはキーで自動ソート済み
    // 一番最初に見つかる最小出現回数が答えとなる
    for (const auto &[num, cnt] : count)
    {
        if (cnt == min_count)
        {
            cout << num << endl;
            break;
        }
    }

    return 0;
}
