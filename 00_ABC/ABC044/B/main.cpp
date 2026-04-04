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
    string w;
    cin >> w;

    map<char, int> count;
    for (const auto &c : w)
    {
        count[c]++;
    }

    bool answer = true;
    for (const auto &[key, value] : count)
    {
        if (value % 2 != 0)
        {
            answer = false;
        }
    }
    if (answer)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
