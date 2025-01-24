#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	int sum;
	int average;

	cin >> N;
	vector<int> vec(N); // 要素N個の配列を0で初期化
	//cout << "vector size: " << vec.size() << endl;

	for (auto i = 0; i < N;  i++) {
		cin >> vec.at(i);
		//cout << vec.at(i) << endl;
	}

	sum = accumulate(vec.begin(), vec.end(), 0);
	average = sum / N;

	for (const auto &v : vec) {
		cout << abs(v - average) << endl;
	}
}

