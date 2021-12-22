#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen("cowsignal.in", "r", stdin);
	freopen("cowsignal.out", "w", stdout);
	int M, N, K; 
	cin >> M >> N >> K;
	for (int i = 0; i < M; i++) {
		string signal; 
		cin >> signal;
		for (int y = 0; y < K; y++) {
			for (int x = 0; x < N; x++) {
				for (int k = 0; k < K; k++) {
					cout << signal[x];
				}
				//dsd
			}
			cout << "\n";
		}
	}
}