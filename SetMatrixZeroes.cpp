class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> cols;
        vector<int> rows;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == 0) {
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        for (auto col : cols) {
            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][col] = 0;
            }
        }
        for (auto row : rows) {
            for (int j = 0; j < matrix[0].size(); j++) {
                matrix[row][j] = 0;
            }
        }
    }
};