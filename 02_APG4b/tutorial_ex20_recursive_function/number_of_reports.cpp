#include <iostream>
#include <vector>
#include <string>

using namespace std;

// x番の組織が親組織に提出する枚数を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int count_report_num(vector<vector<int>> &children, int x) {
	// ここに追記して再帰関数を実装する

	// ベースケースの実装
	if (children.at(x).size() == 0) {
		// 子組織から受け取ることはないので、1枚であることが確定している。
		return 1;
	}

	// 再帰ステップの実装
	int sum = 0;
	for (int c : children.at(x)) {
		sum += count_report_num(children, c);

		// cout << "count_report_num(" << x << ")," << c << "," << sum << endl;
	}
	sum += 1; // x番の組織の報告書の枚数(1枚)を足す
	return sum;
}

int check_size(vector<vector<int>> &children, int x) {
	cout << children.at(x).size() << endl;
	return 0;
}

// これ以降の行は変更しなくて良い

int main(int argc, char const* argv[])
{
	int N;
	cin >> N;

	vector<int> p(N); // 各組織の親組織を示す配列
	p.at(0) = -1; // 0番組織の親組織は存在しないので-1をいれておく
	for (int i = 1; i < N; i++) {
		cin >> p.at(i);
	}

	// 組織の関係から2次元配列を作る
	vector<vector<int>> children(N); // ある組織の子組織の番号一覧
	for (int i = 1; i < N; i++) {
		int parent = p.at(i); // i番の親組織の番号
		children.at(parent).push_back(i); // parentの子組織一覧にi番を追加
	}

	// 各組織について、答えを出力
	for (int i = 0; i < N; i++) {
		cout << count_report_num(children, i) << endl;
	}
	// check_size(children, 0);
	// check_size(children, 1);
	// check_size(children, 2);

	return 0;
}
