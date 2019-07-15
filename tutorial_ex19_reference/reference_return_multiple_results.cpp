#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// a, b, c の最大値、最小値をそれぞれminimumの参照先、maximumの参照先を代入する
void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
	minimum = min(a, min(b, c)); // 最小値をminimumの参照先に代入
	maximum = max(a, max(b, c)); // 最大値をmaximumの参照先に代入
}

int main(int argc, char const* argv[])
{
	int minimum, maximum;
	min_and_max(3, 1, 5, minimum, maximum); // minimum, maximumを参照渡し
	cout << "minimum: " << minimum << endl; // 最小値
	cout << "maximum: " << maximum << endl; // 最大値

	return 0;
}
