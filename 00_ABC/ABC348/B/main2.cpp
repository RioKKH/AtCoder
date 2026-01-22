#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> positions(N + 1);

    for (int i = 1; i <= N; i++)
    {
        cin >> positions[i].first >> positions[i].second;
    }

    for (int i = 1; i <= N; i++)
    {
        double max = 1;
        int num = N;
        for (int j = 1; j <= N; j++)
        {
            auto [xi, yi] = positions[i];
            auto [xj, yj] = positions[j];
            double dist = sqrt((xi - xj) * (xi - xj) + (yi - yj) * (yi - yj));
            if (dist < max || dist == max && j < num)
            {
                max = dist;
                num = j;
            }
        }
        cout << num << endl;
    }

    return 0;
}
