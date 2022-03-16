class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jumpDist = 0;
        int n = nums.size();
        for (int i = 0; i < n && jumpDist >= i; i++) {
            jumpDist = max(nums[i] + i, jumpDist);
        }
        return jumpDist >= n - 1;
    }
};