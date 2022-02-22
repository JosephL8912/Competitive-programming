#include <bits/stdc++.h> // see /general/running-code-locally
using namespace std;

int main() {
	int n, t, answer = 0;
	cin >> n >> t;
	vector<int> books(n);
	for (int i = 0; i < n; i++) {
		cin >> books[i];
	}

	int l = 0, r = 0, current = 0;
	while (l < n && r < n) {
		while (r < n) {
			current += books[r++];
			if (current > t) {
				current -= books[--r];
				break;
			}
		}

		answer = max(answer, r - l);
		current -= books[l++];
	}

	cout << answer;
}
