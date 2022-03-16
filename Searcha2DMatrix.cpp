class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            int low = 0;
            int high = matrix[0].size() - 1;
            while (low <= high) {
                int mid = (high + low) / 2;
                if (target == matrix[i][mid]) {
                    return true;
                }
                if (target < matrix[i][mid]) {
                    high = mid - 1;
                }
                else if (target > matrix[i][mid]) {
                    low = mid + 1;
                }
            }
        }
        return false;
    }
};