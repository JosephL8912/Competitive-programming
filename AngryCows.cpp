#include <bits/stdc++.h>

using namespace std;

int main() {
	freopen("angry.in", "r", stdin);
	freopen("angry.out", "w", stdout);

	int n, k;
	cin >> n >> k;
	int cowPower[n];
	for (int i = 0; i < n; i++) {
		cin >> cowPower[i];
	}
	sort(cowPower, cowPower + n);
	int lowGuess = 1, highGuess = 1e9;
	int answer = 1e9;
	while (lowGuess <= highGuess) {
		int middle = lowGuess + (highGuess - lowGuess) / 2;
		int i = 0;
		for (int kas = 0; kas < k && i < n; kas++) {
			int currentPower = cowPower[i];
			currentPower += middle * 2;
			while (i < n - 1 && cowPower[i + 1] <= currentPower) {
				i++;
			}
			i++;
		}
		bool lowerBound;
		lowerBound = (i >= n);
		if (lowerBound) {
			answer = min(answer, middle);
			highGuess = middle - 1;
		}
		else {
			lowGuess = middle + 1;
		}
	}

	cout << answer << '\n';
}
