class Solution {
public:
    void findSub(vector<int>& arr, int index, vector<int> vec, vector<vector<int>>& answer) {
        if (index >= arr.size()) {
            answer.push_back(vec);
            return;
        }
        findSub(arr, index + 1, vec, answer);
        vec.push_back(arr[index]);
        findSub(arr, index + 1, vec, answer);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        findSub(nums, 0, {}, answer);
        return answer;
    }
};