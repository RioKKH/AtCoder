#include <iostream>

int get_digit_sum(int num) {
  int digit_sum = 0;
  int remainder = 0;
  while (num > 0) {
    remainder = num % 10;
    digit_sum += remainder;
#if 0
    std::cout << __func__ << ":number: " << num << " " << remainder << " "
              << digit_sum << std::endl;
#endif // 0

    num /= 10;
  }
  return digit_sum;
}

int main() {
  int N, A, B = {};
  int digit_sum = {};
  int result_sum = {};

  std::cin >> N >> A >> B;

  for (int i = 1; i <= N; i++) {
    digit_sum = get_digit_sum(i);
    if (A <= digit_sum && digit_sum <= B) {
      result_sum += i;
    }
  }

  std::cout << result_sum << std::endl;

  return 0;
}
