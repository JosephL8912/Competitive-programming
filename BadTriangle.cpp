#include <bits/stdc++.h>

using namespace std;
int main() {
    long long T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        long long a[N];
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        long long u = a[0] + a[1];
        bool possible = false;
        for (int i = 2; i < N; i++) {
            if (a[i] >= u) {
                cout << '1' << " " << '2' << " " << i + 1 << "\n";
                possible = true;
                break;
            }
        }
        if (possible == false) {
            cout << "-1" << "\n";
        }
    }
}