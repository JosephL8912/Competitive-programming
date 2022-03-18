class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        if (n < 3) {
            return false;
        }
        int low(nums[0]), high(INT_MAX);
        for (int i = 0; i < n; i++) {
            if (nums[i] <= low) {
                low = nums[i];
            }
            else if (nums[i] <= high) {
                high = nums[i];
            }
            else {
                return true;
            }
        }
        return false;
    }
};