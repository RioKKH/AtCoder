#include <bits/stdc++.h>
using namespace std;

int main()
{
    string result = "Yes";
    int N;
    cin >> N;

    vector<int> p(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> p[i];
    }

    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        if (i != p[i])
        {
            cnt++;
        }
    }
    if (cnt == 0 || cnt == 2)
    {
        result = "YES";
    }
    else
    {
        result = "NO";
    }

    cout << result << endl;
    return 0;
}
