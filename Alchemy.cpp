#include <bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> mats(N);
    for (auto& i : mats) {
        cin >> i;
    }
    int it;
    cin >> it;
    vector<vector<int>> need(N);
    while (it--) {
        int wanted, m;
        cin >> wanted >> m;
        need[--wanted].resize(m);
        for (auto& i : need[wanted]) {
            cin >> i;
            i--;
        }
    }
    int answer = 0;
    while (true) {
        vector<int> use(N);
        use[N - 1]++;
        bool supply = true;
        for (int i = N - 1; i >= 0; i--) {
            if (use[i] <= mats[i]) {
                mats[i] -= use[i];
                continue;
            }
            if (need[i].size() == 0) {
                supply = false;
                break;
            }
            int used = min(use[i], mats[i]);
            mats[i] -= used;
            use[i] -= used;
            for (int j : need[i]) {
                use[j] += use[i];
            }
        }
        if (supply) {
            answer++;
        }
        else {
            break;
        }
    }
    cout << answer << "\n";
}