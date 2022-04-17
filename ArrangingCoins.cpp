class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 1, high = n;
        long long answer = 1;
        if (n == 1) {
            return 1;
        }
        while (low <= high)
        {
            long long mid = (high + low) / 2;
            if (mid * (mid - 1) / 2 <= n)
            {
                answer = mid - 1;
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
        return answer;
    }
};