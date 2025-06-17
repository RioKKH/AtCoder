#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    std::cin >> N >> Q;
    std::vector<int> boxes(N + 3, 0);
    std::vector<int> X(Q + 3, 0);

    for (int i = 1; i <= Q; ++i)
    {
        std::cin >> X[i];
    }

    for (int i = 1; i <= Q; ++i)
    {
        if (X[i] >= 1)
        {
            boxes[X[i]]++;
            std::cout << X[i];
        }
        else if (X[i] == 0)
        {
            int min = 1000;
            int index = 1;
            for (int i = 1; i <= N; ++i)
            {
                if (boxes[i] < min)
                {
                    // std::cout << "boxes:" << boxes[i] << " " << "min" << min << std::endl;
                    min = boxes[i];
                    index = i;
                }
            }
            boxes[index]++;
            std::cout << index;
        }
        if (i < Q)
            std::cout << " ";
    }
    std::cout << endl;

    return 0;
}
