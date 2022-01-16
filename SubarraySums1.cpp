#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, x;
	cin >> n >> x;
	int array[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	int sum = 0, answer = 0;
	for (int l = 0, r = 0; r < n; r++) {
		sum += array[r];
		while (sum > x) {
			sum -= array[l];
			l++;
		}
		if (sum == x) {
			answer++;
		}
	}
	cout << answer << "\n";
}
