#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec1 = {1, 2, 3};
	vector<int> vec2 = {1, 2, 3};

	if (vec1 == vec2) {
		cout << "OK" << endl;
	}

	/* 以下はコンパイルエラーになる
	if (vec1 == {1, 2, 3}) {
		cout << "NG" << endl;
	}
	*/
}
