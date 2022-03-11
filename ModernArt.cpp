#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int N, canvas[10][10];

bool app(int k) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (canvas[i][j] == k) {
				return 1;
			}
		}
	}
	return 0;
}

bool top(int color1, int color2) {
	int top = N, bot = 0, lef = N, rig = 0;
	for (int i = 0; i < N; i+) {
		for (int j = 0; j < N; j++) {
			if (canvas[i][j] == color2) {
				top = min(top, i);
				bot = max(bot, i);
				lef = min(lef, j);
				rig = max(rig, j);
			}
		}
	}
	for (int i = top; i <= bot; i++) {
		for (int j = lef; j <= rig; j++) {
			if (canvas[i][j] == color1) {
				return 1;
			}
		}
	}
	return 0;
}

int main() {

	freopen("art.in", "r", stdin);
	freopen("art.out", "w", stdout);

	cin >> N;
	for (int i = 0; i < N; i++) {
		string s; 
		cin >> s;
		for (int j = 0; j < N; j+) {
			canvas[i][j] = s[j] - '0';
		}
	}
	int count = 0;
	for (int i = 1; i <= 9; ++i) {
		bool TrueOrFalse = 1;
		for (int j = 1; j <= 9; j++) {
			if (i != j && app(i) && app(j) && top(i, j)) {
				TrueOrFalse = 0;
				break;
			}
			if (!app(i)) {
				TrueOrFalse = 0;
				break;
			}
		}
		if (TrueOrFalse) {
			count++;
		}
	}
	cout << count << '\n';
	return 0;
}