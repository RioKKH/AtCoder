#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    string answer = "No";
    int sum = 0;
    for (int i = 0; i < N - 2; i++)
    {
        for (int j = i + 1; j < N - 1; j++)
        {
            for (int k = j + 1; k < N; k++)
            {
                sum = A[i] + A[j] + A[k];
                if (sum == 1000)
                {
                    answer = "Yes";
                }
            }
        }
    }
    cout << answer << endl;
    return 0;
}
