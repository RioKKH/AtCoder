#include <bits/stdc++.h>
using namespace std;


//vector<int> vec(N);

int main() {
	// 文字列
	string str;
	str = "abcd";
	cout << str.at(0) << endl;
	cout << str.size() << endl;

	// 配列
	vector<int> vec;
	vec = {25, 100, 64};
	cout << vec.at(0) << endl;
	cout << vec.size() << endl;

	int a1, a2, a3;
	cin >> a1 >> a2 >> a3;
	cout << a1 + a2 + a3 << endl;

	vector<int> vec(3);
	cin >> vec.at(0) >> vec.at(1) >> vec.at(2);
	cout << vec.at(0) + vec.at(1) + vec.at(2) << endl;

	vector<int> vec(100);
	for (const auto &i : vec) {
		cin >> vec.at(i);
	}

	/*for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
	}

	for (const auto &i : vec) {
		cin >> vec.at(i);
	}*/
}

