#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> data(5);
	size_t size;

	for (int i = 0; i < 5; i++) {
		cin >> data.at(i);
	}
	size = data.size();

	// dataの中で隣り合う等しい要素が存在するなら”YES”を出力し、そうでなければ”NO”を出力する
	// ここにプログラムを追記
	
	for (int j = 0; j < data.size()-1; j++) {
		// cout << j << endl;
		if (data[j] == data[j+1]) {
			cout << "YES" << endl;
			exit(0);
		}
	}
	cout << "NO" << endl;
	exit(0);
}


	/*for (auto& v : data) {
		cout << v << endl;
	}*/


