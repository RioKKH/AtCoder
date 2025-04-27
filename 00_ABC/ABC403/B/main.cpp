#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::string S, T;
    std::cin >> S;
    std::cin >> T;
    bool result = false;

    for (size_t i = 0; i < S.size(); i++)
    {
        if (S[i] == T[0] || S[i] == '?')
        {
            for (size_t j = 0; j < T.size(); j++)
            {
                if (S[i + j] == T[j] || S[i + j] == '?')
                {
                    if (j == T.size() - 1)
                    {
                        result = true;
                    }
                }
                else
                {
                    break;
                }
            }
        }
    }

    if (result == true)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}
