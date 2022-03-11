#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("notlast.in", "r", stdin);
	freopen("notlast.out", "w", stdout);
	map<string, int> cowmilk;
	map<int, int> milkfrequency;
	int N, small = INT_MAX;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		string cow;
		int value;
		cin >> cow >> value;
		cowmilk[cow] += value;
	}
	for (auto p : cowmilk) {
		small = min(small, p.second);
		milkfrequency[p.second]++;
	}
	if (cowmilk.size() < 7) {
		small = 0;
	}
	milkfrequency.erase(small);
	if (milkfrequency.empty() || milkfrequencyq.begin()->second > 1) {
		cout << "Tie" << "\n";
	}
	else {
		for (auto milk : cowmilk) {
			if (milk.second == milkfrequency.begin()->first) {
				cout << milk.first << "\n";
			}
		}
	}
}
