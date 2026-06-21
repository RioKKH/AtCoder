#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll N, K;
    cin >> N >> K;

    map<ll, ll> A;
    for (ll i = 0; i < N; i++)
    {
        ll tmp;
        cin >> tmp;
        A[tmp] += tmp;
    }

    vector<ll> sums;

    for (const auto &[key, value] : A)
    {
        sums.push_back(value);
    }

    sort(sums.begin(), sums.end());

    ll answer = 0;
    for (int i = 0; i < static_cast<int>(sums.size()) - K; i++)
    {
        answer += sums[i];
    }
    cout << answer << endl;
    return 0;
}
