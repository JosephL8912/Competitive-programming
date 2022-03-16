#include <bits/stdc++.h>
using namespace std;
const int dx[4] = { 1,0,-1,0 }; 
const int dy[4] = { 0,1,0,-1 };
int N, M;
char field[1001][1001];

bool valid(int i, int j) {
    return 0 <= i && i < N && 0 <= j && j < M && field[i][j] == 'C';
}
int main() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> field[i][j];
        }
    }
    int answer = 0;
    set<vector<pair<int, int>>> pairs;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (field[i][j] == 'G') {
                vector<pair<int, int>> adjacent;
                for (int k = 0; k < 4; k++) {
                    int ix = i + dx[k]; 
                    int jy = j + dy[k];
                    if (valid(ix, jy)) {
                        adjacent.push_back({ ix, jy });
                    }
                }

                if (adjacent.size() > 2) {
                    answer++;
                }
                else if (adjacent.size() == 2) {
                    sort(begin(adjacent), end(adjacent));
                    pairs.insert(adjacent);
                }
            }
        }
    }
    cout << pairs.size() + answer << "\n";
}