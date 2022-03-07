#include <bits/stdc++.h>

using namespace std;


long long dynamicPro[1000001];

int main() {
	int n;
	cin >> n;
	dynamicPro[0] = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 6; j++) {
			if (i - j >= 0) {
				dynamicPro[i] += dynamicPro[i - j];
			}
		}
		dynamicPro[i] %= 1000000007;
	}
	cout << dynamicPro[n] << "\n";
}