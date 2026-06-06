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
    ll N, M;
    cin >> N >> M;
    vector<pair<ll, ll>> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    // pairのソートは、まずfirstを基準に比較し、firstが同じ場合のみ
    // secondを比較する(辞書順)
    sort(v.begin(), v.end());

    ll answer = 0;
    for (int i = 0; i < N && M > 0; i++)
    {
        answer += v[i].first * min(M, v[i].second);
        M -= min(M, v[i].second);
    }
    cout << answer << endl;
    return 0;
}
