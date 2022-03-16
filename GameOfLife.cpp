class Solution {
public:
	void gameOfLife(vector<vector<int>>& board) {

		vector<vector<int>> temp = board;

		int rows = board.size();
		int columns = board[0].size();

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < columns; j++) {

				int counter = 0;

				if ((i - 1) >= 0 && (j - 1) >= 0) {
					if (board[i - 1][j - 1]) {
						counter++;
					}
				}

				if ((i - 1) >= 0 && j >= 0) {
					if (board[i - 1][j] == 1) {
						counter++;
					}
				}

				if ((i - 1) >= 0 && (j + 1) < columns) {
					if (board[i - 1][j + 1]) {
						counter++;
					}
				}

				if ((i >= 0) && (j - 1) >= 0) {
					if (board[i][j - 1]) {
						counter++;
					}
				}

				if (i >= 0 && (j + 1) < columns) {
					if (board[i][j + 1]) {
						counter++;
					}
				}

				if ((i + 1) < rows && (j - 1) >= 0) {
					if (board[i + 1][j - 1]) {
						counter++;
					}
				}

				if ((i + 1) < rows && j >= 0) {
					if (board[i + 1][j]) {
						counter++;
					}
				}

				if ((i + 1) < rows && (j + 1) < columns) {
					if (board[i + 1][j + 1]) {
						counter++;
					}
				}
				if (!board[i][j]) {
					if (counter == 3) {
						temp[i][j] = 1;
					}
					else {
						temp[i][j] = 0;
					}
				}
				else {
					if ((counter < 2) || (counter > 3)) {
						temp[i][j] = 0;
					}
					else {
						temp[i][j] = 1;
					}
				}
			}
		}
		board = temp;
	}
};