#include <bits/stdc++.h>
using namespace std;

//からnまでの和を求める関数sum
int sum(int n) {
	// 再帰関数(recursive functionの終了条件)
	if (n == 0) {
		return 0;
	}
	// 関数の中で同じ関数を呼び出している！
	return n + sum(n - 1);
}

int main() {
	cout << sum(3) << endl;
}
