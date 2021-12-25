#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("circlecross.in", "r", stdin);
	freopen("circlecross.out", "w", stdout);
	string cows;
	cin >> cows;
	int answer = 0;
	for (int a = 0; a < cows.size(); a++) {
		for (int b = a + 1; b < cows.size(); b++) {
			for (int c = b + 1; c < cows.size(); c++) {
				for (int d = c + 1; d < cows.size(); d++) {
					if (cows[a] == cows[c] && cows[b] == cows[d]) {
						answer++;
					}
				}
			}
		}
	}
	cout << answer << "\n";
}