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
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int answer = 0;

    for (int i = 0; i <= A; i++)
    {
        for (int j = 0; j <= B; j++)
        {
            for (int k = 0; k <= C; k++)
            {
                if (i * 500 + j * 100 + k * 50 == X)
                    answer++;
            }
        }
    }
    cout << answer << endl;
    return 0;
}
