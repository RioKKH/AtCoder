#include <bits/stdc++.h>
using namespace std;

int main() {
	int N = 3;
	int A, B, C;
	vector<int> vec(N);

	for (auto i = 0; i < N; i++) {
		cin >> vec.at(i);
	}

	int max = *max_element(vec.begin(), vec.end());
	int min = *min_element(vec.begin(), vec.end());

	cout << max - min << endl;
}



