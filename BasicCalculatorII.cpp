class Solution {
public:
    int calculate(string s) {
        int sum = 0;
        long long last = 0, lastRes = 1;
        char lastOp = '+';
        if (s.size() < 1) {
            return sum;
        }
        int i = 0;
        int sign = 1;
        while (i < s.size()) {
            if (s[i] == ' ') {
                i++;
                continue;
            }
            if (s[i] == '+' || s[i] == '-') {
                sum += lastRes * sign;
                sign = s[i++] == '+' ? 1 : -1;
                lastRes = 1;
                lastOp = '+';
            }
            else if (s[i] == '/' || s[i] == '*') {
                lastOp = s[i];
                i++;
            }
            if (isdigit(s[i])) {
                last = 0;
                while (i < s.size() && isdigit(s[i])) {
                    last = last * 10 + s[i] - '0';
                    i++;
                }
                if (lastOp == '*') {
                    lastRes *= last;
                }
                else if (lastOp == '/') {
                    lastRes /= last;
                }

                else {
                    lastRes = last;
                }
            }
        }
        sum += lastRes * sign;
        return sum;
    }
};