#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	cout << N;

	vector<int> math(N);    // N個の数学者の点数データ
	vector<int> english(N); // N個の英語の点数データ

	// 数学の点数データを受け取る
	for (int i = 0; i < N; i++) {
		cout << i;
		cin >> math.at(i);
	}
	// 英語の点数データを受け取る
	for (int j = 0; j < N; j++) {
		cout << j;
		cin >> english.at(j);
	}

	// 合計点数を出力
	for (auto i = 0; i < N; i++) {
		cout << math.at(i) + english.at(i) << endl;
	}
}



