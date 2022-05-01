class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        int n = nums.size();
        vector<vector<int>>answer;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++)
        {
            int bou = 0 - nums[i];
            int  left = i + 1, right = n - 1;
            while (left < right)
            {
                if (bou < nums[left] + nums[right]) {
                    right--;
                }
                else if (bou > nums[left] + nums[right]) {
                    left++;
                }
                else
                {
                    vector<int>temp(3, 0);
                    temp[0] = nums[i];
                    temp[1] = nums[left];
                    temp[2] = nums[right];
                    answer.push_back(temp);
                    while (left < n - 1 && temp[1] == nums[left]) {
                        left++;
                    }
                    while (right > 1 && temp[2] == nums[right]) {
                        right--;
                    }
                }
            }
            while (i + 1 < n - 2 && nums[i] == nums[i + 1]) {
                i++;
            }
        }
        return answer;
    }
};