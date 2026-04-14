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
    int K;
    vector<int> S(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> S[i];
    }
    sort(S.begin(), S.end());
    cin >> K;

    cout << S[0] + S[1] + (S[2] << K) << endl;

    return 0;
}
