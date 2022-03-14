class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>visited(nums.size() + 1, 1);

        for (int i = 0; i < nums.size(); i++) {
            if (visited[nums[i]] == 0) {
                return nums[i];
            }
            else {
                visited[nums[i]] = 0;
            }
        }
        return 0;
    }
};
