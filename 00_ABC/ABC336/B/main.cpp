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

    for (int i = 0;; i++)
    {
        // 下の桁から調べていく。 論理積を取って1であればその桁は1である
        if (N & (1 << i))
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
