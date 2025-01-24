#include <iostream>
#include <vector>

using namespace std;

int main() {
	/*
	 * echo 1 3 2 | ./checkifAB_in_vector
	 */
	vector<int> A(3), B(3);
	for (int i = 0; i < 3; i++) {
		cin >> A.at(i);
	}
	for (int i = 0; i < 3; i++) {
		cin >> B.at(i);
	}

	// 答えを保持する関数
	bool answer = false;

	// ここにプログラムを追記
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (A.at(i) == B.at(j)) {
				answer = true;
			}
		}
	}
	
	if (answer) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}
