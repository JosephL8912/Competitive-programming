class Solution {
public:
	int twoCitySchedCost(vector<vector<int>>& costs) {
		int n = costs.size();
		vector<int> saved(n);
		int answer = 0;

		for (int i = 0; i < n; i++) {
			answer += costs[i][0];
			saved[i] = costs[i][1] - costs[i][0];
		}

		sort(saved.begin(), saved.end());

		for (int i = 0; i < n / 2; i++) {
			answer += saved[i];
		}

		return answer;
	}
};