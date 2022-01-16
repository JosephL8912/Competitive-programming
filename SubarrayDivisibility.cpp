#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<long long> M(N);
	long long sums = 0;
	M[sums] = 1;
	for (int i = 0; i < N; i++) {
		int a;
		cin >> a;
		sums += a;
		subArray[(sums % N + N) % N]++;
	}

	long long ans = 0;
	for (long long x : subArray) {
		ans += x * (x - 1) / 2;
	}
	cout << ans << "\n";
}
