#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    map<char, int> counts;
    for (const auto &c : S)
    {
        counts[c]++;
    }

    string result = "yes";
    for (const auto &[key, value] : counts)
    {
        if (value > 1)
        {
            result = "no";
            break;
        }
    }
    cout << result << endl;
    return 0;
}
