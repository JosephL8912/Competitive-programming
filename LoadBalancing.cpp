#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("balancing.in", "r", stdin);
	freopen("balancing.out", "w", stdout);
	int n, ans = INT_MAX;
	cin >> n;
	vector<array<int, 2>> points(n);
	for (auto& p : points) {
		cin >> p[0] >> p[1];
	}
	sort(points.begin(), points.end());
	for (auto& _p : points) {
		int upperLeft = 0, upperRight = 0, bottomLeft = 0, bottomRight = 0,
			y = _p[1];
		for (auto& p : points) {
			if (p[1] < y)
				upperRight++;
			else
				bottomRight++;
		}
		ans = min(ans, max(upperRight, bottomRight));
		for (auto& p : points) {
			if (p[1] < y) {
				upperRight--;
				upperLeft++;
			}
			else {
				bottomRight--;
				bottomLeft++;
			}
			ans = min(ans, max({ upperLeft, upperRight, bottomLeft, bottomRight }));
		}
	}
	cout << ans << "\n";
}