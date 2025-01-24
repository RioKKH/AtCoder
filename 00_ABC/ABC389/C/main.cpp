#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;
    long long now = 0;
    vector<long long> x;
    int id = 0;
    int found3 = 0;

    for (int i = 0; i < Q; ++i)
    {
        int t;
        cin >> t;
        if (t == 1)
        { // 1文字目が1の場合
            long long l;
            cin >> l;
            x.push_back(now);
            now += l;
        }
        else if (t == 2)
        { // 1文字目が2の場合
            id++;
        }
        else
        { // 1文字目が3の場合
            int k;
            cin >> k;
            k--;
            cout << x[id + k] - x[id] << "\n";
            found3 = 1;
        }
    }
    if (found3 == 0)
    {
        // 3が一度も出現しなかった場合
        cout << endl;
    }
    return 0;
}
