#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("hps.in", "r", stdin);
	freopen("hps.out", "w", stdout);
	int n;
	cin >> n;
	vector<int> h(n + 1), p(n + 1), s(n + 1);

	for (int i = 0; i < n; i++) {
		h[i + 1] = h[i];
		p[i + 1] = p[i];
		s[i + 1] = s[i];
		char current;
		cin >> current;
		if (current == 'P') p[i + 1]++;
		else if (current == 'H') h[i + 1]++;
		else s[i + 1]++;
	}

	int answer = 0;

	for (int i = 1; i <= n; i++) {
		auto update = [&](vector<int>& a, vector<int>& b) {
			answer = max(answer, a[i] + b[n] - b[i]);
		};
		update(h, p);
		update(h, s);
		update(p, s);
		update(p, h);
		update(s, h);
		update(s, p);
	}

	cout << answer << '\n';
}
