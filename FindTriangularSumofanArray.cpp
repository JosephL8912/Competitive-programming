class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<int> row;
        int total = 0;

        while (nums.size() > 0) {
            if (nums.size() == 1) {
                return nums[0];
            }
            for (int i = 0; i < nums.size() - 1; i++) {
                total = (nums[i] + nums[i + 1]) % 10;
                row.push_back(total);
            }
            nums = row;
            row.clear();
        }
        return -1;
    }
};