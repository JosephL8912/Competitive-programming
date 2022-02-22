#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5;

int h[MAX_N + 1];
int dynamicPro[MAX_N + 1];

int main() {
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> h[i];
	}

	dynamicPro[1] = 0;
	for (int i = 2; i <= N; i++) {
		dynamicPro[i] = INT32_MAX;  
	}
	for (int i = 1; i <= N; i++) {
		if (i + 1 <= N) {
			dynamicPro[i + 1] = min(dynamicPro[i + 1], dynamicPro[i] + abs(h[i] - h[i + 1]));
		}
		if (i + 2 <= N) {
			dynamicPro[i + 2] = min(dynamicPro[i + 2], dynamicPro[i] + abs(h[i] - h[i + 2]));
		}
	}

	cout << dynamicPro[N] << "\n";
}
