#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int K;

    std::cin >> N;
    std::vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
    }
    std::cin >> K;

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (K <= A[i])
            count++;
    }
    std::cout << count << std::endl;

    return 0;
}
