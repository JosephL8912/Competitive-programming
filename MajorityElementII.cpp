class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>map;
        vector<int>answer;
        for (int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        for (auto num : map) {
            if (num.second > (nums.size() / 3)) {
                answer.push_back(num.first);
            }
        }
        return answer;
    }
};