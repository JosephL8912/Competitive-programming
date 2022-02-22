#include <bits/stdc++.h>
using namespace std;
#define ll int64_t

int main() {
	string S; 
	cin >> S;
	map<int, int> M;
	M[0]++;
	ll answer = 0, index = 0, pw = 1;
	for (int i = S.size() - 1; i >= 0; i--) {
		int digger = S[i] - '0';
		index = (index + digger * pw) % 2019;
		pw = (pw * 10) % 2019;
		answer += M[index];
		M[index]++;
	}
	cout << answer << "\n";
}