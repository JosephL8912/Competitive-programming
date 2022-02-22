#include <bits/stdc++.h>
using namespace std;


vl psum(const vector<long long> a) {
	vector<long long> partialSum((int)size(a)) + 1);
	for (int i = 0; i < (int)size(a); ++i) {
		partialSum[i + 1] = partialSum[i] + a[i];
	}
	return partialSum;
}

int main() {
	int N, Q;
	cin >> N >> Q;
	vector<long long> a(N);
	for (long long x : a) {
		cin >> x;
	}
	vector<long long> p = psum(a);
	for (int i = 0; i < Q; ++i) {
		int l, r;
		cin >> l >> r;
		cout << p[r] - p[l] << "\n";
	}
}