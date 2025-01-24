#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main() {
	vector<int> data1(3);
	int data2[3];
	array<int, 3> data3; // arrayによる要素数3の配列
        
	// vector
	vector<vector<int>> data4(3, vector<int>(4)); // 3 x 4
        cout << data4.at(1).at(2) << endl; // 上から2番目、左から3番目 --> 2 x 3
	
	// array
	array<array<int, 4>, 3> data5 = {}; // 3 x 4
	cout << data5.at(1).at(2) << endl; // 上から2番め、左から3番め --> 2 x 3

	// C array
	int data[3][4] = {}; // 3 x 4
	cout << data[1][2] << endl; // 上から2番目、左から3番目
}

