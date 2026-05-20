#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int answer = 1;
    for (int i = 0; i < N; i++)
    {
        int mul = answer * 2; // 操作A
        int add = answer + K; // 操作B
        answer = (mul < add) ? mul : add;
    }
    cout << answer << endl;
    return 0;
}
