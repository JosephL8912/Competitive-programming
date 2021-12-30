#include <bits/stdc++.h>

using namespace std;

const int width = 1000;

int main() {
	freopen("paintbarn.in", "r", stdin);
	freopen("paintbarn.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	int barn[width + 1][width + 1];
	for (int i = 0; i < n; i++) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		barn[x1][y1]++;
		barn[x1][y2]--;
		barn[x2][y1]--;
		barn[x2][y2]++;
	}
	int answer = 0;
	for (int x = 0; x < width; x++) {
		for (int y = 0; y < width; y++) {
			if (x > 0) {
				barn[x][y] += barn[x - 1][y];
			}
			if (y > 0) {
				barn[x][y] += barn[x][y - 1];
			}
			if (x > 0 && y > 0) {
				barn[x][y] -= barn[x - 1][y - 1];
			}
			answer += barn[x][y] == k;
		}
	}
	cout << answer << "\n";
}