#include <bits/stdc++.h>
using namespace std;

bool cowFlipped[10][10]; 
int CowUntipperator(int i, int j){
	if (cowFlipped[i][j]){
		for (int k = 0; k <= i; k++){
			for (int h = 0; h <= j; h++){
				cowFlipped[k][h] = !cowFlipped[k][h];
			}
		}
		return 1;
	}
	return 0;
}
int main()
{
	freopen("cowtip.in", "r", stdin);
	freopen("cowtip.out", "w", stdout);
	int N;
	cin >> N;
	string row;
	int x = N - 1, y = N - 1, answer = 0;

	for (int i = 0; i < N; i++){
		cin >> row;
		
		for (int j = 0; j < N; j++){
			if (row[j] == '0') {
				cowFlipped[i][j] = false;
			}
			else {
				cowFlipped[i][j] = true;
			}
		}
	}
	while (x >= 0 && y >= 0)
	{
		answer += CowUntipperator(x, y);
		if (x != y){
			answer += CowUntipperator(y, x);
		}
		if (x == 0){
			y--;
			x = y;
		}
		else{
			x--;
		}
	}
	cout << answer << "\n";
}


