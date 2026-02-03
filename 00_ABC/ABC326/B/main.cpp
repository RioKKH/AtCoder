#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int answer = -1;
    for (int i = N;; i++)
    {
        int left, middle, right;
        left = i / 100;
        middle = i % 100 / 10;
        right = i % 10;
        // cout << left << ":" << middle << ":" << right << endl;
        if (left * middle == right)
        {
            answer = i;
            break;
        }
    }
    cout << answer << endl;
    return 0;
}
