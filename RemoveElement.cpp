class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        int answer = nums.size();
        while (index < answer) {
            if (nums[index] == val) {
                nums[index] = nums[answer - 1];
                answer--;
            }
            else {
                index++;
            }
        }
        return answer;
    }
};