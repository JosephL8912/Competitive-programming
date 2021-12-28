#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);
	vector<int> cowLoc;
	for (int i = 0; i < 3; i++) {
		int cowNum;
		cin >> cowNum;
		cowLoc.push_back(cowNum);
	}
	if (cowLoc[0] == cowLoc[2] - 2) {
		cout << 0 << "\n";
	}
	else if ((cowLoc[1] == cowLoc[2] - 2) || (cowLoc[0] == cowLoc[1] - 2)) {
		cout << 1 << "\n";
	}
	else {
		cout << 2 << "\n";
	}
	cout << max(cowLoc[2] - cowLoc[1], cowLoc[1] - cowLoc[0]) - 1 << "\n";
}
