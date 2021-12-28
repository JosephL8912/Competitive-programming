#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    string S, T;
    cin >> S >> T;
    string answer;
    for (int i = 0; i < S.size(); i++) {
        answer += S[i];
        if (answer.size() >= T.size() && answer.substr(answer.size() - T.size()) == T) {
            answer.resize(answer.size() - T.size());
        }
    }
    cout << answer << "\n";
}