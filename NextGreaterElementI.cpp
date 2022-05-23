class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int num1s = nums1.size();
        int num2s = nums2.size(); 
        vector <int> answer;
        int x = 0;
        int y = 0;
        while (x < num1s) {
            if (nums1[x] == nums2[y]) {
                int temp = checkOther(nums2, y + 1);
                answer.push_back(temp);
                x++;
                y = -1;
            }
            y++;
        }
        return answer;
    }
    int checkOther(vector<int>& num2, int y) {
        int max = num2[y - 1];
        while (y < num2.size()) {
            if (num2[y] > max) {
                return num2[y];
            }
            y++;
        }
        return -1;
    }
};