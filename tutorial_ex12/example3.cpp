#include <bits/stdc++.h>
using namespace std;

int main() {
	string str;
	cin >> str;

	int count = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) == '0') {
			count++;
		}
	}

	cout << count << endl;
}
