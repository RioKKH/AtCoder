#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<unordered_set<int>> ryori(M);
    // vector<vector<int>> ryori(M);

    for (int i = 0; i < M; i++)
    {
        int K;
        cin >> K;
        // ryori.resize(K);
        for (int j = 0; j < K; j++)
        {
            int temp;
            cin >> temp;
            ryori[i].insert(temp);
        }
    }

    for (int i = 0; i < M; i++)
    {
        int temp;
        std::cout << "size " << ryori[i].size() << ":";
        for (const auto &x : ryori[i])
        {
            std::cout << x;
        }
        std::cout << std::endl;
    }

    unordered_set<int> overcomed_ingredients;
    vector<int> answer(N);
    for (int day = 0; day < N; day++)
    {
        int temp;
        int total_ok = 0;

        cin >> temp;
        overcomed_ingredients.insert(temp);

        for (int i = 0; i < M; i++)
        {
            if (overcomed_ingredients.size() == ryori[i].size())
            {
                if (overcomed_ingredients == ryori[i])
                {
                    ++total_ok;
                }
            }
        }
        answer[day] = total_ok;
    }

    for (const int &x : answer)
    {
        cout << x << std::endl;
    }
    return 0;
}
