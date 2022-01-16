#include <bits/stdc++.h>

using namespace std;

const int maxNum = 2e5;

int numApplicant, numApart, maxDiffSize, app[maxNum], apart[maxNum], answer;

int main() {
	cin >> numApplicant >> numApart >> maxDiffSize;
	for (int i = 0; i < numApplicant; i++) {
		cin >> app[i];
	}
	for (int i = 0; i < numApart; i++) {
		cin >> apart[i];
	}
	sort(app, app + numApplicant);
	sort(apart, apart + numApart);
	int i = 0, j = 0;
	while (i < numApplicant && j < numApart) {
		if (abs(app[i] - apart[j]) <= maxDiffSize) {
			i++; j++;
			answer++;
		}
		else {
			if (app[i] - apart[j] > maxDiffSize) {
				j++;
			}
			else {
				i++;
			}
		}
	}
	cout << answer << "\n";
}