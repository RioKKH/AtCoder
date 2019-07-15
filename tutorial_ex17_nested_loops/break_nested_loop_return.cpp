#include <iostream>

using namespace std;

/* 多重ループの部分を関数化し、関数の内部で使えるreturnを使って
 * 一気に抜けるという方法もある
 * この方法ではループ内の処理を行うために必要な変数を引数で渡す
 * 必要があり、余計な処理が必要になることがあるので、基本的には
 * フラグ変数を用意する方針で処理する。
 */

void func(/*処理に必要な変数*/) {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			/* 処理 */
			sum += i * j;

			if (sum > 1000 /* 2重ループを抜ける条件 */) {
				cout << i << ", " << j << endl;
				cout << sum << endl;
				return; // 関数のreturnはループに関係なく抜けることが出来る
			}
		}
	}
}

int main() {
	func();
}


