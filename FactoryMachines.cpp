#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main() {
	ll n, t;
	cin >> n >> t;
	vector<ll> list(n);
	for (ll i = 0; i < n; i++) {
		cin >> ls[i];
	}
	ll low = 1, high = 1e18, mid;
	while (low < high) {
		mid = (high + low) / 2;
		ll counter = 0;
		for (ll i = 0; i < n && count < t; i++) {
			count += (mid / list[i]);
		}
		if (count >= t) {
			high = mid;
		}
		else {
			low = mid + 1;
		}
	}
	cout << low << "\n";
}