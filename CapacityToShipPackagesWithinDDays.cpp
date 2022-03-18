class Solution {
public:
    bool isPossible(vector<int> weights, int days, int mid)
    {
        int required = 1, sum = 0;
        for (int i = 0; i < weights.size(); i++)
        {
            if ((sum + weights[i]) > mid)
            {
                required++;
                sum = weights[i];
            }
            else
                sum += weights[i];
        }
        return (required <= days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0, maxx = 0;
        for (int i = 0; i < n; i++)
        {
            sum += weights[i];
            maxx = max(maxx, weights[i]);
        }
        int low = maxx;
        int high = sum;
        int answer = 0;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (isPossible(weights, days, mid))
            {
                answer = mid;
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        return answer;
    }
};