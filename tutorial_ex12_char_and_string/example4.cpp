#include <bits/stdc++.h>
using namespace std;

int main() {
	string hello = "Hello";
	string str;
	cin >> str;

		if (str == hello) {
			cout << "入力は" << hello << endl;
		}

	cout << hello + ", world!" << endl;

	hello += "わーるど";
	cout << hello << endl;
}
