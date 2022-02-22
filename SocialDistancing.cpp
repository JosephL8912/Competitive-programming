#include <bits/stdc++.h>
using namespace std;

#define int long long
int n, m;

int32_t main()
{
	freopen("socdist.in", "r", stdin);
	freopen("socdist.out", "w", stdout);
	cin >> n >> m;
	pair<int, int> v[m + 4];
	for (int i = 0; i < m; i++) {
		cin >> v[i].first >> v[i].second;
	}
	sort(v, v + m);
	int low = 1, high = 1e18 + 5;
	while (low < high)
	{
		int mid = (low + high + 1) / 2, num = 0, current = v[0].first, i = 0;
		while (num < n) {
			while (num < n and current >= v[i].first and current <= v[i].second) {
				num++, current += mid;
			}
			if (i == m - 1) {
				break;
			}
			i++;
			current = max(current, v[i].first);
		}
		if (num >= n) {
			low = mid;
		}
		else {
			high = mid - 1;
		}
	}
	cout << low;
}