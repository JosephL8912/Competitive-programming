class Solution {
public:
	int islandPerimeter(vector<vector<int>>& grid) {
		int rows = grid.size();
		int cols = grid[0].size();
		int answer = 0;
		for (int x = 0; x < rows; x++)
		{
			for (int y = 0; y < cols; y++)
			{
				if (grid[x][y] == 1)
				{
					answer += 4;
					if (x - 1 >= 0 && grid[x - 1][y] == 1)
					{
						answer--;
					}
					if (x + 1 < rows && grid[x + 1][y] == 1)
					{
						answer--;
					}
					if (y - 1 >= 0 && grid[x][y - 1] == 1)
					{
						answer--;
					}
					if (y + 1 < cols && grid[x][y + 1] == 1)
					{
						answer--;
					}
				}
			}
		}
		return answer;
	}
};