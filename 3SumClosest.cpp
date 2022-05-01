class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int minimum = INT_MAX, answer = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            int low = i + 1, high = nums.size() - 1;

            if (i && nums[i] == nums[i - 1]) {
                continue;
            }
            while (low < high) {
                int sum = nums[i] + nums[low] + nums[high];
                if (sum == target) {
                    return sum;
                }
                else if (sum < target) {
                    low++;
                }
                else {
                    high--;
                }
                if (minimum > abs(target - sum)) {
                    minimum = abs(target - sum);
                    answer = sum;
                }
            }
        }

        return answer;
    }
};