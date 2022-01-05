#include <bits/stdc++.h>

using namespace std;
int main() {
	freopen("citystate.in", "r", stdin);
	freopen("citystate.out", "w", stdout);
	int N;
	cin >> N;
	map<string, int> cityState;
	int answer = 0;
	for (int i = 0; i < N; i++) {
		string city;
		string state;
		cin >> city >> state;
		city = city.substr(0, 2);
		if (city != state) {
			answer += cityState[state + city];
		}
		cityState[city + state]++;
	}
	cout << answer << endl;
}
