class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {
            int sum = nums[low] + nums[high];
            if (sum == target)
            {
                answer.push_back(low + 1);
                answer.push_back(high + 1);
                return answer;
            }
            else if (sum < target)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return answer;
    }
};