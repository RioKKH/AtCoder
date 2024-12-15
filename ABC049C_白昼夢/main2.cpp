#include <array>
#include <iostream>
#include <string>

/**
 * @brief 文字列Sが指定された文字列の組み合わせで構成されているかを判定する。
 *
 * 文字列Sは、"dream", "dreamer", "erase", "eraser"のいずれかの文字列を
 * 0回以上繰り返し結合して作られている。
 *
 * 文字列Ｓの後ろから、文字列長の長いものから準に比較し、一致したら削除する。
 * これによって、文字列Sが指定された文字列の組み合わせで構成されているかを
 * 判定する事ができる。
 *
 * @return 0
 */
int main() {
  std::string S = {};
  std::cin >> S;

  // 検査する文字列のリスト
  const std::array<std::string, 4> targets = {"dreamer", "eraser", "dream",
                                              "erase"};
  while (S.size() >= 5) {
    bool matched = false;
    // dreamer, eraser, dream, eraseの順に比較する
    for (const auto &target : targets) {
      // 文字列Sの末尾がtargetと一致するかを書くにする
      if (S.size() >= target.size() &&
          S.substr(S.size() - target.size()) == target) {
        S.erase(S.size() - target.size());
        matched = true;
        break; // 一致したら次のループに進む
      }
    }
    // 一致する部分が見つからない場合は終了
    if (!matched) {
      break;
    }
  }

  if (S.empty()) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }
  return 0;
}
