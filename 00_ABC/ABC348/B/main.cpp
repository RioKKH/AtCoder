#include <bits/stdc++.h>
#include <cmath>
using namespace std;

typedef struct
{
    int x;
    int y;
} pos;

int main()
{
    int N;
    cin >> N;

    vector<pos> positions(N + 1);
    for (int i = 1; i <= N; i++)
    {
        cin >> positions[i].x >> positions[i].y;
    }

    for (int i = 1; i <= N; i++)
    {
        double max = 1;
        int num = N;
        for (int j = 1; j <= N; j++)
        {
            double tmp = 0;
            tmp = sqrt(pow((positions[i].x - positions[j].x), 2) + pow((positions[i].y - positions[j].y), 2));
            if (max < tmp)
            {
                max = tmp;
                num = j;
            }
            else if (max == tmp)
            {
                if (j < num)
                {
                    num = j;
                }
            }
        }
        cout << num << endl;
    }

    return 0;
}
