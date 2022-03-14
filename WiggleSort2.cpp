class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> t = nums; int n = nums.size();
        sort(t.begin(), t.end());
        int j = n - 1;
        for (int i = 1; i < n; i = i + 2){
            nums[i] = t[j--];
        }
        for (int i = 0; i < n; i = i + 2){
            nums[i] = t[j--];
        }
    }
};