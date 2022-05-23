class Solution {
public:
    int findRow(string s, string word)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (s.find(word[i]) == -1)
                return true;
        }
        return false;
    }
    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiop", s2 = "asdfghjkl", s3 = "zxcvbnm";
        vector<string>answer;
        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            if (findRow(s1, word) || findRow(s2, word) || findRow(s3, word))
            {
                answer.push_back(words[i]);
            }
        }
        return asnwer;
    }
};