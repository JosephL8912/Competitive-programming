#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, V[25], C, answer;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> V[i];
    }
    for (int i = 1; i <= N; i++) {
        cin >> C;
        if (V[i] - C > 0) {
            answer += V[i] - C;
        }
    }
    cout << answer << "\n";
}