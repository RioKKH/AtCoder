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
    ll N, X, Y;
    cin >> N >> X >> Y;

    vector<ll> A(N, 0);
    vector<ll> B(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());

    ll sum_of_A = 0, sum_of_B = 0;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum_of_A += A[i];
        sum_of_B += B[i];
        sum++;
        if ((sum_of_A > X) || (sum_of_B > Y))
        {
            break;
        }
    }

    cout << sum << endl;
    return 0;
}
