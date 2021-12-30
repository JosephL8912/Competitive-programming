#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
	int cowNum;
	int query;
	cin >> cowNum >> query;
	vector<int> h(cowNum + 1);
	vector<int> g(cowNum + 1);
	vector<int> j(cowNum + 1);
	for (int c = 0; c < cowNum; c++) {
		h[c + 1] = h[c];
		g[c + 1] = g[c];
		j[c + 1] = j[c];
		int breed;
		cin >> breed;
		if (breed == 1) {
			h[c + 1]++;
		}
		else if (breed == 2) {
			g[c + 1]++;
		}
		else if (breed == 3) {
			j[c + 1]++;
		}
	}
	for (int q = 0; q < query; q++) {
		int start;
		int end;
		cin >> start >> end;
		cout << h[end] - h[start - 1] << " " << g[end] - g[start - 1] << " " << j[end] - j[start - 1] << '\n';
	}
}