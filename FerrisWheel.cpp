#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> kid(n);
	for (int i = 0; i < n; i++) {
		cin >> kid[i];
	}
	sort(kid.begin(), kid.end());
	int count = 0;
	int answer = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (kid[i] + kid[count] <= x) {
			count++;
		}
		answer++;
		if (i == count) {
			break;
		}
		if (i == count + 1) {
			answer++;
			break;
		}
	}
	cout << answer << "\n";
}
