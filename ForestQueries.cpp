#include <bits/stdc++.h>
using namespace std;
int maxSide = 1000;
int prefixTree[maxSide + 1][maxSide + 1];
int forest[maxSide + 1][maxSide + 1];

int main() {
	int N;
	int Q;
	cin >> N >> Q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char a;
			cin >> a;
			forest[i + 1][j + 1] += a == '*';
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			prefixTree[i][j] = forest[i][j] + prefixTree[i - 1][j] + prefixTree[i][j - 1] - prefixTree[i - 1][j - 1];
		}
	}
	for (int q = 0; q < Q; q++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << prefixTree[x2][y2] - prefixTree[x1 - 1][y2] - prefixTree[x2][y1 - 1] + prefixTree[x1 - 1][y1 - 1] << '\n';
	}
}