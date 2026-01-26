#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> D(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> D[i];
    }

    for (int i = 1; i < N; i++)
    {
        int distance = 0;
        for (int j = i; j < N; j++)
        {
            distance += D[j];
            cout << distance;
            if (j < N - 1)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }
    }
    return 0;
}
