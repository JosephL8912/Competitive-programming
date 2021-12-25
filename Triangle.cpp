#include <bits/stdc++.h>
using namespace std;
const int maxNum = 20000;

int main() {
	freopen("triangles.in", "r", stdin);
	freopen("triangles.out", "w", stdout);
	int n; cin >> n;
	int x[maxNum];
	int y[maxNum];
	int answer = 0;
	for (int i = 0; i < n; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int l = 0; l < n; l++) {
				if (y[i] == y[j] && x[i] == x[l]) {
					int area = abs((x[j] - x[i]) * (y[l] - y[i]));
					answer = max(answer, area);
				}
			}
		}
	}
	cout << answer << "\n";
}