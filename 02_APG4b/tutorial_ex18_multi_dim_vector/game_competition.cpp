#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
	/*
	 * 1 <= N <= 100
	 * 0 <= M <= 4950
	 * 1 <= Ai, Bi <= N (1 <= i <= M)
	 * Ai != Bi (1 <= i <= M)
	 * No match will be played more than once with the same pair of participants
	 * All input is an integer
	 */
	int N, M;
	cin >> N >> M;
	vector<int> A(M), B(M);
	vector<vector<char>> data(N, vector<char>(N, '-'));

	for (int i = 0; i < M; i++) {
		cin >> A.at(i) >> B.at(i);
	}

	for (int i = 0; i < M; i++) {
		A.at(i)--;
		B.at(i)--;
		data.at(A.at(i)).at(B.at(i)) = 'o';
		data.at(B.at(i)).at(A.at(i)) = 'x';
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << data.at(i).at(j);
			if (j == N-1) {
				cout << endl; // return if end-of-line
			}
			else {
				cout << " "; // space otherwise
			}
		}
	}
}

