#include <bits/stdc++.h>
#define N 1005
#define ll long long
#define pb push_back
#define fs first
#define sc second
using namespace std;


ll green, yellow, c[N]; char a[100][100], b[100][100];

int main() {

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cin >> a[i][j];
            c[a[i][j] - 'A' + 1]++;
        }
    }
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {

            cin >> b[i][j];
            if (a[i][j] == b[i][j]) {
                green++;
                c[a[i][j] - 'A' + 1]--;
                continue;
            }

            if (c[b[i][j] - 'A' + 1]) {
                yellow++;
                c[b[i][j] - 'A' + 1]--;
            }

        }
    }
    cout << green << '\n' << yellow << '\n';
}