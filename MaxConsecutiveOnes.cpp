class Solution {
public:
    int findMaxConsecutiveOnes(vector& nums) {
        int answer = 0;
        int counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                counter++;
            }
            if (nums[i] == 0) {
                counter = 0;
            }
            if (counter > answer) {
                answer = counter;
            }
        }
        return answer;
    }
};