#include <bits/stdc++.h>
using namespace std;

long long t, n, arr[200005], biggest, index;
bool answer;

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        biggest = 0;
        index = 0;
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            if (arr[j] > biggest) {
                biggest = arr[j];
                index = j;
            }
        }
        if (n == 1) {
            if (arr[0] == 1) {
                cout << "YES" + "\n";
            }
            else {
                cout << "NO" + "\n";
            }
        }
        else {
            answer = false;
            for (int j = 0; j < n; j++) {
                if (biggest - arr[j] <= 1 && j != index) {
                    answer = true;
                }
            }
            if (answer) {
                cout << "YES" + "\n";
            }
            else {
                cout << "NO" + "\n";
            }
        }
    }
}