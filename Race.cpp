#include <bits/stdc++.h>
using namespace std;

int solve(int distance) {
    int X;
    cin >> X;
    int travel = 0;
    int timeused = 0;
    for (int currspeed = 1;; currspeed++) {
        travel += currspeed;
        timeused++;
        if (travel >= distance) {
            return timeused;
        }
        if (currspeed >= X) {
            travel += currspeed;
            timeused++;
            if (travel >= distance) {
                return timeused;
            }
        }
    }
}

int main() {
    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);
    int k, n;
    cin >> k >> n;
    for (int i = 0; i < n; i++) {
        cout << "\n" << solve(k);
    }
}