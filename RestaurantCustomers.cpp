#include <bits/stdc++.h>
using namespace std;
#define arr array

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int n; cin >> n;
	vector<arr<int, 2>> ar(n * 2);
	for (int i = 0; i < n * 2; i++) {
		int x; 
		cin >> x;
		ar[i] = { x, i % 2 == 0 ? 1 : -1 };
	}
	sort(ar.begin(), ar.end());
	int answer = 0, current = 0;
	for (int i = 0; i < n * 2; i++) {
		current += ar[i][1];
		answer = max(answer, current);
	}
	cout << answer << "\n";
}