class Solution {
public:
    int mySqrt(int x) {
        if (x == 1) {
            return 1;
        }
        long long low = 1;
        long long high = x / 2;
        long long answer = 0;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long square = mid * mid;

            if (square == x) return mid;
            else if (square < x) {
                low = mid + 1;
                answer = mid;
            }
            else {
                high = mid - 1;
            }
        }

        return answer;
    }
};