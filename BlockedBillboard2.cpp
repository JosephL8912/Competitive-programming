#include <bits/stdc++.h>
using namespace std;

bool blockChecker(int x, int y, int x1, int y1, int x2, int y2) {
	return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}

int main() {
	freopen("billboard.in", "r", stdin);
	freopen("billboard.out", "w", stdout);

	int x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	int blockedCorners = 0;
	if (blockChecker(x1, y1, x3, y3, x4, y4)) {
		blockedCorners++;
	}
	if (blockChecker(x1, y2, x3, y3, x4, y4)) {
		blockedCorners++;
	}
	if (blockChecker(x2, y1, x3, y3, x4, y4)) {
		blockedCorners++;
	}
	if (blockChecker(x2, y2, x3, y3, x4, y4)) {
		blockedCorners++;
	}
	if (blockedCorners < 2) {
		cout << (x2 - x1) * (y2 - y1);
	}
	else if (blockedCorners == 4) {
		cout << 0;
	}
	else {
		int xLeftIntersec = max(x1, x3);
		int yLeftIntersec = max(y1, y3);
		int xRightIntersec = min(x2, x4);
		int yRightIntersec = min(y2, y4);
		cout << ((x2 - x1) * (y2 - y1) - (xRightIntersec - xLeftIntersec) * (yRightIntersec - yLeftIntersec));
	}
}
