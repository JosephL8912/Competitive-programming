#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n;
	cin >> k >> n;
	vector<int> CM(k + 1);
	CM[0] = 0;
	for (int i = 0; i < k; i++) {
		int a;
		cin >> a;
		CM[i + 1] = CM[i] + a;
	}
	vector<int> RS(n); 
	for (int& rs : RS) {
		cin >> rs;
	}
	int answer = 0; 
	int rs = RS[0]; 
	set<int> PIS; 
	for (int i = 1; i <= k; i++) {
		PIS.insert(rs - CM[i]);
	}
	for (int pis : PIS) {
		set<int> CS; 
		for (int i = 1; i <= k; i++)
			CS.insert(pis + CM[i]);
		bool avaliable = true;
		for (int rs : RS) {
			if (!CS.count(rs)) {
				avaliable = false;
				break;
			}
		}
		if (avaliable) {
			answer++;
		}
	}
	cout << answer << "\n";
}