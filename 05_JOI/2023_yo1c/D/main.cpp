#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; // 生徒の人数
    cin >> N;
    vector<int> records(N + 1, 0); // 記録表
    map<int, int> count;           // key: 記録, value: 人数

    for (int i = 1; i <= N; i++)
    {
        cin >> records[i];
        count[records[i]]++;
    }

    map<int, int> rank; // key: 記録, value: 順位
    int cumsum = 0;
    for (auto &[time, cnt] : count)
    {
        rank[time] = cumsum + 1; // 順位 = 一位 + それ未満の人数
        cumsum += cnt;
    }

    for (int i = 1; i <= N; i++)
    {
        cout << rank[records[i]] << endl;
    }

    return 0;
}
