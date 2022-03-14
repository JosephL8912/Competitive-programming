#include <bits/stdc++.h>
using namespace std;
int N, L;
vector<int> citations;
int findIndex() {
    int HIndex = citations.size();
    while (HIndex > 0 && citations[HIndex - 1] < HIndex) {
        HIndex--;
    }
    return HIndex;
}

int main() {
    cin >> N >> L;
    for (int i = 0; i < N; i++) {
        int x; cin >> x;
        citations.push_back(x);
    }
    sort(begin(citations), end(citations), greater<int>());
    int HIndex = findIndex();
    if (HIndex < N) {
        for (int i = HIndex; i >= max(0, HIndex - L + 1); i--) {
            citations[i]++;
        }
    }
    sort(begin(citations), end(citations), greater<int>());
    cout << findIndex() << "\n";
}