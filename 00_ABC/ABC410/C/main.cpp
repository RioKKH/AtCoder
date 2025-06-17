#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    std::cin >> N >> Q;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        A[i] = i + 1;
    }

    int query;
    int p;
    int x;
    int k;
    int offset = 0; // 現在の位置を指し示す変数

    for (int i = 0; i < Q; i++)
    {
        std::cin >> query;
        if (query == 1)
        {
            std::cin >> p >> x;
            int actual_index = (p - 1 + offset) % N;
            A[actual_index] = x;
        }
        else if (query == 2)
        {
            std::cin >> p;
            int actual_index = (p - 1 + offset) % N;
            std::cout << A[actual_index] << std::endl;
        }
        else if (query == 3)
        {
            std::cin >> k;
            offset = (offset + k) % N;
            // offset = (N + offset - k % N) % N;
        }
    }
    return 0;
}
