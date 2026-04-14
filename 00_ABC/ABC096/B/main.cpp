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
    int A, B, C, K;
    cin >> A >> B >> C >> K;
    cout << A + B + C + max({A, B, C}) * ((1 << K) - 1) << endl;
    return 0;
}
