#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	multiset<int> tickets;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		tickets.insert(-a);
	}

	for (int i = 0; i < m; i++) {
		int a;
		cin >> a;
		auto ticket = tickets.lower_bound(-a);
		if (ticket != tickets.end()) {
			cout << *ticket * -1 << "\n";
			tickets.erase(ticket);
		}
		else {
			cout << -1 << "\n";
		}
	}
}
