class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() == 1) {
            return 0;
        }
        if (nums[0] > nums[1]) {
            return 0;
        }
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low < high) {
            mid = (low + high) / 2;
            if (nums[mid] >= nums[mid + 1] && nums[mid] >= nums[mid - 1]) {
                return mid;
            }
            else if (mid == nums.size() - 1) {
                return mid;
            }
            else if (nums[mid] <= nums[mid + 1]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return low;
    }
};