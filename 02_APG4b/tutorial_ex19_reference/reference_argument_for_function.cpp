#include <iostream>

using namespace std;

// 値渡し
int f(int x) {
	x = x * 2; // 2. xを2倍
	return x; // 3. xの値を返す
}

// 参照渡し
int g(int &x) {
	x = x * 2; // xを2倍(参照によって呼び出す側の変数が変更される)
	return x;
}


int main(int argc, char const* argv[])
{
	int a = 3; // 呼び出す側の変数
	int b = f(a); // 1. aの値をfに渡し、4. 結果をbに代入
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	int c = g(a); // xの参照先がaになる
	
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	return 0;
}
