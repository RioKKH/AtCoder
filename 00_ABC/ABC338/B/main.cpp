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
    string S;
    cin >> S;

    // key : アルファベット
    // val : アルファベットの出現回数
    map<char, int> count;
    for (const auto &c : S)
    {
        count[c]++;
    }

    int max_count = INT_MIN;
    for (const auto &[key, cnt] : count)
    {
        max_count = max(max_count, cnt);
    }

    for (const auto &[key, val] : count)
    {
        if (max_count == val)
        {
            cout << key << endl;
            break;
        }
        // debug print
        // cout << num << " " << cnt << endl;
    }
    return 0;
}
