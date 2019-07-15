#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
	int aa = 123;
	int &b = aa, &c = aa; // bとcはどちらもaへの参照

	// for文を用いて、配列の要素を書き換える処理
	vector<int> a = {1, 3, 2, 5};
	for (int &x : a) {
		x = x * 2;
	}

	for (const int &x : a) {
		cout << x << endl;
	}

    vector<int> v = {1, 2, 3};

	// 以下の操作で参照先のvの要素が書き換わる
	int &e = v.at(1);
	e = -2;
	cout << v.at(0) << ", " << v.at(1) << ", " << v.at(2) << endl; // "1, -2, 3"が出力される

	// vectorの要素への参照を生成した後は本のvectorの要素数が変わるような操作を行わないように注意する
	// 以下に例を示す
	/*
	 * vector<int> v = {1, 2, 3};
	 * int &e = v.at(1);
	 * 大量のpush_backで要素数を大幅に増やす
	 * for (int i = 0; i < 1000; i++) {
	 *	v.push_back(i + 4);
	 * }
	 * cout << "e: " << e << endl;
	 * "e: 2"とならないことがある
	 */

	return 0;
}
