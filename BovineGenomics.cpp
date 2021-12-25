#include <bits/stdc++.h>
using namespace std;
int N, M;
string spot[100], plain[100];

bool test(int j)
{
    bool found[2][4] = { 0 };
    for (int i = 0; i < N; i++) {
        if (spot[i][j] == 'A') found[0][0] = true;
        if (spot[i][j] == 'C') found[0][1] = true;
        if (spot[i][j] == 'G') found[0][2] = true;
        if (spot[i][j] == 'T') found[0][3] = true;
    }
    for (int i = 0; i < N; i++) {
        if (plain[i][j] == 'A') found[1][0] = true;
        if (plain[i][j] == 'C') found[1][1] = true;
        if (plain[i][j] == 'G') found[1][2] = true;
        if (plain[i][j] == 'T') found[1][3] = true;
    }
    for (int i = 0; i < 4; ++i) {
        if (found[0][i] && found[1][i]) {
            return false;
        }
    }
    return true;
}

int main(void)
{
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    cin >> N >> M;
    for (int i = 0; i < N; i++){
        cin >> spot[i];
    }
    for (int i = 0; i < N; i++){
        cin >> plain[i];
    }
    int answer = 0;
    for (int j = 0; j < M; j++) {
        if (test(j)){
            answer++;
        }
    }
    cout << answer << "\n";
}