#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	vector<int> nums(N);
	for (int i = 0; i < N; i++) {
		cin >> nums[i];
	}

	long long prefix_sum = 0;
	long long answer = 0;
	map<long long, int> sums;
	sums[0] = 1;
	for (int x : nums) {
		prefix_sum += x;
		answer += sums[prefix_sum - X];
		sums[prefix_sum]++;
	}
	cout << answer << "\n";
}
