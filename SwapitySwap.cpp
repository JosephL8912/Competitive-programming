#include <bits/stdc++.h>
using namespace std;


int N, K, a1, a2, b1, b2;

int swap(int position) {
	if (a1 <= position && position <= a2) {
		position = a1 + a2 - position;
	}
	if (b1 <= position && position <= b2) {
		position = b1 + b2 - position;
	}

	return position;
}
int main() {

	freopen("swap.in", "r", stdin);
	freopen("swap.out", "w", stdout);


	cin >> N >> K >> a1 >> a2 >> b1 >> b2;

	int arr[N + 1];

	for (int i = 1; i <= N; i++) {
		int count = 1;
		int position = swap(i);

		while (position != i) {
			position = swap(position);
			count++;
		}
		position = i;

		for (int j = 0; j < K % count; j++) {
			position = swap(position);
		}
		arr[position] = i;
	}

	for (int i = 1; i < N + 1; i++) {
		cout << arr[i] << "\n";
	}
}
