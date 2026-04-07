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
    int H, W;
    cin >> H >> W;
    vector<string> C(H);
    for (int i = 0; i < H; i++)
    {
        cin >> C[i];
    }

    vector<int> A(W);
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (C[i][j] == '#')
            {
                A[j]++;
            }
        }
    }

    for (int j = 0; j < W; j++)
    {
        cout << A[j] << " \n"[j == W - 1];
    }
    return 0;
}
