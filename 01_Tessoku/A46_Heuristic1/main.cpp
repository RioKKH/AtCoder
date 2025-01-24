#include <cmath>
#include <iostream>

int N, X[159], Y[159];
int P[159];        // 都市を訪れる順番の情報
bool visited[159]; // visited[i]=trueの時都市iを訪問した

// 都市pとqの間の距離を求める関数
double GetDistance(int p, int q) {
    return sqrt((X[p] - X[q]) * (X[p] - X[q]) + (Y[p] - Y[q]) * (Y[p] - Y[q]));
}

// 貪欲法によって答えを求める関数
void PlayGreedy() {
    // 配列の初期化
    // 貪欲法スタート
    // 距離が最小となる都市を探す
}

int main() {
    // 入力
    std::cin >> N;
    for (int i = 1; i <= N; i++) {
        std::cin >> X[i] >> Y[i];
    }
    // 貪欲法
    PlayGreedy();

    // 出力
    for (int i = 1; i <= N; i++) {
        std::cout << P[i] << std::endl;
    }
    return 0;
}
