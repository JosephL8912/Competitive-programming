#include <bits/stdc++.h>
using namespace std;
const int maxNum = 10000;
int main() {
	freopen("planting.in", "r", stdin);
	freopen("planting.out", "w", stdout);
	int n;
	cin >> n;
	int field[maxNum + 1] = {};
	int x, y;
	int answer = INT_MIN; 
	for (int i = 1; i < n; i++) {
		cin >> x >> y;
		field[x]++;
		field[y]++;
		answer = max(answer, max(field[x], field[y]));
	}
	cout << answer + 1 << "\n";
}