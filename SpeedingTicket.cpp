#include <bits/stdc++.h>
using namespace std;
const int L = 100;

int main() {
	freopen("speeding.in", "r", stdin);
	freopen("speeding.out", "w", stdout);

	int N, M;
	cin >> N >> M;

	int start = 0;
	vector<int> limit(L);
	for (int i = 0; i < N; i++) {
		int length, speed;
		cin >> length >> speed;
		for (int x = start; x < start + length; x++) {
			limit[x] = speed;
		}
		start += length;
	}

	start = 0;
	vector<int> bessie(L);
	for (int i = 0; i < M; i++) {
		int length, speed;
		cin >> length >> speed;
		for (int x = start; x < start + length; x++) {
			bessie[x] = speed;
		}
		start += length;
	}

	int fast = 0;
	for (int i = 0; i < L; i++) {
		fast = max(fast, bessie[i] - limit[i]);
	}
	cout << fast << "\n";
}
