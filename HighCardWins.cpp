#include <bits/stdc++.h>
using namespace std;

const int maxHand = 1e5;
bool elsieHas[maxHand + 1];

int main() {
	freopen("highcard.in", "r", stdin);
	freopen("highcard.out", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int card;
		cin >> card;
		elsieHas[card] = true;
	}
	vector<int> elsieHand;
	vector<int> bessieHand;
	for (int i = 1; i <= n * 2; i++) {
		if (elsieHas[i]) {
			elsieHand.push_back(i);
		}
		else {
			bessieHand.push_back(i);
		}
	}
	int answer = 0;
	int bessieCard = 0; 
	int elsieCard = 0;
	while (bessieCard < n && elsieCard < n) {
		if (bessieHand[bessieCard] > elsieHand[elsieCard]) {
			answer++;
			bessieCard++;
			elsieCard++;
		}
		else {
			bessieCard++;
		}
	}
	cout << answer << "\n";
}
