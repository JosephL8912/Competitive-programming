#include <bits/stdc++.h>
using namespace std;

int n;
bool pieces[11][8][8];
vector<int> grid[11];
bool check(int piece, int x, int y)
{
	return x >= 0 && x < n && y >= 0 && y < n && pieces[piece][x][y];
}
int main()
{
	freopen("bcs.in", "r", stdin);
	freopen("bcs.out", "w", stdout);
	int k;
	cin >> n >> k;
	char girdChar;
	int left, right, top, bottom;
	for (int i = 0; i <= k; i++)
	{
		left = n - 1;
		right = 0;
		top = n - 1;
		bottom = 0;
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < n; l++)
			{
				cin >> girdChar;
				pieces[i][j][l] = (girdChar == '#');
				if (pieces[i][j][l])
				{
					bottom = max(bottom, j);
					top = min(top, j);
					right = max(right, l);
					left = min(left, l);
				}
			}
		}
		grid[i] = { left, right, top, bottom };
	}

	for (int i = 1; i <= k; i++)
	{
		for (int j = i + 1; j <= k; j++)
		{
			for (int ix = grid[i][3] - n + 1; ix <= grid[i][2]; ix++)
			{
				for (int iy = grid[i][1] - n + 1; iy <= grid[i][0]; iy++)
				{
					for (int jx = grid[j][3] - n + 1; jx <= grid[j][2]; jx++)
					{
						for (int jy = grid[j][1] - n + 1; jy <= grid[j][0]; jy++)
						{
							bool correct = true;
							for (int x = 0; x < n; x++)
							{
								for (int y = 0; y < n; y++)
								{
									bool ipiece = check(i, x + ix, y + iy);
									bool jpiece = check(j, x + jx, y + jy);
									if (ipiece && jpiece)
									{
										correct = false;
										break;
									}
									if (pieces[0][x][y] != (ipiece || jpiece))
									{
										correct = false;
										break;
									}
								}
								if (!correct)
								{
									break;
								}
							}
							if (correct)
							{
								cout << i << " " << j << endl;
							}
						}
					}
				}
			}
		}
	}
}


