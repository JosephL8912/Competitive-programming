#include <bits/stdc++.h>
using namespace std;
const int maxNum = 100;
int swapArray[maxNum];
int cows[maxNum];
int find(int n, int x) {
	for (int i = 0; i < n; i++) {
		if (swapArray[i] == x)
			return i;
	}
	return 0;
}
int main() {
	freopen("shuffle.in", "r", stdin);
	freopen("shuffle.out", "w", stdout);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> swapArray[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> cows[i];
	}
	for (int i = 0; i < 3; i++) {
		int temp[maxNum];
		for (int j = 1; j <= N; j++) {
			int index = find(N, j);
			temp[index] = cows[j - 1];
		}
		for (int j = 0; j < N; j++) {
			cows[j] = temp[j];
		}
	}
	for (int i = 0; i < N; i++) {
		cout << cows[i] << '\n';
	}
}