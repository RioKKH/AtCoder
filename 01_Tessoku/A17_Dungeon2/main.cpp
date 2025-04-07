#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, A[100009], B[100009], dp[100009];
    std::vector<int> Answer;

    // 入力
    std::cin >> N;
    for (int i = 2; i <= N; i++)
    {
        std::cin >> A[i];
    }
    for (int i = 3; i <= N; i++)
    {
        std::cin >> B[i];
    }

    // 動的計画法
    dp[1] = 0;
    dp[2] = A[2];
    for (int i = 3; i <= N; i++)
    {
        dp[i] = std::min(dp[i - 1] + A[i], dp[i - 2] + B[i]);
    }

    // 答えの復元
    // 変数Placeは現在位置(ゴールから進んでいく)
    // 例えば入力例の場合、Placeは5->4->2->1と変化していく
    int Place = N;
    while (true)
    {
        Answer.push_back(Place);
        if (Place == 1)
        {
            break;
        }

        // どこから部屋Placeに向かうのが最適化を決める
        if (dp[Place - 1] + A[Place] == dp[Place])
        {
            Place = Place - 1;
        }
        else
        {
            Place = Place - 2;
        }
    }

    // 変数 Answer は「ゴールからの経路」になっているので逆順にする
    // 例えば入力例の場合、Answer = {5, 4, 2, 1}を{1, 2, 4, 5}にする
    std::reverse(Answer.begin(), Answer.end());

    // 答えを出力する
    std::cout << Answer.size() << std::endl;
    for (int i = 0; i < Answer.size(); i++)
    {
        if (i >= 1)
        {
            std::cout << " ";
        }
        std::cout << Answer[i];
    }
    std::cout << std::endl;
    return 0;
}
