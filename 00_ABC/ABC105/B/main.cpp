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
    bool answer = false;
    for (int i = 0; i * 4 <= N; i++)
    {
        for (int j = 0; i * 4 + j * 7 <= N; j++)
        {
            if (i * 4 + j * 7 == N)
            {
                answer = true;
            }
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
