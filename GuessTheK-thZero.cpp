#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, t, k;
	cin >> n >> t >> k;
	int low = 0, high = n + 1;
	while (high > low + 1) {
		int mid = (low + high) / 2;
		int sum = 0;
		cout << "? " << 1 << " " << mid << "\n";
		cin >> sum;
		if ((mid - sum) >= k) {
			high = mid;
		}
		else
			low = mid;
	}
	cout << "! " << high << "\n";
}
