#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("lostcow.in", "r", stdin);
	freopen("lostcow.out", "w", stdout);
	int x, y;
	cin >> x >> y;

	int answer = 0;
	int bes = 1;
	int dist = 1;
	while (true) {
		if ((dist == 1 && x <= y && y <= x + bes) || (dist == -1 && x - bes <= y && y <= x)) {
			answer += abs(y - x);
			cout << answer << endl;
			break;
		}
		else {
			answer += bes * 2;
			bes *= 2;
			dist *= -1;
		}
	}
}