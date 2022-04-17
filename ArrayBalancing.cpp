#include <bits/stdc++.h>
using namespace std;
int t;
int a[30], b[30];
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        for (int i = 1; i <= n; i++) {
            cin >> b[i];
        }
        long long answer = 0;
        for (int i = 2; i <= n; i++) {
            int sum1 = abs(a[i - 1] - a[i]) + abs(b[i - 1] - b[i]);
            int sum2 = abs(a[i - 1] - b[i]) + abs(b[i - 1] - a[i]);
            if (sum1 > sum2) {
                swap(a[i], b[i]);
            }
        }
        for (int i = 2; i <= n; i++) {
            answer += abs(a[i - 1] - a[i]) + abs(b[i - 1] - b[i]);
        }
        cout << answer << "\n";
    }
}