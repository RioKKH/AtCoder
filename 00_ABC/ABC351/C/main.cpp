#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    stack<int> stck;
    for (int i = 0; i < N; i++)
    {
        int A;
        cin >> A;

        while (!stck.empty() && stck.top() == A)
        {
            stck.pop();
            A++;
        }
        stck.push(A);
    }
    cout << stck.size() << endl;
    return 0;
}
