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

    vector<string> S(H);
    for (int i = 0; i < H; i++)
    {
        cin >> S[i];
    }

    bool answer = true;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (S[i][j] == '#')
            {
                int count = 0;
                if (i - 1 >= 0 && S[i - 1][j] == '#')
                {
                    count++;
                }
                if (i + 1 < H && S[i + 1][j] == '#')
                {
                    count++;
                }
                if (j - 1 >= 0 && S[i][j - 1] == '#')
                {
                    count++;
                }
                if (j + 1 < W && S[i][j + 1] == '#')
                {
                    count++;
                }

                // 戻り値判定
                if (count != 2 && count != 4)
                {
                    answer = false;
                }
            }
        }
    }

    // 結果出力
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
