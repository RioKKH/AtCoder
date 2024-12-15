#include <iostream>
#include <set>

int main() {
  int N{0};
  int temp{0};
  std::set<int> set_d;

  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::cin >> temp;
    set_d.insert(temp);
  }

  std::cout << set_d.size() << std::endl;

  return 0;
}
