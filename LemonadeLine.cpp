#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("lemonade.in", "r", stdin);
	freopen("lemonade.out", "w", stdout);
	int N;
	cin >> N;
	vector<int> cows(N);
	for (int i = 0; i < N; i++) {
		cin >> cows[i];
	}
	int answer = 0;
	sort(cows.begin(), cows.end(), greater<int>());
	for (int i = 0; i < N; i++) {
		if (i <= cows[i]) {
			answer++;
		}
		else {
			break;
		}
	}
	cout << answer << "\n";
}