#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("cbarn.in", "r", stdin);
	freopen("cbarn.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> room(n);
	int cows = 0;
	for (int i = 0; i < n; i++) {
		cin >> room[i];
		cows += room[i];
	}
	int answer = INT_MAX;
	for (int start = 0; start < n; start++) {
		int current = 0, currentCows = cows;
		for (int i = 0; i < n; i++) {
			currentCows -= room[(start + i) % n];
			current += currentCows;
		}
		answer = min(answer, current);
	}
	cout << answer << '\n';
}