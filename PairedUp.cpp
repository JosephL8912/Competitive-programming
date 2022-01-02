#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
vector<pii> cowAndOutput;
int N;
int main(void)
{
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
    cin >> N;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        cowAndOutput.push_back(pii(y, x));
    }
    sort(cowAndOutput.begin(), cowAndOutput.end());
    int answer = 0, i = 0, j = N - 1;
    while (i <= j) {
        int x = min(cowAndOutput[i].second, cowAndOutput[j].second);
        if (i == j) {
            x /= 2;
        }
        answer = max(answer, cowAndOutput[i].first + cowAndOutput[j].first);
        cowAndOutput[i].second -= x;
        cowAndOutput[j].second -= x;
        if (cowAndOutput[i].second == 0) {
            i++;
        }
        if (cowAndOutput[j].second == 0) {
            j--;
        }
    }
    cout << answer << "\n";
}