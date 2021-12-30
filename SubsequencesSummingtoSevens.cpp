#include <bits/stdc++.h>
using namespace std;

const int MOD = 7;

int main() {
	freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);
	int cows;
	cin >> cows;
	int answer = 0;
	vector<int> first(MOD, -1);
	first[0] = 0;
	int remainder = 0;
	for (int i = 1; i <= cows; i++) {
		int cow;
		cin >> cow;
		remainder = (remainder + cow) % MOD;
		if (first[remainder] == -1) {
			first[remainder] = i;
		}
		else {
			answer = max(answer, i - first[remainder]);
		}
	}
	cout << answer << "\n";
}