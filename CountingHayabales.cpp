#include <bits/stdc++.h>
using namespace std;

int main() {
	setIO("haybales");
	freopen("haybales.in", "r", stdin);
	freopen("haybales.out", "w", stdout);
	int N;
	int qN;
	cin >> N >> qN;
	vector<int> bales(N);
	for (int i = 0; i < N; i++) {
		cin >> bales[i];
	}

	sort(begin(bales), end(bales));
	for (int i = 0; i < qN; i++) {
		int start;
		int last;
		cin >> start >> last;
		cout << upper_bound(begin(bales), last(bales), last)
			- lower_bound(begin(bales), last(bales), start) << "\n";
	}
}
