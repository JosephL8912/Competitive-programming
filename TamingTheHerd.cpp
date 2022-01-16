#include <bits/stdc++.h>
using namespace std;

int N;
int A[100000];

int main()
{
	freopen("taming.in", "r", stdin);
	freopen("taming.out", "w", stdout);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	A[0] = 0;
	int counter = -1;
	int breakouts = 0;
	int possible = 0;
	for (int i = N - 1; i >= 0; i--)
	{
		if (counter == -1) {
			counter = A[i];
		}
		if (A[i] == -1) {
			A[i] = counter;
		}
		if (A[i] == 0) {
			breakouts++;
		}
		if (A[i] == -1) {
			possible++;
		}
		if (counter > -1) {
			counter--;
		}
	}
	cout << breakouts << ' ' << breakouts + possible << '\n';
}