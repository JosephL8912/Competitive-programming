class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int> answer;

        int rows = grid.size();
        int cols = grid[0].size();

        for (int i = 0; i < cols; i++) {
            int row, col = i; 
            for (row = 0; row < rows; row++) {
                if (grid[row][col] == -1) { 
                    if (col == 0 || grid[row][col - 1] == 1) {
                        break;
                    }
                    col -= 1;
                }
                else {
                    if (col == cols - 1 || grid[row][col + 1] == -1) {
                        break;
                    }
                    col += 1;
                }
            }
            answer.push_back((row == rows ? col : -1));
        }

        return answer;
    }
};