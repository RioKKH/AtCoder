#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int N;
    cin >> N;

    stack<pair<ll, ll>> stck;
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        ll a;
        cin >> a;
        count++;
        if (stck.empty() || stck.top().first != a)
        {
            stck.emplace(a, 1);
        }
        else if (stck.top().first == a)
        {
            stck.top().second++;

            if (stck.top().first == stck.top().second)
            {
                count -= stck.top().second;
                stck.pop();
            }
        }
        cout << count << endl;
    }
    return 0;
}
