#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
	int H, W;
	vector<vector<char>> table(H, vector<char>(W));

	cin >> H >> W;
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> table.at(i).at(j);
			cout << table.at(i).at(j) << endl;
		}
	}

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cout << table.at(i).at(j);
			if (j == W-1) {
				cout << endl;
			}
			else {
				cout << " ";
			}
		}
	}


	return 0;
}
