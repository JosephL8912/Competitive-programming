class Solution {
public:
    int jump(vector<int>& nums) {
        int maxVal = 0;
        int currentVal = 0;
        int answer = 0;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            maxVal = max(maxVal, nums[i] + i);
            if (i == currentVal) {
                answer++;
                currentVal = maxVal;
            }
        }
        return answer;
    }
};