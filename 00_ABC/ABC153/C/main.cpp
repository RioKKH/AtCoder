#include <bits/stdc++.h>
using namespace std;
using ll = long long;

template <typename T>
void print_vector(const vector<T> &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i];
        if (i < size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    int N, K;
    cin >> N >> K;
    vector<ll> H(N);

    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
    }

    sort(H.begin(), H.end());

    ll answer = 0;
    for (int i = 0; i < N - K; i++)
    {
        answer += H[i];
    }

    cout << answer << endl;

    return 0;
}
