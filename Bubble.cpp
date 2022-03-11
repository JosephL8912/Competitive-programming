#include <bits/stdc++.h>
using namespace std;

int main() {
	int ans[] = { 5, 1, 3, 2, 4 }; 
	int N = 5;
	sort(ans, ans + N);
	for (int i = 0; i < N; i++)
		cout << ans[i] << " "; 
	cout << "\n";

	int ans2[] = { 5, 1, 3, 2, 4 };
	sort(ans2 + 1, ans2 + 4);
	for (int i = 0; i < N; i++)
		cout << ans2[i] << " "; 
}