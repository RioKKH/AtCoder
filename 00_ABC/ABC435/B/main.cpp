#include <bits/stdc++.h>
using namespace std;

bool isNotDivisible(const vector<int> &A, int l, int r)
{
    int sum = 0;
    for (int i = l; i <= r; i++)
    {
        sum += A[i];
    }

    bool answer = true;
    for (int i = l; i <= r; i++)
    {
        if (sum % A[i] == 0)
        {
            answer = false;
        }
    }

    return answer;
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

    int count = 0;
    for (int l = 1; l < N; l++)
    {
        for (int r = N; l < r; r--)
        {
            bool answer = isNotDivisible(A, l, r);
            if (answer)
            {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
