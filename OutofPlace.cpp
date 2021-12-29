#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("outofplace.in", "r", stdin);
	freopen("outofplace.out", "w", stdout);
	int n;
	cin >> n;
	int cows[100], sortedCows[100];
	for (int i = 0; i < n; i++)
	{
		cin >> cows[i];
		sortedCows[i] = cows[i];
	}
	sort(sortedCows, sortedCows + n);
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		if (cows[i] != sortedCows[i])
		{
			answer++;
		}
	}
	cout << answer - 1 << "\n";
}