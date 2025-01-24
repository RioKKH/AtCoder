#include <bits/stdc++.h>
using namespace std;

int main() {
	string str = "hello";
	// 範囲for文
	// string型の変数に対して、1文字ずつ処理したい場合に便利
	for (char c : str) {
		if (c == 'l') {
			c = 'L';
		}
		cout << c;
	}
	cout << endl;
}
