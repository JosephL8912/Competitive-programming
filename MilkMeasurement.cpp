#include <bits/stdc++.h>
using namespace std;

int IDCOW(string& c) {
	if (c == "Bessie")
		return 0;
	if (c == "Elsie")
		return 1;
	if (c == "Mildred")
		return 2;
	return -1;
}

int main() {
	freopen("measurement.in", "r", stdin);
	freopen("measurement.out", "w", stdout);
	vector<vector<int>> ch(3, vector<int>(101, 0));
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int day, change;
		string cow;
		cin >> day >> cow >> change;
		ch[IDCOW(cow)][day] = change;
	}
	vector<int> amountMilk{ 7,7,7 };
	vector<vector<bool>>newHigh(2, vector<bool>(3, true));
	int ans = 0;
	for (int d = 1; d <= 100; d++) { 
		for (int c = 0; c < 3; c++) {
			amountMilk[c] += ch[c][d];
		}
		int currentHigh = max({ amountMilk[0],amountMilk[1],amountMilk[2] });
		bool change = false;
		for (int c = 0; c < 3; c++) {
			newHigh[1][c] = amountMilk[c] == currentHigh;
			change = change || newHigh[1][c] != newHigh[0][c];
			newHigh[0][c] = newHigh[1][c];
		}
		if (change)
			ans++;
	}
	cout << ans << '\n';
}
