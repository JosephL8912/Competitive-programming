#include <bits/stdc++.h>
using namespace std;


int main() {
	freopen("factory.in", "r", stdin);
	freopen("factory.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> outd(n);
	for (int i = 0; i < n - 1; ++i) {
		int t;
		cin >> t;
		outd[t - 1]++;
		cin >> t;
	}
	int answer = -1, counter = 0;
	for (int i = 0; i < n; i++) {
		if (outd[i] == 0) {
			answer = i + 1;
			counter++;
		}
	}
	if (counter == 1) {
		cout << answer << '\n';
	}
	else {
		cout << -1 << '\n';
	}
}