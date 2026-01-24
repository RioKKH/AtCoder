#include <bits/stdc++.h>
#include <iomanip>
#include <limits>
using namespace std;

struct Pos
{
    int x;
    int y;
};

int main()
{
    int N;
    cin >> N;

    vector<Pos> positions(N);
    for (int i = 0; i < N; i++)
    {
        cin >> positions[i].x >> positions[i].y;
    }

    double min_dist = numeric_limits<double>::max();
    for (int i = 0; i < N - 1; i++)
    {
        int xi = positions[i].x;
        int yi = positions[i].y;
        for (int j = i + 1; j < N; j++)
        {
            int xj = positions[j].x;
            int yj = positions[j].y;
            long long dx = xi - xj;
            long long dy = yi - yj;
            double tmp_dist = sqrt(dx * dx + dy * dy);
            if (tmp_dist < min_dist)
            {
                min_dist = tmp_dist;
            }
        }
    }
    cout << std::fixed << std::setprecision(12) << min_dist << endl;
    return 0;
}
