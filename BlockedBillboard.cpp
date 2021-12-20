#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);
	int board1[4];
	int board2[4];
	int truck[4];
	for (int i = 0; i < 4; i++) {
		cin >> board1[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> board2[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> truck[i];
	}
	int board1area = ((board1[2] - board1[0]) * (board1[3] - board1[1]));
	int board2area = ((board2[2] - board2[0]) * (board2[3] - board2[1]));
	int truck1x = max(0, min(board1[2], truck[2]) - max(board1[0], truck[0]));
	int truck1y = max(0, min(board1[3], truck[3]) - max(board1[1], truck[1]));
	int truck2x = max(0, min(board2[2], truck[2]) - max(board2[0], truck[0]));
	int truck2y = max(0, min(board2[3], truck[3]) - max(board2[1], truck[1]));
	
	int truck1area = truck1x * truck1y;
	int truck2area = truck2x * truck2y;
	int total = board1area + board2area - truck1area - truck2area;
	cout << total << "\n";
}