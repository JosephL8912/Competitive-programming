class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if (arr[0] > k) {
            return k;
        }
        int low = 0;
        int high = arr.size();
        while (low < high) {
            int mid = (high + low) / 2;
            if (arr[mid] - mid - 1 < k) {
                low = mid + 1;
            }
            else {
                high = mid;
            }
        }
        return low + k;
    }
};