#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int N = (int)S.size();
    int tmp_length = 0;
    int max_length = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'A' || S[i] == 'C' || S[i] == 'G' || S[i] == 'T')
        {
            tmp_length++;
            if (tmp_length > max_length)
            {
                max_length = tmp_length;
            }
        }
        else
        {
            tmp_length = 0;
        }
    }
    cout << max_length << endl;
    return 0;
}
