#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
multiset<int> chickens;
vector<pii> cows;
int C, N;

int main(void)
{
    freopen("helpcross.in", "r", stdin);
    freopen("helpcross.out", "w", stdout);

    cin >> C >> N;
    int x, y, answer = 0;
    for (int i = 0; i < C; i++) { 
        cin >> x; chickens.insert(x); 
    }
    for (int i = 0; i < N; i++) { 
        cin >> x >> y; cows.push_back(pii(y, x)); 
    }
    sort(cows.begin(), cows.end());
    for (int j = 0; j < N; j++) {
        auto whichChicken = chickens.lower_bound(cows[j].second);
        if (whichChicken != chickens.end() && *whichChicken <= cows[j].first) {
            answer++;
            chickens.erase(whichChicken);
        }
    }
    cout << answer << "\n";
}