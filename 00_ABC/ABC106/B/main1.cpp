#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int answer = 0;
    for (int i = 1; i <= N; i++)
    {
        int count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                // cout << "i:" << i << " j:" << j << " count:" << count << endl;
            }
        }
        if (i % 2 == 1 && count == 8)
        {
            answer++;
        }
    }

    cout << answer << endl;
    return 0;
}
