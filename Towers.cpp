#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> x; 

int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int k; 
		cin >> k;
		int low = 0, high = x.size();
		while (low < high) {
			int mid = (low + high) / 2;
			if (x[mid] > k) {
				high = mid;
			}
			else {
				low = mid + 1;
			}
		}
		if (low == x.size()) {
			x.push_back(k);
		}
		else {
			x[low] = k;
		}
	}
	cout << x.size() << "\n";
}
