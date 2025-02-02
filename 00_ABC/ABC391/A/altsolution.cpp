#include <bits/stdc++.h>
using namespace std;

int main()
{
    string D;
    cin >> D;
    string ans = "";
    for (char d : D) // この書き方が出来る事が今回の学び
    {
        if (d == 'N')
        {
            ans += 'S';
        }
        else if (d == 'S')
        {
            ans += 'N';
        }
        else if (d == 'E')
        {
            ans += 'W';
        }
        else if (d == 'W')
        {
            ans += 'E';
        }
    }
    cout << ans << endl;

    return 0;
}
