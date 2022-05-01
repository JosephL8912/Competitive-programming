class Solution {
public:
    int addDigits(int num) {
        if (num < 10) {
            return num;
        }
        int number = 0;
        while (num) {
            int dig = num % 10;
            number += dig;
            num = num / 10;
        }
        return addDigits(number);
    }
};