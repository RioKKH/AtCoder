#include <bits/stdc++.h>
using namespace std;

int main()
{
    string N;
    cin >> N;

    int answer = 0;

    for (int i = 0; i < (int)N.size(); i++)
    {
        // cout << "i:" << i << " " << N[i] << " " << (1 << (N.size() - 1 - i)) << endl;
        answer += (N[i] - '0') * (1 << (N.size() - 1 - i));
    }
    cout << answer << endl;
    return 0;
}
