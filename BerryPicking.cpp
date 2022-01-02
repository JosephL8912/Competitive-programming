#include <bits/stdc++.h>
using namespace std;

int N, K;
int berries[100000];
int mod;

bool cmp(int a, int b)
{
	return (a % mod) > (b % mod);
}

int main()
{
	freopen("berries.in", "r", stdin);
	freopen("berries.out", "w", stdout);
	cin >> N >> K;
	int maxBerries = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> berries[i];
		maxBerries = max(maxBerries, berries[i]);
	}
	int answer = 0;
	for (int b = 1; b <= maxBerries; b++)
	{
		int full = 0;
		for (int i = 0; i < N; i++)
			full += berries[i] / b;
		if (full < K / 2)
			break;
		if (full >= K)
		{
			answer = max(answer, b * (K / 2));
			continue;
		}
		mod = b;
		sort(berries, berries + N, cmp);
		int currentBerries = b * (full - K / 2);
		for (int i = 0; i < N && i + full < K; i++)
			currentBerries += berries[i] % b;
		answer = max(answer, currentBerries);
	}
	cout << answer << '\n';
}