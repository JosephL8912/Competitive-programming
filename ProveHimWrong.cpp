#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (pow(3, n - 1) > 10E9) {
            cout << "NO" << "\n";
        }
        else {
            cout << "YES" << "\n";
            int d = 1;
            cout << d << " ";
            for (int i = 1; i < n; i++) {
                cout << d * 3 << " ";
                d = d * 3;
            }
            cout << "\n";
        }
    }
}