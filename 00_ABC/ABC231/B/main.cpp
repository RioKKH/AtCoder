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

    map<string, int> count;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;
        count[s]++;
    }

    string max_name = "";
    int max_cnt = INT_MIN;
    for (const auto &[name, cnt] : count)
    {
        if (cnt > max_cnt)
        {
            max_cnt = cnt;
            max_name = name;
        }
    }
    cout << max_name << endl;
    return 0;
}
