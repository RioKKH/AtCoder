#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 10, b = 5;

	int answer_min = min(10, 5);
	int answer_max = max(10, 5);
	cout << "min " << answer_min << endl;
	cout << "max " << answer_max << endl;

	swap(a, b);
	cout << "a " << a << " " << "b " << b << endl;
}

