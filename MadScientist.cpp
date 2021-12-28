#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("breedflip.in", "r", stdin);
	freopen("breedflip.out", "w", stdout);
	int n;
	string A;
	string B;
	cin >> n >> A >> B;
	bool mismatch = false;
	int answer = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] != B[i]) {
			if (!mismatch) {
				mismatch = true;
				answer++;
			}
		}
		else {
			mismatch = false;
		}
	}
	cout << answer << "\n";
}