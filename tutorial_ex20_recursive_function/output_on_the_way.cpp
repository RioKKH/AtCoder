#include <iostream>
#include <vector>
#include <string>

using namespace std;

// num個文のスペースからなる文字列を返す (字下げに用いる)
string space(int num) {
	string ret = "";
	for (int i = 0; i < num; i++) {
		ret += " ";
	}
	return ret;
}


// 呼び出しの深さに応じて字下げし、関数の開始時点であるというメセージを出力
void print_in(int n, int depth) {
	cout << space(depth * 4) << "func(" << n << ", " << depth << ") in" << endl;
}

// 呼び出しの深さに応じて字下げし、関数の終了時点であるというメッセージを出力
void print_out(int n, int depth) {
	cout << space(depth * 4) << "func(" << n << ", " << depth << ") out" << endl;
}

// n: 何回の再帰呼び出しを行うか
// depth: 呼び出しの深さ(何回目の再帰呼び出しか)
void func(int n, int depth) {
	// ベースケース
	if (n == 0) {
		print_in(n, depth); // 開始
		print_out(n, depth); // 終了
		return;
	}

	// 再帰ステップ
	print_in(n, depth); // 開始
	func(n - 1, depth + 1); // 残し回数を1減らし、呼び出しの深さを1増やす
	print_out(n, depth); // 終了
}


int main(int argc, char const* argv[])
{
	func(3, 0);

	return 0;
}
