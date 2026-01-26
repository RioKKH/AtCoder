#include <bits/stdc++.h>
using namespace std;

bool isDivisible(const vector<int> &A, int l, int r)
{
    int sum = 0;
    for (int i = l; i < r; i++)
    {
        sum += A[i];
    }
    bool answer;
    if (sum % A[l] == 0 || sum % A[r] == 0)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    return answer;
}

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int count = 0;
    for (int l = 0; l < N; l++)
    {
        for (int r = N - 1; l < r; r--)
        {
            bool answer = isDivisible(A, l, r);
            if (answer)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
