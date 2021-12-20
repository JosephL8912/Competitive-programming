#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("paint.in", "r", stdin);
	freopen("paint.out", "w", stdout);
	int a, b, c, d;
	int ans = 0;
	vector <bool> painted(100);
	cin >> a >> b >> c >> d;
	for (int i = a; i < b; i++) {
		painted[i] = true;
	}
	for (int i = c; i < d; i++) {
		painted[i] = true;
	}
	for (int i = 0; i < painted.size(); i++) {
		if (painted[i] == true) {
			ans += 1;
		}
	}
	cout << ans << "\n";
}