#include <bits/stdc++.h>
using namespace std;
int swaps, shellCount[3], shellPos[3];
int main() {
	freopen("shell.in", "r", stdin);
	freopen("shell.out", "w", stdout);
	cin >> swaps;
	for (int i = 0; i < 3; i++) {
		shellPos[i] = i;
	}
	for (int i = 0; i < swaps; i++) {
		int a, b, g;
		cin >> a >> b >> g;
		a--, b--, g--;
		swap(shellPos[a], shellPos[b]);
		shellCount[shellPos[g]] += 1;
	}
	int points = max({ shellCount[0], shellCount[1], shellCount[2] });
	cout << points << "\n";
}