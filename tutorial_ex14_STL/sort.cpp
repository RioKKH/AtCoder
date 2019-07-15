#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec = {2, 5, 2, 1};
	sort(vec.begin(), vec.end());

	for (auto &v : vec) {
		cout << v << endl;
	}

	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << endl;
	}
}
