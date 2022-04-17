class Solution {
public:
    vector<vector<int>> answer;
    void allCombination(vector<int> nums, int index) {
        if (index == nums.size()) {
            answer.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[i], nums[index]);
            allCombination(nums, index + 1);
            swap(nums[i], nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        allCombination(nums, 0);
        return answer;
    }
};