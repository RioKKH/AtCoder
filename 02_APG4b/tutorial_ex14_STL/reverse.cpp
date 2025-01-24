#include <bits/stdc++.h>
using namespace std;

int main(void) {
	vector<int> vec = {1, 5, 3};
	//cout << vec.begin() << endl;
	//cout << vec.end() << endl;

	reverse(vec.begin(), vec.end());

	for (auto& v : vec) {
		cout << v << endl;
	}
}



