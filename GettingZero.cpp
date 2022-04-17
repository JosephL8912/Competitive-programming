#include <bits/stdc++.h>
using namespace std;
int answer[32769];

void judge(int a, int b) {
    if (a % 2 == 0) {
        if (answer[a / 2] > b + 1) {
            answer[a / 2] = b + 1;
            judge(a / 2, b + 1);
        }
        if (answer[a / 2 + 16384] > b + 1) {
            answer[a / 2 + 16384] = b + 1;
            judge(a / 2 + 16384, b + 1);
        }
    }
    if (answer[a - 1] > b + 1) {
        answer[a - 1] = b + 1;
        judge(a - 1, b + 1);
    }
}
int main() {
    for (int i = 1; i <= 32768; ++i) {
        answer[i] = 100;
    }
    int t, a;
    cin >> t;
    judge(32768, 0);
    for (int i = 0; i < t; ++i) {
        cin >> a;
        cout << answer[a] << "\n";
    }
}
