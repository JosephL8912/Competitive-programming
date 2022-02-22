#include <bits/stdc++.h>

using namespace std;

vector<int> times;
int M;
int C;

bool check(int I) {
	int first = times[0];

	int buses = 1;
	int cowsOnBus = 0;
	for (int time : times) {
		cowsOnBus++;
		if (time - first > I || cowsOnBus > C) {
			buses++;
			cowsOnBus = 1;
			if (buses > M) {
				return false;
			}
			first = time;
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	freopen("convention.in", "r", stdin);
	freopen("convention.out", "w", stdout);

	int N;
	cin >> N >> M >> C;
	for (int i = 0; i < N; ++i) {
		int cow; cin >> cow;
		times.push_back(cow);
	}

	sort(begin(times), end(times));
	int I = 0, low = 0, high = times[N - 1] - times[0];
	while (low < high) {
		I = (low + high) / 2;
		if (check(I)) {
			high = I;
		}
		else {
			low = I + 1;
		}
	}
	cout << low << "\n";
}