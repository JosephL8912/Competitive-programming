#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("maxdistance.in", "r", stdin);
	freopen("maxdistance.out", "w", stdout);
	int N; cin >> N;
	vector<int> x(N), y(N);
	for (int t : x) {
		cin >> t;
	}
	for (int t : y) {
		cin >> t;
	}
	int maxSq = 0;
	for (int i = 0; i < N; i++) { 
		for (int j = i + 1; j < N; j++) { 
			int distx = x[i] - x[j], disty = y[i] - y[j];
			int square = distx * distx + disty * disty;
			maxSq = max(maxSq, square);
		}
	}
	cout << maxSq << "\n";
}