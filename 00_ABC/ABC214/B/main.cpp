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
    int S, T;
    cin >> S >> T;
    int count = 0;
    for (int a = 0; a <= S; a++)
    {
        for (int b = 0; b <= S; b++)
        {
            for (int c = 0; c <= S; c++)
            {
                int sum = a + b + c;
                int mul = a * b * c;
                if (sum <= S && mul <= T)
                {
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
