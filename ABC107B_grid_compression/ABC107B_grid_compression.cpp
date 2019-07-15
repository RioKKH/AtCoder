#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const* argv[])
{
	int H, W;
	cin >> H >> W;

	vector<vector<char>> table(H, vector<char>(W));
	vector<bool> removed_H(H, false);
	vector<bool> removed_W(W, false);

	// initialize vector array
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cin >> table.at(i).at(j);
		}
	}

	// make index for height
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (table.at(i).at(j) == '#') {
				removed_H.at(i) = false;
				break;
			}
			else if (j == (W-1)) {
				removed_H.at(i) = true;
			}
		}
	}

	// make index for width
	for (int j = 0; j < W; j++) {
		for (int i = 0; i < H; i++) {
			if (table.at(i).at(j) == '#') {
				removed_W.at(j) = false;
				break;
			}
			else if (i == (H-1)) {
				removed_W.at(j) = true;
			}
		}
	}

	// check vector array and output them to stdout
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if (removed_H.at(i) == false && removed_W.at(j) == false) {
				cout << table.at(i).at(j);
			}
			if (removed_H.at(i) == false && j == W-1) {
				cout << endl;
			}
		}
	}

	return 0;
}
