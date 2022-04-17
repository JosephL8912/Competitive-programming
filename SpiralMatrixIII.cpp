class Solution {
public:
	vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
		vector<vector<int>> answer; 
		int x = rStart, y = cStart;
		int direction = 0, step = 1, loop = 0, counter = 0;
		vector<int> r = { 0,1,0,-1 }
		vector<int> c = { 1,0,-1,0 };
		answer.push_back({ x,y });
		loop++;
		while (loop < cols * rows){
			for (int i = 1; i <= step; i++){
				x += r[direction]
				y += c[direction];
				if (x >= 0 and x < n and y >= 0 and y < m){
					answer.push_back({ x,y });
					loop++;
				}
			}
			if (counter & 1) {
				step++;
			}
			counter++;
			direction++;
			direction %= 4;
		}
		return answer;
	}
};