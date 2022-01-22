#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n; cin >> n;
	int a[n + 2], b[n + 2];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	double low = 0, high = 1e9, answer = 1e9;
	for (int i = 0; i < 300 and l < r; i++)
	{
		double mid = (low + high) / 2, lowTime = 0, highTime = 0;
		for (int j = 0; j < n; j++)
		{
			double time = abs(mid - a[j]) / b[j];
			if (a[j] < mid) {
				lowTime = max(lowTime, time);
			}
			else {
				highTime = max(highTime, time);
			}
		}
		answer = min(answer, max(lowTime, highTime));
		if (lowTime > highTime) {
			high = mid;
		}
		else low = mid;
	}
	cout << answer << "\n";
}