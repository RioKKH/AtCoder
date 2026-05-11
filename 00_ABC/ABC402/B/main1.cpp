#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q = 0;
    int a, b;
    std::queue<int> query;

    std::cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        std::cin >> a;
        if (a == 1)
        {
            std::cin >> b;
            query.push(b);
        }
        else if (a == 2)
        {
            std::cout << query.front() << std::endl;
            query.pop();
        }
    }
    if (query.size() == Q)
    {
        std::cout << std::endl;
    }

    return 0;
}
