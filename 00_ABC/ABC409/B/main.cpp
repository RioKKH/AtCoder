#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    std::cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int answer = 0;
    for (int x = 0; x <= N; x++)
    {
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            if (A[i] >= x)
            {
                count++;
            }
        }
        if (count >= x)
        {
            answer = x;
        }
    }

    cout << answer << endl;
    return 0;
}
