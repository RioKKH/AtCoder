#include <iostream>
#include <vector>

using namespace std;
// 以下の方法は効率的な方法ではない。
// あくまで再帰関数を用いてどのように問題を解くかを示すためのもの

// i ~ N-1の範囲にNの約数が存在するか
bool has_divisor(int N, int i) {
	// ベースケース1
	if (i == N - 1) {
		return (N % 1 == 0);
	}

	// ベースケース2
	if (N % i == 0) {
		// 実際にはiはNの約数なので、i ~ N-1の範囲に約数が存在する
		return true;
	}

	// 再帰ステップ
	// i+1 ~ N-1の範囲の結果がi ~ N-1ｎ範囲の結果となる
	// (ベースケース2によって、iがNの約数の場合は取り除かれているので、
	// あとはi+1 ~ N-1の範囲を調べれば良い)
	return has_divisor(N, i + 1);
}

bool is_prime(int N) {
	if (N == 1) {
		// 1は素数ではない
		return false;
	}
	else if (N == 2) {
		// 2は素数
		return true;
	}
	else {
		// 2~(N-1)の範囲に約数がなければ、Nは素数
		return !has_divisor(N, 2);
	}
}


int main(int argc, char const* argv[])
{
	cout << is_prime(1) << endl; // 0
	cout << is_prime(2) << endl; // 1
	cout << is_prime(12) << endl; // 0
	cout << is_prime(13) << endl; // 1
	cout << is_prime(57) << endl; // 0
	
	return 0;
}
