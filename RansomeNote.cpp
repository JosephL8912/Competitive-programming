class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>letters(26);
        for (auto letter : magazine) {
            letters[letter - 'a']++;
        }
        for (auto letter : ransomNote) {
            if (letters[letter - 'a'] == 0) {
                return false;
            }
            letters[letter - 'a']--;
        }
        return true;
    }
};