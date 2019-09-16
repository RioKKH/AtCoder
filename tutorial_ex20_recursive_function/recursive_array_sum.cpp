#include <iostream>
#include <vector>

using namespace std;


// 補助関数
// dataのi番目以降の要素の総和を計算する
int array_sum_from_i(vector<int> &data, int i) {
	// ベースケース
	if (i == data.size()) {
		return 0; // 対象の要素がないので総和は0
	}
	// 再帰ステップ
	int s = array_sum_from_i(data, i + 1); // i+1番目以降の要素の総和
	cout << s << endl;
	return data.at(i) + s; // [i番目以降の要素の総和] = [i番目の要素] + s
}


// dataの全ての要素の総和を計算する
int array_sum(vector<int> &data) {
	return array_sum_from_i(data, 0);
}


int main(int argc, char const* argv[])
{
	vector<int> a = {0, 3, 9, 1, 5};
	cout << array_sum(a) << endl; // 0+3+9+1+5=18

	/*
	 * i=0 --> i=1 --> i=2 --> i=3 --> i=4 --> i==5 --> if i == data.size() --> s=0
	 * 0 + 0 --> data.at(4) + 0 = 5 --> data.at(3) + 5 --> data.at(2) + 6 -->
	 * data.at(1) + 15 --> data.at(0) + 18 --> 0 + 18
	 */
	
	return 0;
}
