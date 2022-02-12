#include <bits/stdc++.h>
using namespace std;
int n;
int answer = 0;
int main() {
	freopen("guess.in", "r", stdin);
	freopen("guess.out", "w", stdout);
	cin >> n;
	set<string> ch[n];
	for (int i = 0; i < n; i++) {
		string name;
		int m;
		cin >> name >> m;
		for (int j = 0; j < m; j++) {
			string c;
			cin >> c;
			ch[i].insert(c);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int tempVar = 0;
			for (string element : ch[i]) {
				if (ch[j].count(element)) {
					tempVar++;
				}
			}
			answer = max(tempVar, answer);
		}
	}
	cout << answer + 1 << "\n";
}
