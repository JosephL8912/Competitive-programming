#include<bits/stdc++.h>
using namespace std;
bool B[20][20];
int main() {
	freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);
	int k, n; 
	cin >> k >> n;
	int A[n];
	while (k--) {
		for (int i = 0; i < n; i++){
			cin >> A[i];
	}
		for (int i = 0; i < n; i++) {
			for (int j = i + 1; j < n; j++) {
				B[A[i] - 1][A[j] - 1] = true;
			}
		}
	}
	int counter = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (!B[i][j] || !B[j][i]){
				counter++;
			}
		}
	}
	cout << counter << "\n";
}