#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> nums(n);
	map<int, int> t;
	for (int i = 0; i < n; ++i) {
		cin >> nums[i];
	}
	for (int i = 0; i < n; ++i) {
		if (t.count(x - nums[i])) {
			cout << i + 1 << " " << t[x - nums[i]] << "\n";
		}
		t[nums[i]] = i + 1;
	}
	cout << "IMPOSSIBLE" << "\n";
}