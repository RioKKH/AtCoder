#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N;
    int result(0);
    bool run = true;
    vector<int> A(N, 0);

    // Read data from standard input
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    while (true)
    {
        for (int i = 0; i < N; ++i)
        {
            if (A[i] % 2 == 0)
            {
                A[i] /= 2;
            }
            else
            {
                run = false;
            }
        }
        if (run) { ++result; }
        else { break; }
    }
    cout << result << endl;
}
