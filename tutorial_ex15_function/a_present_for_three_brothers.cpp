#include <bits/stdc++.h>
using namespace std;

// 一人のテストの点数を表す配列から合計点を計算して返す関数
// 引数　scores: scores.at(i)にi番目のテストの点数が入っている
// 返り値: ひとりのテストの合計点
int sum(vector<int> scores) {
	// 個々にプログラムを追記
	int n = scores.size();
	int total_score = 0;
	for (auto &s : scores) {
		total_score += s;
	}
	return total_score;

	// accmulateを使った場合
	// return accumulate(scores.begin(), scores.end(), 0);

	// reduceを使った場合 (from c++17) 
	// return reduce(scores.begin(), scores.end());
}

// 3人の合計点からプレゼントの予算を計算して出力する関数
// 引数　sum_a: Aくんのテストの合計点
// 引数　sum_b: Bくんのテストの合計点
// 引数　sum_c: Cくんのテストの合計点
// 返り値: なし
void output(int sum_a, int sum_b, int sum_c) {
	//ここにプログラムを追記
	cout << sum_a * sum_b * sum_c << endl;
}

// ---------------------------------
// ここから先は変更しない
// ---------------------------------

// N個の入力を受け取って配列に入れて返す関数
// 引数　N: 入力を受け取る個数
// 返り値: 受け取ったN個の入力の配列
vector<int> input(int N) {
	vector<int> vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec.at(i);
	}
	return vec;
}

int main() {
	// 科目の数Nを受け取る
	int N;
	cin >> N;

	// それぞれのテストの点数を受け取る
	vector<int> A, B, C;
	A = input(N);
	B = input(N);
	C = input(N);

	// プレゼントの予算を出力
	output(sum(A), sum(B), sum(C));
}

