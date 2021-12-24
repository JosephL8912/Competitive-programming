#include <bits/stdc++.h>

using namespace std;

constexpr int numLet = 26;
using arr = array<int, numLet>;

int main() {
	freopen("blocks.in", "r", stdin);
	freopen("blocks.out", "w", stdout);
	int n;
	cin >> n;
	arr ans{};
	while (n--) {
		string string1, string2;
		cin >> string1 >> string2;
		arr freq1{}, freq2{};
		for (char c : string1) {
			freq1[c - 'a']++;
		}
		for (char c : string2) {
			freq2[c - 'a']++;
		}
		for (int i = 0; i < numLet; i++) {
			ans[i] += max(freq1[i], freq2[i]);
		}
	}
	for (int i : ans) {
		cout << i << '\n';
	}

	return 0;
}
