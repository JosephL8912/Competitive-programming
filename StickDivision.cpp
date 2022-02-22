#include <bits/stdc++.h>
using namespace std;

int main()
{
	int len, n;
	cin >> len >> n;

	multiset<long long> stick;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		stick.insert(a);
	}

	long long l answer = 0, temp = 0;
	for (int i = 1; i < n; i++) {
		temp += *stick.begin();
		stick.erase(stick.begin());
		temp += *stick.begin();
		stick.erase(stick.begin());

		stick.insert(temp);
		answer += temp;
		temp = 0;
	}

	cout << answer << "\n";
}