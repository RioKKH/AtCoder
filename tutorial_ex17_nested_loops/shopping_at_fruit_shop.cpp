#include <iostream>
#include <vector>

using namespace std;

/*
 * パイナップルN個, i個目Ai円
 * りんごN個, i個目Bi円
 * 合計金額が丁度S円
 * それぞれ1個ずつ購入するとする << この条件が大切！
 * 何通りある?
 * 順番は考慮しない→組み合わせのみを考慮する
 * 0 <= N <= 100
 * 0 <= S <= 1000
 * 1 <= Ai, Pi <= 500 (1 <= i <= N)
 * Ai, Pi are interger
 */

int main() {
	int N, S;
	int matched = 0;

	cin >> N >> S;
	vector<int> A(N), P(N);
	for (int i = 0; i < N; i++) {
		cin >> A.at(i);
	}
	for (int i = 0; i < N; i++) {
		cin >> P.at(i);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if ((A.at(i) + P.at(j)) == S) {
				matched += 1;
			}
		}
	}
	cout << matched << endl;
}

