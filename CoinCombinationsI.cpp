#include <bits/stdc++.h>
using namespace std;


int n, x, dyanmicPro[(int)1e6 + 1];
int main() {
	cin >> n >> x;
	int coins[n];
	for (int i = 0; i < n; i++) {
		cin >> coins[i];
	}
	dyanmicPro[0] = 1;
	for (int i = 1; i <= x; i++) {
		for (int coin : coins) {
			if (i - coin >= 0) {
				dyanmicPro[i] += dyanmicPro[i - coin];
				dyanmicPro[i] %= 1000000007;
			}
		}
	}
	cout << dyanmicPro[x] << "\n";
}
