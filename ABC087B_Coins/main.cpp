#include <iostream>

using namespace std;

int main()
{
    int A(0);       // 500
    int B(0);       // 100
    int C(0);       //  50
    int X(0);       // 制限
    int sum(0);
    int result(0);

    cin >> A;
    cin >> B;
    cin >> C;
    cin >> X;
    // cout << A << B << C << X << endl;
    for (int i = 0; i <= A; ++i)
    {
        for (int j = 0; j <= B; ++j)
        {
            for (int k = 0; k <= C; ++k)
            {
                sum = 500*i + 100*j + 50*k;
                if (sum == X)
                {
                    ++result;
                }
            }
        }
    }
    cout << result << endl;
}
