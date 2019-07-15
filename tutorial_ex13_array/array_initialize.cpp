#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec(3, 10); // (要素数、初期値)。{10, 10, 10}で初期化
	vec = vector<int>(100, 2); // 100要素の配列{2, 2, ..., 2, 2}で上書き
	cout << vec.at(99) << endl;
}
