class Solution {
public:
    bool isValid(string s) {
        string brackets;
        int counter = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '['){
                brackets.push_back(s[i]);
                counter++;
            }
            else {
                if (counter != 0) {
                    if (s[i] == ')') {
                        if (brackets[brackets.size() - 1] == '(') {
                            brackets.pop_back();
                            counter--;
                        }
                        else {
                            return false;
                        }
                    }
                    else if (s[i] == ']')
                    {
                        if (brackets[brackets.size() - 1] == '[')
                        {
                            brackets.pop_back();
                            counter--;
                        }
                        else {
                            return false;
                        }
                    }
                    else if (s[i] == '}')
                    {
                        if (brackets[brackets.size() - 1] == '{')
                        {
                            brackets.pop_back();
                            counter--;
                        }
                        else {
                            return false;
                        }
                    }
                }
                else {
                    return false;
                }
            }
        }
        if (brackets.size() == 0) {
            return true;
        }
        return false;

    }
};