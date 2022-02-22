#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("lazy.in", "r", stdin);
	freopen("lazy.out", "w", stdout);
	int n, k; cin >> n >> k;
	int answer = 0;
	int pre[n + 1][n + 1], arr[n + 1][n + 1];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	for (int i = 0; i < n; i++)
	{
		pre[i][0] = 0;
		for (int j = 0; j < n; j++)
			pre[i][j + 1] = pre[i][j] + arr[i][j];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int sum = 0, l = i;
			int left = j - k + 1, right = j + k + 1;
			while (l >= 0 and right >= left) { 
				sum += pre[l][min(n, right)] - pre[l][max(1, left) - 1];
				right--, left++, l--; 
			}
			l = i + 1, left = j - k + 2, right = j + k;
			while (l < n and right >= left) { 
				sum += pre[l][min(n, right)] - pre[l][max(1, left) - 1];
				right--, left++, l++;
			}
			answer = max(answer, sum);
		}
	}
	cout << answer << "\n";
}