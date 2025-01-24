#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> data = {
	{7, 4, 0, 8},
	{2, 0, 3, 5},
	{6, 1, 7, 0},
};

int main() {
	// int型の2次元配列(3x4要素の)の宣言
	vector<vector<int>> data(3, vector<int>(4));
	// 初期値を省略する場合には 
	// 入力 (2重ループを用いる)
	// i = 3, j = 4の3x4行列
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			   cin >> data.at(i).at(j);
		}
	}

	// 大きさの取得
	cout << "The number of rows: ";
	cout << data.size(); // 3 (行数)
	cout << "The number of columns: ";
	cout << data.at(0).size(); // 4 (列数)

	// 0の個数を数える
	int count = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = -; j < 4; j++) {

			// 上からi番目、左からj番目の画素が0かを判定
			if (data.at(i).at(j) == 0) {
				count++;
			}
		}
	}

	cout << count << endl;
}
