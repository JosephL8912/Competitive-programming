#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);
	int n;
	cin >> n;
	int cowHerd[100005];
	for (int i = 0; i < n; ++i) {
		cin >> cowHerd[i];
	}
	sort(cowHerd, cowHerd + n);
	int total = 0;
	for (int i = 1; i < n; ++i) {
		total += cowHerd[i] - cowHerd[i - 1] - 1;
	}
	int minAnswer = INT_MAX;
	if (cowHerd[n - 2] - cowHerd[0] == n - 2 && cowHerd[n - 1] - cowHerd[n - 2] > 2) {
		minAnswer = 2;
	}
	else if (cowHerd[n - 1] - cowHerd[1] == n - 2 && cowHerd[1] - cowHerd[0] > 2) {
		minAnswer = 2;
	}
	else {
		int j = 0;
		for (int i = 0; i < n; ++i) {
			while (j + 1 < n && cowHerd[j + 1] - cowHerd[i] < n) {
				j++;
			}
			minAnswer = min(minAnswer, n - (j - i + 1));
		}
	}
	int maxAnswer = max(total - (cowHerd[1] - cowHerd[0] - 1), total - (cowHerd[n - 1] - cowHerd[n - 2] - 1));
	cout << minAnswer << "\n" << maxAnswer << "\n";
}