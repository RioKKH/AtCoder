#include <iostream>
#include <vector>

using namespace std;

// x番の組織について、子組織からの報告書が揃った時刻を返す
// childrenは組織の関係を表す2次元配列(参照渡し)
int complete_time(vector<vector<int>> &children, int x) {
	// 1. 引数・返り値・処理内容を決める
	// vector<vector<int>> children, x
	// 2. ベースケースを考える
	// ベースケースとは、再帰呼出しを行わずに完了できる処理。
	// つまりこの処理が走る条件で再帰が終わり、処理を抜けることになる
	//
	// 3. 再帰ステップを考える
	// (ここに追記して再帰関数を実装する)
	//
	// 実装は以下の順番で行う
	// ベースケースの実装
	if (children.at(x).size() == 0) {
		return 0; // 子組織がないような組織について、報告書が揃う時刻は0
	}

	// 再帰ステップの実装
	int max_receive_time = 0; // 受け取った時刻の最大値
	// x番の組織の子組織についてループ
	for (int c : children.at(x)) {

		// (子組織cのもとに揃った時刻+1)の時刻にcからの報告書を受け取る
		int receive_time = complete_time(children, c) + 1;

		cout
			<< "# C in this loop: " << c 
			<< " max receive time: " << max_receive_time
			<< " receive_time: " << receive_time
			<< endl;

		// 受け取った時刻の最大値　＝　揃った時刻なので最大値を求める
		max_receive_time = max(max_receive_time, receive_time);
	}
	return max_receive_time;
}

int check_components(vector<vector<int>> &children) {
	for (int i=0; i<children.size(); i++) {
		for (int j=0; j<children.at(i).size(); j++) {
			cout << children.at(i).at(j) << endl;
		}
	}
	return 0;
}


int main() {
	int N;
	cin >> N;

	vector<int> p(N); // 各組織の親組織を示す配列
	p.at(0) = -1; // 0番組織の親組織は存在しないので、-1を入れておく
	for (int i = 1; i < N; i++) {
		cin >> p.at(i);
	}

	// 組織の関係から2次元配列を作る
	vector<vector<int>> children(N); // ある組織の子組織の番号一覧
	for (int i = 1; i < N; i++) {
		int parent = p.at(i); // i番の親組織の番号
		children.at(parent).push_back(i); // parentの子組織一覧にi番を追加
	}

	// check_components(children);

	// 0番の組織野本に報告書が揃う次lk奥を求める
	cout << complete_time(children, 0) << endl;
}


