#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binaryS(vector<int>& nums, int low, int high) {
        if (nums[low] < nums[high]) {
            return nums[low];
        }
        if (low > high) {
            return INT_MAX;
        }
        if (low + 1 >= high) {
            return min(nums[low], nums[high]);
        }
        int mid = (low + high) / 2;
        return min(binaryS(nums, low, mid), binaryS(nums, mid + 1, high));
    }
    int findMin(vector<int>& nums) {
        return binaryS(nums, 0, nums.size() - 1);
    }
};