#include <bits/stdc++.h>
using namespace std;

int search(int lo, int hi, function<bool(int)> f) {
	lo--;
	while (lo < hi) {
		int mid = lo + (hi - lo + 1) / 2;
		if (f(mid)) {
			lo = mid;
		}
		else {
			hi = mid - 1;
		}
	}
	return lo;
}

int main() {
	int size;
	int maxOperations;
	cin >> size >> maxOperations;
	vector<int> arr(size);
	for (int& i : arr) {
		cin >> i;
	}

	sort(arr.begin(), arr.end());
	cout << search(1, 2e9, [&](int x) {
		long long operationNeed = 0;
		for (int i = (size - 1) / 2; i < size; i++) {
			operationNeed += max(0, x - arr[i]);
		}
		return operationNeed <= maxOperations;
		}) << "\n";
}
