#include <iostream>
#include <vector>

using namespace std;

// a ~ bの総和を計算する (a <= b)という前提
int sum_range(int a, int b) {
	// ベースケース
	if (a == b) {
		return a;
	}

	// 再帰ステップ
	return sum_range(a, b-1) + b; // [a ~ bの総和] = [a ~ (b-1)] + b
}

int sum_range_up(int a, int b) {
	// ベースケース
	if (a == b) {
		return a;
	}

	// 再帰ステップ
	return a + sum_range_up(a+1, b); // [a~b]の総和 = a + [(a+1) ~ b]の総和
}


int main(int argc, char const* argv[])
{
	cout << sum_range(0, 4) << endl; // 0+1+2+3+4=10
	cout << sum_range(5, 8) << endl; // 5+6+7+8=26
	
	return 0;
}
