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

    vector<int> A;

    for (int i = 2; i <= N; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if ((i % j == 0) && (i != j))
            {
                break;
            }
            else if ((i % j == 0) && (i == j))
            {
                A.push_back(j);
            }
        }
    }
    print_vector(A);

    return 0;
}
