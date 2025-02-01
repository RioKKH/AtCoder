#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    int N;
    int Q;
    cin >> N >> Q;

    std::vector<int> pigeon(N + 1);
    std::vector<int> nest(N + 1, 1);
    std::unordered_set<int> mnests;

    for (int i = 1; i <= N; i++)
    {
        pigeon[i] = i;
    }

    int k = 0;
    int P = 0;
    int H = 0;
    for (int i = 0; i < Q; i++)
    {
        std::cin >> k;
        if (k == 1)
        {
            std::cin >> P >> H;
            int old_nest = pigeon[P];
            pigeon[P] = H;

            nest[old_nest]--;
            if (nest[old_nest] == 1)
            {
                mnests.erase(old_nest);
            }
            nest[H]++;
            if (nest[H] > 1)
            {
                mnests.insert(H);
            }
        }
        else if (k == 2)
        {
            std::cout << mnests.size() << std::endl;
        }
    }
    return 0;
}
