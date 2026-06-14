#include <bits/stdc++.h>
#include <climits>
using namespace std;
using ll = long long;

int main()
{
    ll N;
    cin >> N;

    ll sum_of_steps = 0;
    ll current_max_height = LONG_LONG_MIN;
    for (int i = 0; i < N; i++)
    {
        ll A;
        cin >> A;
        if (A > current_max_height)
        {
            current_max_height = A;
        }
        if (A < current_max_height)
        {
            sum_of_steps += current_max_height - A;
        }
        // cout << A << " " << current_max_height << " " << sum_of_steps << endl;
    }
    cout << sum_of_steps << endl;
    return 0;
}
