class Solution {
public:
    bool detectCapitalUse(string word) {
        int answer = 0;
        for (char letter : word) {
            if (letter - 'A' <= 25) {
                answer++;
            }
        }
        if (answer == word.length() || answer == 0 || (answer == 1 && (word[0] - 'A' <= 25))) {
            return true;
        }
        else {
            return false;
        }
    }
};