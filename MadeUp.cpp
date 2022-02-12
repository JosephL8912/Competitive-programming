#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
	cin >> n;
	int tempVar;
	unordered_map<int, int> A(n);
	vector<int> B(n);
	long long answer = 0;
	for (int i = 0; i < n; i++) { 
		cin >> tempVar; 
		A[tempVar]++; 
	}
	for (int i = 0; i < n; i++) {
		cin >> B[i];
	}
	for (int i = 0; i < n; i++) { 
		cin >> tempVar; 
		answer += A[B[tempVar - 1]]; 
	}
	cout << answer << '\n';
}
