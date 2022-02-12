#include <bits/stdc++.h>
using namespace std;


struct rec {

	int x1, y1, x2, y2;
	int area() {
		return abs(x2 - x1) * abs(y2 - y1);
	}
};
ints isec(rec a, rec b) {
	int xOverlap = max((int)0, min(a.x2, b.x2) - max(a.x1, b.x1));
	int yOverlap = max((int)0, min(a.y2, b.y2) - max(a.y1, b.y1));
	return xOverlap * yOverlap;
}

ints isecthree(rec a, rec b, rec c) {
	int xOverlap = max((int)0, min(min(a.x2, b.x2), c.x2) - max(max(a.x1, b.x1), c.x1));
	int yOverlap = max((int)0, min(min(a.y2, b.y2), c.y2) - max(max(a.y1, b.y1), c.y1));
	return xOverlap * yOverlap;
}

int main() {
	rec white, black1, black2;
	cin >> white.x1 >> white.y1 >> white.x2 >> white.y2;
	cin >> black1.x1 >> black1.y1 >> black1.x2 >> black1.y2;
	cin >> black2.x1 >> black2.y1 >> black2.x2 >> black2.y2;
	int visable = white.area() - (isec(white, black1) + isec(white, black2) + isecthree(white, black1, black2));
	if (visable) {
		cout << "YES" << "\n";
	else {
		cout << "NO" << "\n";
	}
}
