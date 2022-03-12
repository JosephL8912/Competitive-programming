#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("square.in", "r", stdin);
	freopen("square.out", "w", stdout);
	
	int x1, x2, x3, x4, y1, y2, y3, y4;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	int leftMost, rightMost, topMost, botMost;
	leftMost = min(x1, x3);
	rightMost = max(x2, x4);
	botMost = min(y1, y3);
	topMost = max(y2, y4);
	int side = max(rightMost - leftMost, topMost - botMost);
	cout << side * side << "\n";
}