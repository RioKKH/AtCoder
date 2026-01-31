#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, T; // T ⊂ S
    cin >> S >> T;
    int N = S.size();
    int M = T.size();

    int numOfMinMod = 2 << 16;
    for (int i = 0; i <= N - M; i++)
    {
        int count = 0;
        for (int j = 0; j < M; j++)
        {
            if (S[i + j] != T[j])
            {
                count++;
            }
        }
        numOfMinMod = min(numOfMinMod, count);
    }
    cout << numOfMinMod << endl;
    return 0;
}
