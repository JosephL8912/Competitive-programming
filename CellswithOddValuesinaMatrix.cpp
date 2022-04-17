class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector <vector<int>> arr(m, vector<int>(n, 0));
        for (int i = 0; i < indices.size(); i++) {
            int x = indices[i][0];
            int y = indices[i][1];
            for (int j = 0; j < n; j++) {
                arr[x][j]++;
            }
            for (int j = 0; j < m; j++) {
                arr[j][y]++;
            }
        }
        int answer = 0;
        for (auto& v : arr) {
            for (auto& val : v) {
                if ((val & 1) != 0) {
                    answer++;
                }
            }
        }
        return answer;
    }
};