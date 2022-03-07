#include <bits/stdc++.h>
using namespace std;

int N;
int findIndex(int want, int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == want)
		{
			return i;
		}
	}
}

int main()
{
	cin >> N;
	int original[N];
	int wanted[N];
	int counter = 0;
	for (int i = 0; i < N; i++) {
		cin >> original[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> wanted[i];
	}

	for (int i = 0; i < N; i++) {
		int index = findIndex(wanted[i], original, N);
		if (i == index) {
			continue;
		}
		int temp = original[index];
		for (int j = index; j >= i; j--) {
			original[j] = original[j - 1];
		}
		original[i] = temp;
		counter++;
	}
	cout << counter << "\n";
}