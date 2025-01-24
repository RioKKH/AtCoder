#include <iostream>
#include <vector>

using namespace std;

int main() {
	int sum = 0;
	// 外側のループを抜ける条件を満たしているかどうか(フラグ変数)
	bool finished = false;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {

			sum += i * j;

			if (sum > 1000) {
				cout << i << ", " << j << endl;
				finished = true;
				break; // *
				// finished を trueにしてから breakすることで、
				// 内側のループを抜けたすぐ後に外ぐぁのループも
				// 抜けることが出来る。
			}
		}
		// (*) の break でここに来る
		if (finished) {
			break; // **
		}
	}
	// (**) の breakでここに来る
	cout << sum << endl;
}
