#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int N;
	cin >> N;
	vector<vector<ll>> G(N + 1, vector<ll>(N + 1));
	
	for (int y = 1; y <= N; y++) { 
		for (int x = 1; x <= N; x++) {
			cin >> G[x][y];
		}
	}
	ll answer1 = 0;
	for (int i = 1; i <= N; i++) {
		ll o = 0;
		for (int j = 1; j <= N; j += 2) {
			o += G[j][i];
		}
		ll e = 0;
		for (int j = 2; j <= N; j += 2) {
			e += G[j][i];
		}
		answer1 += max(o, e);
	}
	ll answer2 = 0;
	
	for (int i = 1; i <= N; i++) {
		ll o = 0;
		for (int j = 1; j <= N; j += 2) {
			o += G[i][j];
		}
		ll e = 0;
		for (int j = 2; j <= N; j += 2) {
			e += G[i][j];
		}
		answer2 += max(o, e);
	}
	cout << max(answer1, answer2) << "\n";
}
