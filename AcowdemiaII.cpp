#include <bits/stdc++.h>
using namespace std;
int K, N;
map<string, int> names; 
char answer[101][101];

int main() {
    cin >> K >> N;
    for (int i = 0; i < N; i++) {
        string name; 
        cin >> name;
        names[name] = i;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j == i) {
                answer[i][j] = 'B';
            }
            else {
                answer[i][j] = '?';
            }
        }
    }
    for (int i = 0; i < K; i++) {
        string pubs[101];
        for (int j = 0; j < N; j++) {
            cin >> pubs[j];
        }
        for (int k = 0; k < N; k++) {
            bool alpha = true;
            for (int l = k + 1; l < N; l++) {
                if (pubs[l - 1] > pubs[l]) {
                    alpha = false;
                }
                if (!alpha) {
                    int a = names[pubs[k]]; 
                    int b = names[pubs[l]];
                    answer[a][b] = '0'; 
                    answer[b][a] = '1';
                }
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << answer[i][j];
        }
        cout << "\n";
    }
}