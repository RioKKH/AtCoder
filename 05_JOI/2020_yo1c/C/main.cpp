#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N + 1);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int max_length = 1;
    int tmp_length = 1;
    for (int i = 0; i < N - 1; i++)
    {
        if (A[i] <= A[i + 1])
        {
            tmp_length++;
            max_length = max(max_length, tmp_length);
        }
        else
        {
            tmp_length = 1;
        }
    }
    cout << max_length << endl;
    return 0;
}
