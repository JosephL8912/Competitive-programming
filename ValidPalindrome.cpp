class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        vector<int> answer;
        if (n == 0) return true;
        for (int i = 0; i < n; i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z')|| (s[i] >= '0' && s[i] <= '9')) {
                answer.push_back(tolower(s[i]));
            }
        }
        int left = 0;
        int right = answer.size() - 1;
        while (left < right) {
            if (answer[left] != answer[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};