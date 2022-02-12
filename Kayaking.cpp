#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	n *= 2;
	vector<int> weight(n); 
	for (int& w : weight) {
		cin >> w;
	}
	sort(weight.begin(), weight.end());
	int num0 = 0;
	for (int i = 3; i < n; i += 2) {
		num0 += weight[i] - weight[i - 1];
	}
	int answer = num0;
	for (int s = 3; s < n; s += 2) { 
		num0 -= weight[s] - weight[s - 1];
		num0 += weights - 1] - weight[s - 2];
		answer = min(answer, num0); 
		int instance = num0;
		for (int f = 2; f < s; f += 2) { 
			instance -= weight[f] - weight[f - 1];
			instance += weight[f - 1] - weight[f - 2];
			answer = min(answer, instance);
		}
	}
	cout << answer << "\n";
}
