#include <bits/stdc++.h>
using namespace std;
struct Rect {
	int x1, y1, x2, y2;  // bottomleft_x, bottomleft_y, topright_x, topright_y
	int width() { return x2 - x1; }
	int height() { return y2 - y1; }
};
bool overlap(Rect& r1, Rect& r2) {
	return min(r1.x2, r2.x2) > max(r1.x1, r2.x1) &&
		min(r1.y2, r2.y2) > max(r1.y1, r2.y1);
}
int main() {
	int t, width1, height1, width2, height2, inf = 1e9;
	Rect r;
	cin >> t;
	while (t--) {
		cin >> width1 >> height1 >> r.x1 >> r.y1 >> r.x2 >> r.y2 >> width2 >> height2;
		vector<Rect> rects = {
			{0, 0, width2, height2},		  
			{0, height1 - height2, width2, height1},	  
			{width1 - width2, height1 - height2, width1, height1},  
			{width1 - width2, 0, width1, height2}	   
		};
		int answer = inf;
		for (Rect corner : rects) {
			if (!overlap(r, corner)) {
				answer = 0;
				break;
			}
			else {
				if (corner.y1 - r.height() >= 0) {
					answer = min(answer, abs(corner.y1 - r.y2));
				}
				if (corner.y2 + r.height() <= height1) {
					answer = min(answer, abs(corner.y2 - r.y1));
				}
				if (corner.x1 - r.width() >= 0) {
					answer = min(answer, abs(corner.x1 - r.x2));
				}
				if (corner.x2 + r.width() <= width1) {
					answer = min(answer, abs(corner.x2 - r.x1));
				}
			}
		}
		if (answer == inf) {
			answer = -1;
		}
		cout << answer << '\n';
	}
}