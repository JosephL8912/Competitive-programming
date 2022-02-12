#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int a[n], pre[n + 1], post[n + 1];
	pre[0] = 0, post[n] = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		pre[i + 1] = gcd(pre[i], a[i]);
	}
	for (int i = n - 1; i >= 0; i--) {
		post[i] = gcd(post[i + 1], a[i]);
	}
	int maxNum = 1;
	for (int i = 0; i < n; i++) maxNum = max(maxNum, gcd(pre[i], post[i + 1]));
	cout << maxNum;
}
