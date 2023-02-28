#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int placable(vector<vector<int>>& block, vector<vector<int>>& board, int y, int x) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (board[y + i][x + j] == 1 && block[i][j] == 1)
				return 0;
		}
	}
	return 1;
}

vector<vector<int>> rotate(vector<vector<int>> block) {
	vector<vector<int>> result(4, vector<int>(4));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			result[i][j] = block[4 - j][i];
		}
	}
	return result;
}

int solve(vector<vector<int>> block, vector<vector<int>>& board) {
	int result = 0;
	for (int i = 0; i <= 6; i++) {
		for (int j = 0; j <= 6; j++) {
			for (int k = 0; k < 4; k++) {
				if (placable(block, board, i, j)) {
					result++;
				}
				block = rotate(block);
			}
		}
	}
}

int main() {
	vector<vector<int>> block(4, vector<int>(4));
	vector<vector<int>> board(10, vector<int>(10));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			char c;
			cin >> c;
			switch (c) {
			case '$':
				block[i][j] = 1;
				break;
			case '_':
				block[i][j] = 0;
				break;
			}
		}
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			char c;
			cin >> c;
			switch (c) {
			case '#':
				board[i][j] = 1;
				break;
			case '_':
				board[i][j] = 0;
				break;
			}
		}
	}
	int result = solve(block, board);
	cout << result;
	return 0;
}