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

constexpr int ALNUM = 26;

int main()
{
    string S;
    cin >> S;
    vector<bool> T(ALNUM, false);

    for (const auto &s : S)
    {
        T[s - 'a'] = true;
    }

    // print_vector(T);

    for (int i = 0; i <= ALNUM; i++)
    {
        if (i == ALNUM)
        {
            cout << "None" << endl;
            break;
        }
        if (T[i] == false)
        {
            cout << char('a' + i) << endl;
            break;
        }
    }
    return 0;
}
