#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int count = 0;
	/* 配列の要素に対する処理ではなく、具体的に何回処理を
	 * 繰り返せば良いのかということもわからない。
	 * このような処理にはwhile文が適している。*/
	while (N > 0) {
		// 2で割り切れなければループを抜ける
		if (N % 2 > 0) {
			break;
		}
		N = N / 2;
		count++;
	}
	cout << count << endl;
}


