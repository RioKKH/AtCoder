#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> A(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    vector<int> ans;
    for (int i = 1; i <= N - 1; i++)
    {
        ans.push_back(A[i]);

        int diff = A[i + 1] - A[i];
        if (diff > 1)
        {
            for (int j = A[i] + 1; j < A[i + 1]; j++)
            {
                ans.push_back(j);
            }
        }
        else if (diff < -1)
        {
            for (int j = A[i] - 1; j > A[i + 1]; j--)
            {
                ans.push_back(j);
            }
        }
    }
    ans.push_back(A[N]);

    for (size_t i = 0; i < ans.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << ans[i];
    }
    cout << std::endl;

    return 0;
}
