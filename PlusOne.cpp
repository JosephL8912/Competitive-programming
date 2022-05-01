class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1, oneToNext;
        digits[i]++;
        if (digits[i] > 9) {
            digits[i] = 0;
            oneToNext = 1;
            i--;
            while (i >= 0 && oneToNext) {
                digits[i] += oneToNext;
                if (digits[i] > 9) {
                    oneToNext = 1;
                    digits[i] = 0;
                }
                else {
                    oneToNext = 0;
                }
                i--;
            }
            if (oneToNext) {
                digits.push_back(0);
                for (i = digits.size() - 2; i >= 0; --i) {
                    digits[i + 1] = digits[i];
                }
                digits[0] = 1;
            }
        }
        return digits;
    }
};