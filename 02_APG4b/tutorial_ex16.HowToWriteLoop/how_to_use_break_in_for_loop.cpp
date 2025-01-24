#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> a = {1, 3, 1, 2, 5, 10};
	for (int x : a) {
		if (x == 1) {
			continue;
		}

		if (x == 5) {
			break;
		}

		cout << x << endl;
	}
}
