#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("stacking.in", "r", stdin);
	freopen("stackin.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	vector<int> difference(n + 1);
	for (int i = 0; i < k; i++) { 
		int a, b;
		cin >> a >> b;
		a--; 
		b--;
		difference[a]++;
		difference[b + 1]--;
	}
	int totalArray[1000000];
	int total = 0;
	for (int i = 0; i < n; i++) { 
		total += difference[i];
		totalArray[i] = total;
	}
	sort(totalArray, totalArray + n); 
	cout << totalArray[n / 2] << '\n'; 
}