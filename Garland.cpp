#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
	cin >> n >> string;
	int q; cin >> q;
	while (q--) {
		int m;
		char c;
		cin >> m >> c;
		int answer = 0, left = 0, right = -1;
		while (left < n) {
			while (right < n && right - left < m) {
				if (right < n - 1 && string[right + 1] == c) {
					m++;
				}
				right++;
			}
			answer = max(answer, right - left);
			if (string[left] == c) {
				m--;
			}
			left++;
		}
		cout << answer << endl;
	}
}
