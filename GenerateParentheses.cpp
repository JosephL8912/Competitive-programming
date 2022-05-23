class Solution {
public:
    void solving(vector<string>& answer, string s, int start, int n) {
        if (n == 0 && start == 0) {
            answer.push_back(s);
            return;
        }
        if (n > 0) {
            solving(answer, s + "(", start + 1, n - 1);
        }
        if (start > 0) {
            solving(answer, s + ")", start - 1, n);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        solving(answer, "", 0, n);
        return answer;
    }
};