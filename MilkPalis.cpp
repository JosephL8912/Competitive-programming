#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
	int x, y, m; 
	int answer = 0;
	cin >> x >> y >> m;
	for (int i = 0; i < 1001; ++i) {
		if (x * i > m){
			break;
	}
		for (int j = 0; j < 1001; ++j) {
			int n = x * i + y * j;
			if (n > m) break;
			answer = max(answer, n);
		}
	}
	cout << answer << "\n";
}