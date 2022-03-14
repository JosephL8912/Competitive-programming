class Solution {
public:
    void sortColors(vector<int>& nums) {
        int red = 0, white = 0, blue = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                red++;
            }
            else if (nums[i] == 1) {
                white++;
            }
            else {
                blue++;
            }
        }
        nums.clear();
        while (red > 0) {
            nums.push_back(0);
            red--;
        }
        while (white > 0) {
            nums.push_back(1);
            white--;
        }
        while (blue > 0) {
            nums.push_back(2);
            blue--;
        }
    }
};