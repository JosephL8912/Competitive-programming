#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("cowqueue.in", "r", stdin);
	freopen("cowqueue.out", "w", stdout);
	int N;
	int currentTime = 0;
	cin >> N;
	vector<pair<int, int>> cows(N);
	for (int i = 0; i < N; i++) {
		cin >> cows[i].first >> cows[i].second;
	}
	sort(cows.begin(), cows.end());

	for (int i = 0; i < N; i++) {
		if (currentTime >= cows[i].first) {
			currentTime += cows[i].second;
		}
		else {
			currentTime = cows[i].first + cows[i].second;
		}
	}
	cout << currentTime << "\n";
}