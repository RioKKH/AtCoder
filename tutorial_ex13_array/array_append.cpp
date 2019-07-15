#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> vec = {1, 2, 3};

	vec.push_back(10);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec.at(i) << endl;
	}

	for (const auto &i : vec) {
		cout << i << endl;
	}
}
