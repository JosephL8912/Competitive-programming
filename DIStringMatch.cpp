class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int low = 0;
        int high = n;
        vector<int> answer;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'I') {
                answer.push_back(low);
                low++;
            }
            else {
                answer.push_back(high);
                high--;
            }
        }
        answer.push_back(low);
        return answer;
    }
};