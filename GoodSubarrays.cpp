#include <bits/stdc++.h>
using namespace std;
int main() {
	const int maxNum = 1e5 + 10;
	int n, t, arr[maxNum];
	char x;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> x;
			arr[j] = x - '1';
		}
		map<int, int> sums;
		sums[0] = 1;
		long long tempSum = 0, answer = 0;
		for (int k = 0; k < n; k++) {
			tempSum += arr[k];
			answer += sums[tempSum];
			sums[tempSum]++;
		}
		cout << answer << "\n";
	}
}