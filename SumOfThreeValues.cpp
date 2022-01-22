#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, x;
	cin >> n >> x;
	pair<int, int> arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first;
		arr[i].second = i + 1;
	}
	sort(arr, arr + n);

	for (int mid = 0; mid < n; mid++) {
		int l = 0, r = n - 1;
		while (l != r) {
			int sum = arr[l].first + arr[mid].first + arr[r].first;
			if (sum == x && l != r && l != mid && r != mid) {
				cout << arr[l].second << " " << arr[mid].second << " " << arr[r].second << "\n";
			}
			else if (sum < x) {
				l++;
			}
			else {
				r--;
			}
		}
	}

	cout << "IMPOSSIBLE" << "";
}
