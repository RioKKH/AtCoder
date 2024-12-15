#include <iostream>
#include <string>

int main() {
  int a, b, c = {};
  std::string S = {};

  std::cin >> a;
  std::cin >> b >> c;
  std::cin >> S;

  int result = a + b + c;
  std::cout << result << " " << S << std::endl;

  return 0;
}
