#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> p(N + 1), t(N + 1), diff(N + 2);
	for (int i = 1; i <= N; i++) {
		cin >> p[i];
	}
	for (int i = 1; i <= N; i++) {
		cin >> t[i];
	}
	for (int i = 1; i <= N; i++) {
		diff[i] = p[i] - t[i];
	}
	int answer = 0;
	for (int i = 0; i <= N; i++) {
		answer += abs(diff[i] - diff[i + 1]);
	}
	cout << answer / 2 << "\n";
}
