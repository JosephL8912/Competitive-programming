class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num;
        num = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == num) {
                return true;
            }

            else {
                num = nums[i];
            }
        }
        return false;
    }
};