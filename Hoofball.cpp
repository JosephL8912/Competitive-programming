#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("hoofball.in", "r", stdin);
	freopen("hoofball.out", "w", stdout);
	int N;
	cin >> N;
	vector<int> P(N); 
	for (int& p : P)
		cin >> p;
	sort(P.begin(), P.end());
	enum { left, right };
	vector<int> D(N, left); 
	D[0] = right;
	for (int i = 1; i < N - 1; i++)
		if (P[i] - P[i - 1] > P[i + 1] - P[i])
			D[i] = right;
	int ans = 0;
	int i = 0; 
	while (i < N) {
		ans++;
		if (i < N && D[i] == left)
			while (i < N && D[i] == left)
				i++;
		else {
			int ri = 0; 
			while (i < N && D[i] == right) {
				ri++;
				i++;
			}
			if (ri == 1)
				while (i < N && D[i] == left)
					i++;
			else
				i++;
		}
	}
	cout << ans << endl;
}
