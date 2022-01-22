#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int array[n];
	for (int& x : array) {
		cin >> x;
	}
	long long cities[m + 2];
	cities[0] = -1e18;
	cities[m + 1] = 1e18;
	for (int i = 1; i <= m; i++) {
		cin >> cities[i];
	}
	long long answer = -1e18;
	for (int& x : array)
	{
		int idx = lower_bound(cities, cities + m + 2, x) - cities;
		answer = max(answer, min(cities[idx] - x, x - cities[idx - 1]));
	}
	cout << answer << "\n";
}
