#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; // 単語の数
    cin >> N;

    vector<string> W(N + 1); // 単語
    map<string, int> count;  // 複数回出現していないかのチェック
    for (int i = 1; i <= N; i++)
    {
        cin >> W[i];
        count[W[i]]++;
    }

    string result = "Yes";

    // つながりチェック
    for (int i = 1; i <= N - 1; i++)
    {
        if (W[i].back() != W[i + 1].front())
        {
            result = "No";
            break;
        }
    }

    // 複数回出現チェック
    for (auto &[key, cnt] : count)
    {
        if (cnt > 1)
        {
            result = "No";
            break;
        }
    }

    cout << result << endl;

    return 0;
}
