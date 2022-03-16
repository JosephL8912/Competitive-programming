class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size();
        if (nums.size() == 1) {
            return nums[0];
        }
        while (low < high) {
            int mid = (low + high) / 2;
            if (mid % 2 == 0 && nums[mid] == nums[mid + 1] || mid % 2 != 0 && nums[mid] == nums[mid - 1]) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        return nums[high];
    }
};