#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("cowdance.in", "r", stdin);
	freopen("cowdance.out", "w", stdout);

	int n, t;
	cin >> n >> t;
	int duration[n];

	for (int i = 0; i < n; i++) {
		cin >> duration[i];
	}
	int highGuess = n, lowGuess = 1;
	int answer = n;
	while (lowGuess <= highGuess) {
		int middle = lowGuess + (highGuess - lowGuess) / 2;
		int time = 0, j = 0;
		priority_queue<int> pq;
		int size = 0;
		while (size < middle && j < n) {
			pq.push(-duration[j]);
			size++;
			j++;
		}
		while ((int)pq.size()) {
			time += max(0, -pq.top() - time);
			pq.pop();
			if (j < n) {
				pq.push(-(duration[j] + time));
				j++;
			}

		}
		if (time > t) {
			lowGuess = middle + 1;
		}
		else {
			answer = min(answer, middle);
			highGuess = middle - 1;
		}
	}
	cout << answer << '\n';
}
