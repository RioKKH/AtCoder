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
    int H, W, X, Y;
    cin >> H >> W >> X >> Y;

    vector<string> S(H);
    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
    }

    int count = -3;
    for (int i = X - 1; i >= 0 && S[i][Y - 1] != '#'; i--)
        count++;
    for (int i = X - 1; i < H && S[i][Y - 1] != '#'; i++)
        count++;
    for (int j = Y - 1; j >= 0 && S[X - 1][j] != '#'; j--)
        count++;
    for (int j = Y - 1; j < W && S[X - 1][j] != '#'; j++)
        count++;

    cout << count << endl;
    return 0;
}
