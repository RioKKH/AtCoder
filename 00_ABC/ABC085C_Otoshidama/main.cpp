#include <iostream>

int main() {
  int N{0}, Y{0};
  // note1: 10000 yen, note2: 5000 yen, note3: 1000 yen

  std::cin >> N >> Y;

  int amount{0};
  for (int note1 = 0; note1 <= N; note1++) {
    for (int note2 = 0; note2 <= N - note1; note2++) {
      int note3 = N - note1 - note2;
      amount = 10000 * note1 + 5000 * note2 + 1000 * note3;
      if (amount == Y) {
        std::cout << note1 << " " << note2 << " " << note3 << std::endl;
        return 0;
      }
    }
  }
  std::cout << "-1 -1 -1" << std::endl;

  return 0;
}
