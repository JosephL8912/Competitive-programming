class Solution {
public:
    string intToRoman(int num) {
        vector<int> nums = { 1000,900,500,400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
        string romamLet[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
        string answer = "";
        int i = 0;
        while (num > 0)
        {
            if (num >= nums[i])
            {
                answer += romamLet[i];
                num = num - nums[i];
                i = -1;
            }
            i++;
        }
        return answer;
    }
};