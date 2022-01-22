#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; 
	cin >> n;
	int low = 1, high = n * n;
	int suml = 0, sumr = 0;
	while (low < high)
	{
		int mid = (low + high) / 2, sum = 0;
		for (int i = 1; i <= n; i++) {
			sum += min(n, mid / i);
		}
		if (sum < (n * n + 1) / 2) {
			low = mid + 1;
		}
		else {
			high = mid;
		}
	}
	cout << low << "\n";
}
