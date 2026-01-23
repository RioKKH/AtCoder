#include <bits/stdc++.h>
using namespace std;

void debug(const vector<int> &A)
{
    int N = (int)A.size() - 1;
    for (int k = 1; k <= N; k++)
    {
        if (k < N)
        {
            cout << A[k] << " ";
        }
        else
        {
            cout << A[k] << endl;
        }
    }
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    // debug(A);

    for (int i = N - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            A[j] = abs(A[j + 1] - A[j]);
        }
        // debug(A);
    }
    cout << A[1] << endl;

    return 0;
}
