#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

template <typename T>
void print_vector(const vector<T> &v)
{
    int size = v.size();
    for (int i = 0; i < size; i++)
    {
        cout << v[i];
        if (i < size - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}

int main()
{
    int N;
    cin >> N;

    vector<int> X(5 * N, 0);
    for (int i = 0; i < 5 * N; i++)
    {
        cin >> X[i];
    }

    sort(X.begin(), X.end());
    double ave = 0;
    int sum = 0;
    for (int i = N; i < 4 * N; i++)
    {
        sum += X[i];
    }
    ave = static_cast<double>(sum) / (3 * N);
    std::cout << std::fixed << setprecision(15) << ave << endl;

    return 0;
}
