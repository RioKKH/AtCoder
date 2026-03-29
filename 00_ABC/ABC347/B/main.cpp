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

    int size = S.size();
    set<string> substring;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int length = j - i + 1;
            // cout << i << " " << j << " " << S.substr(i, length) << endl;
            substring.insert(S.substr(i, length));
            // string sub = S.substr(i, j);
        }
    }
    cout << substring.size() << endl;
    return 0;
}
