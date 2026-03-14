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

    string S, T;
    cin >> S >> T;

    int n = S.size();

    bool ok = true;
    for (int i = 0; i < 26; i++)
    {
        ok = true;
        for (int j = 0; j < n; j++)
        {
            char shifted = 'a' + (S[j] - 'a' + i) % 26;
            // debug
            // cout << S[j] << " + " << j << "=" << shifted << endl;
            if (shifted != T[j])
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            break;
        }
    }

    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}
