#include <bits/stdc++.h>
using namespace std;

int N;
int s[101], t[101], b[101];

int main(void) {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> s[i] >> t[i] >> b[i];
    }

    int maxBuck = 0;
    for (int time = 1; time <= 1000; time++) {
        int buckets = 0;
        for (int i = 1; i <= N; i++) {
            if (s[i] <= time && time <= t[i]) {
                buckets += b[i];
            }
        }
        maxBuck = max(maxBuck, buckets);
    }
    cout << maxBuck << "\n";
}