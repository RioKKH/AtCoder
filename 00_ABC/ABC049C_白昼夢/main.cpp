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

  const std::string DREAMER = "dreamer";
  const std::string ERASER = "eraser";
  const std::string DREAM = "dream";
  const std::string ERASE = "erase";

  std::cin >> S;

  while (S.size() >= 5) {
    if (S.size() >= 7 && S.substr(S.size() - 7) == DREAMER) {
      S.erase(S.size() - 7);
    } else if (S.size() >= 6 && S.substr(S.size() - 6) == ERASER) {
      S.erase(S.size() - 6);
    } else if (S.size() >= 5 && (S.substr(S.size() - 5) == DREAM ||
                                 S.substr(S.size() - 5) == ERASE)) {
      S.erase(S.size() - 5);
    } else {
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
