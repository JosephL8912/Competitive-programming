#include <bits/stdc++.h>
using namespace std;

int N;
int main() {
	string blockA, blockB, blockC, blockD;
	cin >> N >> blockA >> blockB >> blockC >> blockD;
	for (int i = 0; i < N; i++) {
		string word;
		bool aUsed = false, bUsed= false, cUsed = false, dUsed = false;
		cin >> word;
		bool valid = true;
		bool wordUsed[word.length()] = {false};
		for (int j = 0; j < word.length(); j++) {
			for (int k = 0; k < 6; k++) {
				if ((word[j] == blockA[k]) && (aUsed == false)) {
					aUsed = true;
					wordUsed[j] = true;
					break;
				}
				else if ((word[j] == blockB[k]) && (bUsed == false)) {
					bUsed = true;
					wordUsed[j] = true;
					break;
				}
				else if ((word[j] == blockC[k]) && (cUsed == false)) {
					cUsed = true;
					wordUsed[j] = true;
					break;
				}
				else if ((word[j] == blockD[k]) && (dUsed == false)) {
					dUsed = true;
					wordUsed[j] = true;
					break;
				}
			}
			if ((aUsed == false) && (bUsed == false) && (cUsed == false) && (dUsed == false)) {
				cout << "NO" << "\n";
				break;
			}
		}
		for (int j = 0; j < word.length(); j++) {
			if (wordUsed[j] == false) {
				valid = false;
				break;
			}
		}
		if (valid == true) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}