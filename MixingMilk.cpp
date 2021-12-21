#include <bits/stdc++.h>
using namespace std;
const int run = 3;
int capMilk[run], amountMilk[run];
int main() {
	freopen("mixmilk.in", "r", stdin);
	freopen("mixmilk.out", "w", stdout);
	for (int i = 0; i < run; i++) {
		cin >> capMilk[i] >> amountMilk[i];
	}
	for (int i = 0; i < 100; i++) {
		int milk = min(amountMilk[i % run], capMilk[(i + 1) % run] - amountMilk[(i + 1) % run]);
		amountMilk[i % run] -= milk;
		amountMilk[(i + 1) % run] += milk;
	}
	for (int i = 0; i < run; i++) {
		cout << amountMilk[i] << "\n";
	}
}