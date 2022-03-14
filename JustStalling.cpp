#include <bits/stdc++.h>
using namespace std;

int N, A[20], B[20];
int answer = 1;

int count(int x) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (B[i] >= x) {
            count++;
        }
    }
    return count;
}
int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    sort(A, A + N);
    for (int i = N - 1; i >= 0; i--) {
        answer *= count(A[i]) - (N - 1 - i);
    }
    cout << answer << "\n";
}
