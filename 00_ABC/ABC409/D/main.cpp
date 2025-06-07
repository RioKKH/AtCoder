#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;

    std::cin >> T;
    std::vector<int> N(T);
    std::vector<string> S(T);
    for (int i = 0; i < T; i++)
    {
        std::cin >> N[i];
        std::cin >> S[i];
    }

    for (int i = 0; i < T; i++)
    {
        std::string best = S[i];
        for (int l = 1; l <= N[i]; l++)
        {
            for (int r = l; r <= N[i]; r++)
            {
                std::string temp = S[i];

                if (r > l)
                {
                    char first = temp[l - 1];
                    for (int i = l - 1; i < r - 1; i++)
                    {
                        temp[i] = temp[i + 1];
                    }
                    temp[r - 1] = first;
                }
                if (temp < best)
                {
                    best = temp;
                }
            }
        }
        std::cout << best << std::endl;
    }
    return 0;
}
