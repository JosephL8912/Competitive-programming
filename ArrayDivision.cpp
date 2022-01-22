#include <bits/stdc++.h>
using namespace std;
#define int long long
int main()
{
	int n, k, a[200010]; 
	cin >> n >> k;
	int low = 0, high = 1e18, answer = 1e18;
	for (int i = 0; i < n; i++) { 
		cin >> a[i]; 
		low = max(low, a[i]); 
	}
	while (low < high)
	{
		int mid = (low + high) / 2;
		cnt = 0;
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			int cur = 0;
			while (i < n and cur + a[i] <= mid) {
				cur += a[i], i++;
			}
			sum = max(sum, cur), i--, cnt++;
		}
		if (cnt <= k) {
			high = mid; 
			answer = min(answer, sum);
		}
		else {
			low = mid + 1;
		}
	}
	cout << answer << "\n";
}
