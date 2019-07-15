#include <bits/stdc++.h>
using namespace std;

int ans1() {
	string S;
	cin >> S;
	int num_of_plus = 0;
	int num_of_minus = 0;
	
	//for (const char s : S) {
	for (const auto& s : S) {
		//cout << s << endl;
		if (s == '+') {
			num_of_plus++;
		} else if (s == '-') {
			num_of_minus++;
		} else {
			// nothing to do
		}
	}
	cout << 1 + num_of_plus - num_of_minus << endl;
}

int ans2() {
	int num_of_plus = 0;
	int num_of_minus = 0;
	string S;

	cin >> S;

	for (auto i = 0; i < S.size(); i++) {
		if (S.at(i) == '+') {
			num_of_plus++;
		} 
		else if (S.at(i) == '-') {
			num_of_minus++;
		}
	}
	cout << 1 + num_of_plus - num_of_minus << endl;
}

int main() {
	ans1();
}
