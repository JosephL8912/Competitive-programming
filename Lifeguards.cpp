#include <bits/stdc++.h>
using namespace std;
pair<int, int> a[200010];

int32_t main()
{
	freopen("lifeguards.in", "r", stdin);
	freopen("lifeguards.out", "w", stdout);
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
	sort(a, a + n);
	int sum = 0, left = a[0].first, right = a[0].first, mins = 1e9, ans = 0;
	for (int i = 0; i < n; i++)
	{
		sum += max(0, a[i].second - max(left, a[i].first));
		left = max(left, a[i].second);
		if (i == n - 2) ans = sum;
	}
	for (int i = 0; i < n - 1; i++) {
		mins = min(mins, max(0, a[i + 1].first - right));
		right = max(right, a[i].second);
	}
	cout << max(ans, sum - mins);
}

