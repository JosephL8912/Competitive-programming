#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);
    int n;
    string mailboxes;
    cin >> n >> mailboxes;
    for (int guess = 1; guess <= n; guess++) {
        bool valid = true;
        for (int i = 0; i + guess <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (mailboxes.substr(i, guess) == mailboxes.substr(j, guess)) {
                    valid = false;
                }
            }
        }
        if (valid) {
            cout << guess << "\n";
            break;
        }
    }
}