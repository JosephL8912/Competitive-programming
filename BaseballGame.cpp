class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> nums;
        for (auto& outCome : ops) {
            if (outCome == "+") {
                nums.push_back(nums.back() + nums[nums.size() - 2]);
            }
            else if (outCome == "C") {
                nums.pop_back();
            }
            else if (outCome == "D") {
                nums.push_back(2 * nums.back());
            }
            else {
                nums.push_back(stoi(outCome));
            }
        }
        return accumulate(nums.begin(), nums.end(), 0);
    }
};