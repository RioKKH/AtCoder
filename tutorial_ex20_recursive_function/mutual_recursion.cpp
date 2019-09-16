#include <iostream>
#include <vector>

using namespace std;

// プロトタイプ宣言
// 相互再帰では、その関数の後ろで定義される別の関数を呼び出すことになるので、
// プロトタイプ宣言が必須。このプログラムの場合はis_even()を先に定義しているので、
// is_odd()のプロトタイプ宣言があれば十分だが、わかりやすさのために両方のプロトタイプ
// 宣言を書いている
bool is_even(int);
bool is_odd(int);

// nが偶数かを判定する
bool is_even(int n) {
	// ベースケース
	if (n == 0) {
		return true;
	}
	// 再帰ステップ
	return is_odd(n - 1); // n-1が奇数なら、nは偶数
}

// nが奇数かを判定する
bool is_odd(int n) {
	// ベースケース
	if (n == 0) {
		return false;
	}
	// 再帰ステップ
	return is_even(n - 1); // n-1が偶数なら、nは奇数
}

int main() {
	cout << is_even(4) << endl;  // 1
	cout << is_odd(5) << endl; // 1
	cout << is_even(3) << endl; // 0
}

