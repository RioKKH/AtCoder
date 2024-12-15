#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int N{0};
  int alice{0}, bob{0};

  std::cin >> N;
  std::vector<int> v(N);

  for (int i = 0; i < N; i++) {
    std::cin >> v[i];
  }

  // Sort the vector in ascending order
  sort(v.begin(), v.end());

  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      alice += v[N - 1 - i];
    } else {
      bob += v[N - 1 - i];
    }
  }
  std::cout << alice - bob << std::endl;
  return 0;
}
