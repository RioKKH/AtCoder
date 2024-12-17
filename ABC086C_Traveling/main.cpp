#include <iostream>
#include <vector>

/**
 * @brief Get the manhattan distance between two points
 */
int getManhattanDistance(int x1, int y1, int x2, int y2) {
    return std::abs(x1 - x2) + std::abs(y1 - y2);
}

int main() {
    int N{0};
    std::cin >> N;
    std::vector<int> t(N + 1), x(N + 1), y(N + 1);
    t.at(0) = 0;
    x.at(0) = 0;
    y.at(0) = 0;

    // i = 0は初期値 t=0, x=0, y=0を格納するのに用いる
    for (int i = 1; i <= N; i++) {
        std::cin >> t.at(i) >> x.at(i) >> y.at(i);
    }

    int distance{0};
    int delta_t{0};
    bool flag{true};

    for (int i = 0; i <= N; i++) {
        delta_t = t.at(i + 1) - t.at(i);
        distance =
            getManhattanDistance(x.at(i), y.at(i), x.at(i + 1), y.at(i + 1));
        // std::cout << i << " " << delta_t << " " << distance << std::endl;
        if (distance <= delta_t) {
            // 移動距離が時間よりも短い場合
            if ((delta_t - distance) % 2 == 0) {
                // 移動可能回数が偶数回の場合
                flag = true;
            } else {
                // 移動可能回数が奇数回の場合
                flag = false;
                break;
            }
        } else {
            // 移動距離が時間よりも長い場合
            flag = false;
            break;
        }
    }

    if (flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
