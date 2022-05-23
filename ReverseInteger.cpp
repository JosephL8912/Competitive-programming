class Solution {
public:
    int reverse(int x) {
        long long int answer = 0;
        int num = 0;
        while (x) {
            num = x % 10;
            answer = (answer * 10) + num;
            x /= 10;
        }
        if ((INT_MAX < answer) || (INT_MIN > answer)) {
            return 0;
        }
        else {
            return answer;
        }
    }
};