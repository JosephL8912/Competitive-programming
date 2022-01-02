#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);

	int n, k; 
	cin >> n >> k;
	int sizeDiamond[n];
	for (int i = 0; i < n; i++) {
		cin >> sizeDiamond[i];
	}
	sort(sizeDiamond, sizeDiamond + n);
	int canTakeLeft[n];
	int l = 0, r = 0;
	for (; l < n; l++) {
		while (r < n && sizeDiamond[r] - sizeDiamond[l] <= k) {
			r++;
		}
		canTakeLeft[l] = r - l;
	}
	int maxValAfterI[n + 1];
	maxValAfterI[n] = 0;
	for (int i = n - 1; i >= 0; i--) {
		maxValAfterI[i] = max(maxValAfterI[i + 1], canTakeLeft[i]);
	}
	int answer = 0;
	for (int i = 0; i < n; i++) {
		answer = max(answer, canTakeLeft[i] + maxValAfterI[i + canTakeLeft[i]]);
	}
	cout << answer << "\n";
}