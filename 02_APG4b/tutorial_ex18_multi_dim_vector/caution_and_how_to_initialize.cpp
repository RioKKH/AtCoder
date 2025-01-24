#include <iostream>
#include <vector>

using namespace std;

vector<vector<vector<int>>> data = {
	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
	},
	{
		{13, 14, 15, 16},
		{17, 18, 19, 20},
		{21, 22, 23, 24},
	},
};

// 予め要素の値とサイズが決まっている場合、
// 要素を指定して初期化することが出来る
vector<vector<int>> data1 = {
	{7, 4, 0, 8},
	{2, 0, 3, 5},
	{6, 1, 7, 0}
};

vector<vector<vector<int>>> data2 = {
	{
		{'-', '-', '-'},
		{'-', '-', '-'},
		{'-', 'o', '-'}
	},
	{
		{'x', 'o', '-'},
		{'-', 'o', '-'},
		{'x', '-', '-'}
	}
};



int main(int argc, char const* argv[])
{
	int size1 = data.size();
	cout << size1 << endl; // 2

	int size2 = data.at(0).size();
	cout << size2 << endl; // 3

	int size3 = data.at(0).at(0).size();
	cout << size3 <<endl; // 4

	cout << size1 * size2 * size3 << endl; // 24

	for (int i = 0; i < data2.size(); i++) {
		for (int j = 0; j < data2.at(i).size(); j++) {
			for (int k = 0; k < data2.at(i).at(j).size(); k++) {
				cout << data2.at(i).at(j).at(k) << endl;
			}
		}
	}
	
	return 0;
}
