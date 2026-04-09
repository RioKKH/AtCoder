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

    int Si, Sj;
    cin >> Si >> Sj;

    vector<string> C(H);
    for (int i = 0; i < H; i++)
    {
        cin >> C[i];
    }

    string X;
    cin >> X;

    // 0インデックスに変換する
    Si--;
    Sj--;

    for (const auto &x : X)
    {
        int Ti = Si;
        int Tj = Sj;
        if (x == 'L')
        {
            Tj--;
        }
        else if (x == 'R')
        {
            Tj++;
        }
        else if (x == 'U')
        {
            Ti--; // 行列なので上に移動するのは行のインデックスiは小さくなる方向
        }
        else if (x == 'D')
        {
            Ti++; // 行列なので下に移動数rのは行のインデックスiは大きくなる方向
        }

        if (0 <= Tj && Tj < W && 0 <= Ti && Ti < H && C[Ti][Tj] == '.')
        {
            Si = Ti;
            Sj = Tj;
        }
    }

    // 1インデックスに変換する
    Si++;
    Sj++;

    // 回答を出力する。
    cout << Si << " " << Sj << endl;
    return 0;
}
