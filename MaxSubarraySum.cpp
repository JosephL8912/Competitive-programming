#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> prefix(n + 1);  
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		prefix[i] = prefix[i - 1] + x; 
	}

	int maxSubSum = prefix[1];
	int minPreSum = prefix[0];
	for (int i = 1; i <= n; i++) {
		maxSubSum = max(maxSubSum, prefix[i] - minPreSum);
		minPreSum = min(minPreSum, prefix[i]);
	}
	cout << maxSubSum << "\n";
}