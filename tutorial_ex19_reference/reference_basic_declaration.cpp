#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
	int a = 123;
	int &b = a; // 変数aへの参照
	int &c = b; // 変数aへの参照。
	// すでにある参照と同じ参照先を持つ参照を作ることも出来る
	// bへの参照ではなく、aへの参照になる点に注意！！
	// "どちらも" a への参照

	string s = "apg4b";
	string &t = s;

	// 以下の操作で参照先のsが書き換わる
	t.at(0) = 'A';
	t.at(1) = 'P';
	t.at(2) = 'G';

	cout << s << endl; // "APG4b"
	cout << t << endl; // 参照先のsの値"APG4b"が出力される


	vector<int> v = {1, 2, 3, 4, 5};
	vector<int> &w = v; // vector<int>型変数vへの参照




	return 0;
}
