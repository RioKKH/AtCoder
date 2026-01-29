#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> W(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> W[i];
    }

    int min_diff = 2 << 16;
    for (int T = 1; T < N; T++)
    {
        int sum_lower = 0;
        int sum_upper = 0;
        for (int i = 1; i <= T; i++)
        {
            sum_lower += W[i];
        }
        for (int i = N; i > T; i--)
        {
            sum_upper += W[i];
        }
        min_diff = min(min_diff, abs(sum_lower - sum_upper));
    }
    cout << min_diff << endl;
    return 0;
}
