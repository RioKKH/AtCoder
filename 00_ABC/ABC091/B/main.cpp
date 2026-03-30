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
    vector<string> s(N);
    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
    }

    cin >> M;
    vector<string> t(M);
    for (int i = 0; i < M; i++)
    {
        cin >> t[i];
    }

    map<string, int> count;

    for (int i = 0; i < N; i++)
    {
        count[s[i]]++;
    }
    for (int i = 0; i < M; i++)
    {
        count[t[i]]--;
    }

    int max_earn = 0;

    // 範囲for文を使う方法
    for (const auto &p : count)
    {
        // p.first  --> key
        // p.second --> value
        max_earn = max(max_earn, p.second);
    }

    // C++17の構造化束縛というやり方
    // for (const auto& [key, value] : count) {
    //     max_earn = max(max_earn, value);
    // }

    cout << max_earn << endl;

    return 0;
}
