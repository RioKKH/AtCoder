#include <bits/stdc++.h>
using namespace std;

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

int f(int n)
{
    int answer = 0;
    answer = 0;
    if (n % 2 == 0)
    {
        answer = n / 2;
    }
    else
    {
        answer = 3 * n + 1;
    }
    return answer;
}
int main()
{
    int n; // 初項をsと置く必要は無い。nとすることで処理が一般化する
    int answer = 1;

    cin >> n;
    set<int> S;
    S.insert(n);

    while (true)
    {
        n = f(n);
        answer++;
        if (S.find(n) != S.end())
        {
            // 見つかった場合
            break;
        }
        else
        {
            // 見つからなかった場合
            S.insert(n);
        }
    }
    cout << answer << endl;
    return 0;
}
