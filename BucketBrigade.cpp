#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("buckets.in", "r", stdin);
	freopen("buckets.out", "w", stdout);
	int barnY = 0, barnX = 0, rockY = 0, rockX = 0, lakeY = 0, lakeX = 0, cowsNeeded;
	for (int y = 0; y < 10; y++){
		string row;
		cin >> row;
		for (int x = 0; x < 10; x++){
			if (row[x] == 'B'){
				barnY = y;
				barnX = x;
			}
			else if (row[x] == 'R'){
				rockY = y;
				rockX = x;
			}
			else if (row[x] == 'L'){
				lakeY = y;
				lakeX = x;
			}
		}
	}
	cowsNeeded = abs(barnY - lakeY) + abs(barnX - lakeX) - 1;
	if (barnY == lakeY && rockY == barnY && ((lakeX < rockX && rockX < barnX) || (barnX < rockX && rockX < lakeX))){
		cowsNeeded += 2;
	}
	else if (barnX == lakeX && rockX == barnX && ((lakeY < rockY && rockY < barnY) || (barnY < rockY && rockY < lakeY))){
		cowsNeeded += 2;
	}
	cout << cowsNeeded << "\n";
}
