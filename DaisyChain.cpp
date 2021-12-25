#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int petals[N];
	for (int i = 0; i < N; ++i) {
		cin >> petals[i];
	}
	int photo = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = i; j < N; ++j) {
			int total = 0;
			for (int k = i; k <= j; ++k) {
				total += petals[k];
			}
			bool present = false;
			for (int k = i; k <= j; ++k) {
				if (petals[k] * (j - i + 1) == total) {
					present = true;
				}
			}
			if (present) {
				++photo;
			}
		}
	}
	cout << photo << "\n";
}