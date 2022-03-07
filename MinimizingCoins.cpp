#include <bits/stdc++.h>

using namespace std;

using ll = long long;

using ld = long double;

int main() {
	ios::sync_with_stdio(0); cin.tie(0);

	int N, x;
	cin >> N >> x;

	int coins[N];
	for (int i = 0; i < N; ++i) {
		cin >> coins[i];
	}
	int dynamicPro[x + 1];
	fill(dynamicPro, dynamicPro + x + 1, INT_MAX);
	dynamicPro[0] = 0;

	for (int i = 1; i <= x; ++i) {
		for (int coin : coins) {
			if (i - coin >= 0 && dynamicPro[i - coin] != INT_MAX) {
				dynamicPro[i] = min(dynamicPro[i], dynamicPro[i - coin] + 1);
			}
		}
	}
	if (dynamicPro[x] == INT_MAX) {
		cout << "-1" << "\n";
	}
	else {
		cout << dynamicPro[x] << '\n';
	}
}