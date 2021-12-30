#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 1e5;
int sigs[MAX_N];
int presum[MAX_N];
int main() {
	freopen("maxcross.in", "r", stdin);
	freopen("maxcross.out", "w", stdout);
	int n, k, b;
	cin >> n >> k >> b;
	for (int i = 0; i < b; i++) {
		int broknSig;
		cin >> broknSig;
		sigs[broknSig]++;
	}
	for (int i = 0; i < n; i++) {
		presum[i + 1] = sigs[i + 1] + presum[i];
	}
	int answer = INT_MAX;
	for (int i = 0; i <= n - k; i++) {
		answer = min(answer, presum[i + k] - presum[i]);
	}
	cout << answer << '\n';
}