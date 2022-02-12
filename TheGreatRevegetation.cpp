#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int N, M;
    int A[151], B[151], P[101];
    freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);
    fin >> N >> M;
    for (int i = 0; i < M; i++) {
        cin >> A[i] >> B[i];
        if (A[i] > B[i]) {
            swap(A[i], B[i]);
        }
    }

    for (int i = 1; i <= N; i++) {
        int g;
        for (g = 1; g <= 4; g++) {
            bool good = true;
            for (int j = 0; j < M; j++)
                if (B[j] == i && P[A[j]] == g) {
                    good = false;
                }
            if (good) {
                break;
            }
        }
        P[i] = g;
        cout << g;
    }
    cout << "\n";
}